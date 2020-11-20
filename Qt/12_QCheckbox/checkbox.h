#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CheckBox; }
QT_END_NAMESPACE

class CheckBox : public QWidget
{
    Q_OBJECT

public:
    CheckBox(QWidget *parent = nullptr);
    ~CheckBox();

private:
    Ui::CheckBox *ui;
};
#endif // CHECKBOX_H
