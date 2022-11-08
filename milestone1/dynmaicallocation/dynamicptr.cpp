#include<iostream>
using namespace std;
int main()
{
    int i =65;
    char c =i;
    cout << c << endl;
    int *ptr = &i ;
    char *p = (char*)ptr ;
     cout<< p << endl;
    return 0;

}