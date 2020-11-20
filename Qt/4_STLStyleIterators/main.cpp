#include <QVector>
#include <QList>
#include <QString>
#include <QDebug>

//STL tarzı yenileyiciler
//1. C<T>::iterator --> read-write
//2. C<T>::const_iterator --> read_only


//begin --> list[0];
//end --> list[max_index +1]

//Bir konteynar boş ise --> begin == end
//isEmpty()

//sonraki öğeye geçmek için ++ operatorü kullanırlır
//geçerli bir ögeye erişmek içinde * operatörü kullanılır


void print(QList<QString> & list ){
    QList<QString>::const_iterator i;

    for(i= list.constBegin(); i != list.constEnd(); i++){
        qDebug() << *i;
    }
}


int main()
{
    QList<QString> list;

    list << "A" << "B" << "C";

    QList<QString>::iterator i;

    for(i= list.begin(); i != list.end(); i++){
        qDebug() << *i;
    }

    qDebug() << "***********************************";

    for(i= list.begin(); i != list.end(); i++){
        *i = i->toLower();
     }

    print(list);

    return 0;
}
