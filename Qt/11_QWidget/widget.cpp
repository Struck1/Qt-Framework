#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("EMRE");

    //pencerenin sol üst pozisyonunu çağırıyor
    qDebug()<< "pos: " << pos();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{

    QMessageBox msgBox;

    /*
    msgBox.setMinimumSize(300,400);
    msgBox.setWindowTitle("Window Title");
    msgBox.setText("The document has been modified");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::YesAll);
    int ret = msgBox.exec();

    switch (ret) {
    case QMessageBox::Yes:
        qDebug()<< "User said Yes";
        break;
    case QMessageBox::No:
        qDebug()<< "User said No";
        break;
    case QMessageBox::YesAll:
        qDebug()<< "User said YesAll";
        break;
    }
    */

   int ret = QMessageBox::question(this, "Window Title", "The document has been modified",QMessageBox::Yes | QMessageBox::No | QMessageBox::YesAll );

   switch (ret) {
   case QMessageBox::Yes:
       qDebug()<< "User said Yes";
       break;
   case QMessageBox::No:
       qDebug()<< "User said No";
       break;
   case QMessageBox::YesAll:
       qDebug()<< "User said YesAll";
       break;
   }

}

void Widget::on_pushButton_2_clicked()
{
    doSometing();

}

void Widget::doSometing()
{
    qDebug()<< "Do someting";
}

void Widget::on_pushButton_3_clicked()
{
    qDebug() << "checkabled" << ui->pushButton_3->isChecked();

}

void Widget::on_pushButton_6_clicked()
{
    QString msg;

    if(ui->pushButton_3->isChecked()){
        msg = "Yes, checked";
    }else{
        msg = "No, not checked";
    }

    QMessageBox::information(this,"Warning", msg);

}
