//swaping of two numbers with out using third variable
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=10,b=10;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    cout<<"elements are:";
    cout<<"a="<<a<<"b="<<b<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    cout<<"elements are";
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
    
}