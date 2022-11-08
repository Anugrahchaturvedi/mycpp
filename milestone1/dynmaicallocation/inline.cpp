#include<iostream>
using namespace std;

inline int sum(int a, int b)
{
    int c = a+b;
    return c;
}
int main()
{
    int a =2;
    int b=5;
    int res=0;
   int c = (a>b)? res=1: res=2;
cout << sum(a,b);

    return 0;

}