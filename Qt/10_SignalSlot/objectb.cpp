#include "objectb.h"
#include <QDebug>

ObjectB::ObjectB(QObject *parent) : QObject(parent)
{}


void ObjectB::recieveBObject(QString param)
{
    qInfo() << "Reciever side :" << param;
}
