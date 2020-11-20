#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class QPushButton;


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QPushButton *m_pushButton;

};



#endif // MAINWINDOW_H
