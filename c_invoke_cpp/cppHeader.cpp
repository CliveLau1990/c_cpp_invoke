#include "cppHeader.h"


sample testSample;

int print(long l)
{
    base * pb = &testSample;
    cout<<"print "<<l<<endl;
    pb->print(l);
}

int print_i(int i)
{
    cout<<"print_i "<<i<<endl;
    testSample.method(i);
}

int print_d(double d)
{
    cout<<"print_d "<<d<<endl;
    testSample.method(d);
}

int sample::method(int i)
{
    cout<<"method_int called "<<i<<endl;
}

int sample::method(double d)
{
    cout<<"method_double called "<<d<<endl;
}
