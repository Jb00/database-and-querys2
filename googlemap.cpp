#include "googlemap.h"

QGoogleMap::QGoogleMap(QWidget *parent): QWebView(parent)
{
    pendingReq = 0;
    mgr = new QNetworkAccessManager(this);
    connect(mgr, SIGNAL(finished(QNetworkReply*)), this, SLOT(reply(QNetworkReply*)));

    geocode("");
}

void QGoogleMap::reply(QNetworkReply *rep){

    QString replyStr( rep->readAll() );
    QStringList coordinateStrList = replyStr.split(",");

    if( coordinateStrList.size() == 4) {
        QPointF coordinate( coordinateStrList[2].toFloat(),coordinateStrList[3].toFloat() );
        coord << coordinate;
    }
    --pendingReq;
    if( pendingReq<1 )
        emit( reloadMap());
}

void QGoogleMap::geocode(const QString& address)
{
    clearCoord();
    QString requestStr( tr("http://maps.google.com/maps/geo?q=%1&output=%2&key=%3")
            .arg("ottawa,canada")
            .arg("csv")
            .arg("ABQIAAAAkM8_WK_TbCjvkBG---ZIthTXs0ONl_M15hKlZqcx7qWsuP6DyBTkW6g_eiyHuBRFmEIh0OKgyQ9MgQ") );

    mgr->get( QNetworkRequest(requestStr) );
    ++pendingReq;
}

void QGoogleMap::loadCoord(){

    QStringList scriptStr;
        scriptStr
                << "var map = new GMap2(document.getElementById(\"map\"));"
                << "var bounds = new GLatLngBounds;"
                << "var markers = [];"
                << "map.setCenter( new GLatLng(0,0),1 );";

        int num=-1;
        foreach( QPointF point, coord ) {
            scriptStr << QString("markers[%1] = new GMarker(new GLatLng(%2, %3));")
                                 .arg(++num)
                                 .arg(point.x())
                                 .arg(point.y());
        }

        scriptStr
                << "for( var i=0; i<markers.length; ++i ) {"
                << "   bounds.extend(markers[i].getPoint());"
                << "   map.addOverlay(markers[i]);"
                <<    "}"
                <<    "map.setCenter(bounds.getCenter());";


        this->page()->mainFrame()->evaluateJavaScript( scriptStr.join("\n") );
}

void QGoogleMap::clearCoord(){coord.clear();}
