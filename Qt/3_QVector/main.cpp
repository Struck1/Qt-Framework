#include <QCoreApplication>
#include <QVector>
#include <QDebug>
#include <iostream>


/*
QVector(InputIterator first, InputIterator last)
QVector(std::initializer_list<T> args)
QVector(QVector<T> &&other)
QVector(const QVector<T> &other)
QVector(int size, const T &value)
QVector(int size)
QVector()
*/

int main()
{

    QVector<QString> vector(10, "emre");
    qDebug() << vector;

    qDebug() << "*****************************";

    QVector<int> vector1(10, 8);
    qDebug() << vector1;

     qDebug() << "*****************************";

     QVector<int> vector2;
     for(int i=0; i<10; i++){
         vector2.append(i);
     }
     qDebug() << vector2;
     vector2.move(4,8);
     qDebug() << vector2;

     qDebug() << "*****************************";

     //at
     //[]

     QVector<int> vector3;
     for(int i=0; i<10; i++){
         vector3.append(i);
     }

     for(int i=0; i<vector3.size(); i++){
         qDebug() << "vect" << vector3.at(i);
     }
     for(int i=0; i<vector3.size(); i++){
         qDebug() << "vect" << vector3[i];
     }

     qDebug() << "*****************************";

     //<<

     QVector<int> vector4;

     for(int i=0; i<10; i++){
        vector4.append(i);
     }
     vector4 << 10 << 20 <<30;

     for(QVector<int>::iterator i = vector4.begin(); i != vector4.end(); i++)
         std::cout << *i << " ";

     std::cout << std::endl;

     qDebug() << "*****************************";

     foreach (int var, vector4)
         std::cout << var << " ";

     std::cout << std::endl;

     qDebug() << "*****************************";

     //qt container = c++ container

     QVector<int> vector6;

     vector6.push_back(55);
     vector6.push_back(56);
     vector6.push_back(57);
     vector6.push_back(58);
     vector6.push_back(59);


     for(auto iter= vector6.rbegin(); iter != vector6.rend(); iter++) { //auto key kullanılmasaydı std::reverse_iterator<int*> yazmamız gerekirdi
         std::cout << *iter << " ";                                     // tersten okuyoruz vektörü rbegin ile
         std::cout << std::endl;
     }

     qDebug() << "*****************************";

     for(auto iter= vector6.begin(); iter != vector6.end(); iter++) {
         std::cout << *iter << " ";
         std::cout << std::endl;
     }

    qDebug() << "*****************************";

     for(QVector<int>::reverse_iterator iter = vector6.rbegin(); iter != vector6.rend(); iter++) { //QVector ile
         std::cout << *iter << " ";
         std::cout << std::endl;
     }

     qDebug() << "*****************************";
     for(auto iter= vector6.cbegin(); iter != vector6.cend(); iter++) {
         //*iter const olarak döndü
         std::cout << *iter  << " ";
         std::cout << std::endl;
     }
    qDebug() << "*****************************";

    vector6.erase(vector6.begin() + 2);

    qDebug() << vector6;
    qDebug() << vector6.empty();
    qDebug() << vector6.indexOf(56);
    vector6.removeAt(1);
    qDebug() << vector6;
    qDebug() << vector6.count();

    //fromList

    QStringList list;
    list<< "emre" << "bicen" << "falan";
    qDebug() << list;

    QVector<QString> vect = list.toVector();
    qDebug()<< vect;
    qDebug()<< vect.size();

    return 0;
}
