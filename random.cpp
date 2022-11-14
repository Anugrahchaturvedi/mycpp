#include<string.h>
#include<iostream>
using namespace std;


int main()
{
    string s= "anugrah";
    // s.replace(0,1,'u');
       string str1 = s.substr(0).replace(0, 1, "u");
    cout << str1 << endl ;
    return 0;
}