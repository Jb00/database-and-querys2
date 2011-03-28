#ifndef USER_H
#define USER_H

#include <QString>
//User.h
//Define a user



class User
{


 protected :
        QString name;
        QString typeUser;
        QString id;
        QString workAtFacility;

public:
        User();
        User(QString, QString, QString);
        ~User();

        QString getId();
        QString getName();
        QString getFacility();
        QString getType();

};

#endif // USER_H
