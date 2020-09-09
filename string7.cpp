//display adress of element
#include<iostream>
#include<string>
using namespace std;
int main()
{
float a[5];float *p;int i;
cout<<"displaying adress using arrays";
for(i=0;i<5;++i)
{
cout<<"&a["<<i<<"]="<<&a[i];
}
p=a;
cout<<"displaying adress using pointer";
for(int i=0;i<5;++i)
{
    cout<<"p+"<<"i"<<"="<<p+i;
}
return 0;
}