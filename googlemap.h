#ifndef GOOGLEMAP_H
#define GOOGLEMAP_H

#include <QtWebKit/QtWebKit>
#include <QWidget>

class QGoogleMap: public QWebView
{
    Q_OBJECT

public:
    explicit QGoogleMap(QWidget *parent=0);

public slots:
    void reply(QNetworkReply *);
    void geocode(const QString &addr);
    void loadCoord();
    void clearCoord();

signals:
    void reloadMap();

private:
    int pendingReq;
    QNetworkAccessManager *mgr;
    QList<QPointF> coord;
};

#endif // GOOGLEMAP_H
