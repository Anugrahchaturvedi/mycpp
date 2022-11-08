#include<iostream>
using namespace std;
int main()
{

    int i=0;
    int *p=&i;
    cout << p <<endl;
    cout << *p << endl;
    cout << *(p+1)<<endl;
    cout << *(p+1) <<endl;
    return 0;
}