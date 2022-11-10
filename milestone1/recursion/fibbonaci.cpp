
#include<iostream>
using namespace std;

int fibbonaci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int smallout=fibbonaci(n-1)+fibbonaci(n-2);
    return smallout;
}

int main()
{
    int n;
   cin >>n;
  cout << fibbonaci(n) <<endl;
    return 0;

}