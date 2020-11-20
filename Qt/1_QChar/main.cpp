#include <QChar>
#include <QDebug>

/*
QChar(uchar ch)
QChar(char ch)
QChar(wchar_t ch)
QChar(char16_t ch)
QChar(QLatin1Char ch)
QChar(QChar::SpecialCharacter ch)
QChar(int code)
QChar(uint code)
QChar(short code)
QChar(uchar cell, uchar row)
QChar(ushort code)
QChar()s
*/

int main()
{
    {
        QChar ch1('a');
        qDebug() << "ch1: " << ch1;

        QChar ch2('7');
        qDebug() << "ch2: " << ch2;

        QChar ch3(122);
        qDebug() << "ch3: " << ch3;

        qDebug() << "Qchar::Null: " << QChar::Null;


    }

    //Returns true if the character is a number (Number_* categories, not just 0-9); otherwise returns false.
    {
        QChar ch5('6');
        qDebug() << "ch5: " << ch5.isNumber();

    }

    //Returns true if the character is the Unicode character 0x0000 ('\0'); otherwise returns false.
    {
        QChar ch6('\0');
        qDebug() <<"ch6: " << ch6.isNull();

    }

    //Returns the lowercase equivalent if the character is uppercase or titlecase; otherwise returns the character itself.
    {
        QChar ch7('A');

        QChar ch8;

        ch8 =ch7.toLower();

        qDebug() << "ch7: " << ch7;
        qDebug() << "ch8: " << ch8;

    }

    return 0;
}
