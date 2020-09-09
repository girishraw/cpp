// compare strings
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("c++ program");
    string str1("cpp progrm");
    if(str.compare(str1)==0)
    cout<<"strings are equal";
else
{
    cout<<"strings are unequal";
}
return 0;

    
}