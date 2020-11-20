#include <QPoint>
#include <QDebug>
#include <QSize>

int main()
{
    //dot product

    QPoint old(1,3);
    QPoint new_point(1,3);
    int lengthSquarred = QPoint::dotProduct(old, new_point);

    qDebug() << lengthSquarred;

    QSize sz(20, 40);

    qDebug() << sz.width() << " " << sz.height();

    sz.rwidth()++;
    sz.rheight() -= 10;


    qDebug() << sz.width() << " " << sz.height();


    return 0;
}
