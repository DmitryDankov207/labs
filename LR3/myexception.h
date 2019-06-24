#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H
#include <QString>

class MyException
{
public:
    MyException();
    QString Message() { return "элемент не выбран!"; }
};

#endif // MYEXCEPTION_H
