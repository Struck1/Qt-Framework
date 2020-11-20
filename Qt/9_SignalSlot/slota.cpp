#include "slota.h"
#include <QDebug>

SlotA::SlotA(QObject *parent) : QObject(parent)
{}


int SlotA::add(int a, int b)
{
    qDebug()<< "slota add: ";
    return a + b;
}


int SlotA::div(int a, int b)
{
    qDebug()<< "slota div: ";
    return a / b;
}



int SlotA::mul(int a, int b)
{
    qDebug()<< "slota mul: ";
    return a * b;
}
