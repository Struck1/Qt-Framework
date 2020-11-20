#ifndef SIGNALA_H
#define SIGNALA_H

#include <QObject>

class ObjectA : public QObject
{
    Q_OBJECT
public:
    explicit ObjectA(QObject *parent = nullptr);

signals:
    void signalFunction(QString param);

};

#endif // SIGNALA_H
