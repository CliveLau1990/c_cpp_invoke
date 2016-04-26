#ifndef _CPP_HEADER_H_
#define _CPP_HEADER_H_

#ifdef __cplusplus
extern "C" {
#endif

int print(long l);
int print_i(int i);
int print_d(double d);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#include <iostream>
using namespace std;

class base
{
    public:
    base(){}
    virtual int print(long l) {cout<<"base "<<l<<endl;}
};

class sample:public base
{
    public:
    sample(){}
    int method(int i);
    int method(double d);
    int print(long l) {cout<<"sample "<<l<<endl;}
};
#endif

#endif /* end of _CPP_HEADER_H_ */
