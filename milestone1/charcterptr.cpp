#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,};
    char c[]="acb";
    char s ='a';
    char * ptr= &s;
    cout << a << endl;
    cout << c <<endl;
    cout << s << endl;
    cout << ptr <<endl;

    return 0;
}