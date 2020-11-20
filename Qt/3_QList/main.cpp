#include <QList>
#include <QDebug>

int main()
{

    QList<QString> names;

    names << "emre" << "bicen" << "felan" << "filan";

    qDebug() << names;

    names.append("lol");

    qDebug() << names ;

    names.insert(0, "lel");

    qDebug() << names ;
    qDebug() << names.size() ;

    QString name = names.takeAt(2);

    qDebug() << name ;

    if((names.isEmpty()== false) && names.size() >=2)
          names.removeAt(1);
    else
        qDebug() << "List is empty";

    qDebug() << names;

    int lastIndex = names.lastIndexOf("felan");

    if( lastIndex != -1)
        qDebug() << names.at(lastIndex) << " : " << lastIndex;
    else
        qDebug() << "does not found";

    foreach(QString str, names){
        qDebug()<< str;
    }


    if(names.endsWith("filan"))
        qDebug() << "item";

    return 0;
}
