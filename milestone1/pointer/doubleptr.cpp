#include<iostream>
using namespace std;
int main()
{
    int i =10;
    int *ptr =&i;
    int **newptr = &ptr ;
    cout << newptr  << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    return 0;

}