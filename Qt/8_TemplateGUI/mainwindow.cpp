#include "mainwindow.h"
#include "QPushButton"
#include "iostream"
#include "QDebug"

//MainWindow::MainWindow(QWidget *parent): QWidget(parent)
MainWindow::MainWindow(QWidget *parent): QWidget(parent)
{

    m_pushButton = new QPushButton("Cancel", this);
}

MainWindow::~MainWindow()
{
}



