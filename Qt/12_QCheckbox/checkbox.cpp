#include "checkbox.h"
#include "ui_checkbox.h"

CheckBox::CheckBox(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CheckBox)
{
    ui->setupUi(this);
}

CheckBox::~CheckBox()
{
    delete ui;
}

