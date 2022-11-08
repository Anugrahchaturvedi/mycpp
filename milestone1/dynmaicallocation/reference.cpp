#include<iostream>
using namespace std;
int main()
{
   int i =10;
   int &j=i;i++;
  
   cout << j << endl;
   int k=29;
   j=k;
   cout << j <<endl;
   cout << i << endl;

    return 0;

}