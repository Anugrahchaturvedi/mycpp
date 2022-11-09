
#include<iostream>
using namespace std;

int count (int n)
{
    if(n==0)
    return 0;
    int out = count(n/10);
    return out +1;
       

}

int main()
{
    int n;
   cin >>n;
  cout << count(n);
    return 0;

}