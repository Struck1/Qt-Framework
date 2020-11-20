#include <QString>
#include <QDebug>
#include <iostream>
/*
QString(const QByteArray &ba)
QString(const char *str)
QString(QString &&other)
QString(const QString &other)
QString(QLatin1String str)
QString(int size, QChar ch)
QString(QChar ch)
QString(const QChar *unicode, int size = -1)
QString()
*/

int main()
{
    //Ctor

        QString str("Deneme string");
        QString str1 = "Deneme string 2"; // Copy assingment
        QString str2(10, QChar('A'));
        QString str3(10, 'A');

        qDebug() << str;
        qDebug() << str1;
        qDebug() << str2;
        qDebug() << str3;

        QString str4("");
        qDebug() << str4.isEmpty();
        qDebug() << str4.isNull();

        //insert

        QString str5 = "Meal";
        str5.insert(1, QString("ontr"));
        qDebug() << str5;

        //Remove

        QString str6 = "Deneme";
        qDebug() << "remove(2,3): " << str6.remove(2,3); // return a referance to the string
        qDebug() << str6;

        QString str7 = "Ali Baba";
        qDebug() << str7.remove(QChar('a'), Qt::CaseInsensitive);

        //leftRef

        QString str8 = "Pineapple";
        QStringRef y = str8.leftRef(4);

        qDebug()<< str8;
        qDebug()<< y;

        //section

        QString str9;
        QString csv = "forename,middlename,surname,phone";
        QString path = "/usr/local/bin/myapp"; // First field is empty
        QString::SectionFlag flag = QString::SectionSkipEmpty;

        str9 = csv.section(',', 2, 2);   // str == "surname"
        qDebug() << str9;
        str9 = path.section('/', 3, 4);  // str == "bin/myapp"
        qDebug() << str9;
        str9 = path.section('/', 3, 3, flag); // str == "myapp"
        qDebug() << str9;

        // replace

        QString str10 = "Emre; Bicen; Falan; Filan";
        str10.replace(';', ',');
        qDebug() << str10;


        //indexOf

        QString str11 = "emre felan";
        int index;

        index = str11.indexOf('f');
        qDebug() << index;


        //mid

        QString str12 = "emre deneme bicen";
        QString strOut;

        strOut = str12.mid(5,6);
        qDebug() << strOut;

        strOut = str12.mid(5);
        qDebug() << strOut;


        //rigthJustified

        QString str13 = "emre";

        QString t = str13.rightJustified(8, '.');

        qDebug() << t;

        //trimmed

        QString str14 = "  emre/ bicen/ lol";
        QString str15 = str14.trimmed();

        qDebug()<< str15;

        //truncate

        QString str16 = "emreee";

        str16.truncate(3);

        qDebug() << str16;

        //repeated

        QString str17 = "emre";

        QString str18 = str17.repeated(4);

        qDebug() << str18;

        //contains

        QString str19 = "LoL";

        qDebug() << str19.contains("lol", Qt::CaseInsensitive);


        //number static

        QString str20;

        str20 = QString::number(1230);

        qDebug() << str20;

        //+ and += operators

        QString str21("emre");
        QString str22("bicen");
        QString result;

        result = str21 + str22;
        std::cout << result.toStdString() << std::endl;

        result += QString("nigde");
        std::cout << result.toStdString() << std::endl;

        //split

         QString str23 = "Ankara,Kastamonu,Orhan";

         QStringList list1 = str23.split(',');

         qDebug() << "***************************************************";

         qDebug() << list1;

         foreach(QString item, list1){
             qDebug() << item;
         }

          qDebug() << "***************************************************";

          QString str24 = "Ankara,,Kastamonu,Orhan";
          QStringList list2 = str24.split(',',Qt::SkipEmptyParts);
          qDebug() << list2;

          qDebug() << "***************************************************";


          QStringListIterator i(list2); // while
          while(i.hasNext()){
              qDebug() << i.next();
            }


           qDebug() << "***************************************************";

            for(int i=0; i<list2.size(); i++){
                qDebug()<< list2[i];
            }


            qDebug() << "***************************************************";

            //arg %n

            int a=5, b=7;

            QString str25("a = %1, b = %2");
            QString str26;
            QString str27;

            qDebug() << str25;

            str26 = str25.arg(a);
            qDebug() << str26;

           str27 = str26.arg(b);
           qDebug() << str27;

           qDebug() << QString("a=%1, b=%2").arg(a).arg(b);

           qDebug() << QString("a = %1, b = %1, c = %2, d = %2").arg(a).arg(b);

           qDebug() << "***************************************************";

           QString f = "10";           // current file's number
           QString total = "150";       // number of files to process
           QString fileName = "emre";    // current file's name

           QString status = QString("Processing file %1 of %2: %3")
                            .arg(f).arg(total).arg(fileName);
           qDebug() << "status : " << status;

           qDebug() << "*****************************************************";


           //QTextStream

           QTextStream qStr(stdin);
           QString str0;

           str0 = qStr.readLine();
           qDebug() << str0;


           qDebug() << "*****************************************************";


           //capacity - size
           //reserse - resize

            QString string("emre bicen");

            qDebug() << "string.size(): " << string.size();
            qDebug() << "string.cap(): " << string.capacity();
            qDebug() << string;

            string.resize(5); //"emre "

            qDebug() << string;




     return 0;
}
