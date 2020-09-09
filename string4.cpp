//concatation
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstname;
    string lastname;
    string fullname;
    getline(cin,firstname);
    getline(cin,lastname);
    fullname=firstname+lastname;
    cout<<fullname;
    return 0;
}