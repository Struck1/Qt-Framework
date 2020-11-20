#include <QCoreApplication>
#include <QObject>
#include "signala.h"
#include "slota.h"

int main()
{
     SignalA sigA;
     SlotA slotA;

     QObject::connect(&sigA, SIGNAL(onOperation(int, int)),&slotA, SLOT(add(int, int))); // onOpetaion <- add return
     sigA.makeOperationsSignal();

     /*
     QObject::disconnect(&sigA, SIGNAL(onOperation(int, int)),&slotA, SLOT(add(int, int)));
     sigA.makeOperationsSignal();
    */


     QObject::connect(&sigA, SIGNAL(onOperation(int, int)),&slotA, SLOT(div(int, int))); // onOpetaion <- add return
     sigA.makeOperationsSignal();

     QObject::connect(&sigA, SIGNAL(onOperation(int, int)),&slotA, SLOT(mul(int, int))); // onOpetaion <- add return
     sigA.makeOperationsSignal();

     QObject::disconnect(&sigA, SIGNAL(onOperation(int, int)),&slotA, SLOT(mul(int, int)));
     sigA.makeOperationsSignal();



    return 0;
}
