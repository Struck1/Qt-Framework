#include <QCoreApplication>
#include <QObject>
#include "objecta.h"
#include "objectb.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    auto  a = new ObjectA;

    auto  b = new ObjectB;

    /*
    QObject::connect(a, SIGNAL(signalFunction(QString)), b, SLOT(recieveBObject(QString))); // String metod

    a->signalFunction("Hello");
    */

    /*
    QObject::connect(a, &ObjectA::signalFunction, b, &ObjectB::recieveBObject); // Function adress metod

     a->signalFunction("Hello");
     */
    /*
     QObject::connect(a, &ObjectA::signalFunction, [&](const QString & msg){qInfo() << "message for lambda   : " << msg;});

     a->signalFunction("Hello");
     */

     QObject::connect(a, &ObjectA::signalFunction, b, &ObjectB::recieveBObject, Qt::QueuedConnection);


     a->signalFunction("Hello");


    return app.exec();
}
