#include <QList>
#include <QDebug>
#include <iostream>

bool caseInsentiveLessThen(const QString &s1, const QString &s2){


    return s1.toLower() < s2.toLower();
}


int main()
{

    QList<int> list;
    list<< 88 << 12 <<55 << 66;

    qDebug() << list;

    std::sort(list.begin(), list.end());

    qDebug() << list;



    for(QList<int>::iterator i = list.begin(); i!=list.end(); i++){
        std::cout << *i << " ";
    }
    std::cout << "\n";
    qDebug() << "******************************************";

    QStringList list1;

    list1 << "AlpHa" << "BeTa"<< "gamma" << "DELTA";

    std::sort(list1.begin(), list1.end(), caseInsentiveLessThen);

    qDebug() << list1;

    qDebug() << "******************************************";
/*
    std::vector<int> vec { 10, 20, 30, 40 };

     // Iterator used to store the position
     // of searched element
     std::vector<int>::iterator it;

     // Print Original Vector
     std::cout << "Original vector :";
     for (int i=0; i<vec.size(); i++)
         std::cout << " " << vec[i];

     std::cout << "\n";

     // Element to be searched
     int ser = 30;

     // std::find function call
     it = std::find (vec.begin(), vec.end(), ser);
     if (it != vec.end())
     {
         std::cout << "Element " << ser <<" found at position : " ;
         std::cout << it - vec.begin() << " (counting from zero) \n" ;
     }
     else
         std::cout << "Element not found.\n\n";

*/


    return 0;
}
