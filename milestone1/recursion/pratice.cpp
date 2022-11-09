#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    return 1;

    int smalloutput=fact(n-1);
    return n*smalloutput;

}
int main()
{
   int n;
   cin>>n;
   cout << fact(n);
    return 0;

}