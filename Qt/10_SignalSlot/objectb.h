#ifndef OBJECTB_H
#define OBJECTB_H

#include <QObject>

class ObjectB : public QObject
{
    Q_OBJECT
public:
    explicit ObjectB(QObject *parent = nullptr);

signals:

public slots:
    void recieveBObject(QString param);
};

#endif // OBJECTB_H
