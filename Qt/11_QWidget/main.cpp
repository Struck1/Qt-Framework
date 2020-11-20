#include "widget.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    qDebug()<< "pos: " << w.pos();
    qDebug()<< "posx: " << w.pos().x();
    qDebug()<< "posy: " << w.pos().y();
    qDebug()<< "w.x: " << w.x();
    qDebug()<< "w.y: " << w.y();
    qDebug()<< "width" << w.width();
    qDebug()<< "framesize: " <<w.frameSize();
    return a.exec();
}
