#include <QCoreApplication>

/*
The C++ language doesn't support variable-length arrays on the stack. For example, the following code won't compile:

int myfunc(int n)
{
    int table[n + 1];  // WRONG
    ...
    return table[n];
}

The alternative is to allocate the array on the heap (with new):

int myfunc(int n)
{
    int *table = new int[n + 1];
    ...
    int ret = table[n];
    delete[] table;
    return ret;
}*/

int myfunc(int n)
{
    QVarLengthArray<int, 1024> array(n + 1);
    ...
    return array[n];
}



int main()
{


    return 0;
}
