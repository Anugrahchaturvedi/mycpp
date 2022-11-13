
#include<iostream>
using namespace std;

int multipliess(int m, int n)
{
   if(m==0 || n==0)
   return 0;
   else
   {int ans = multipliess(m,n-1);
   return ans + m;
   }
}

int main()
{ 
    int m,n;
    cin>>m>>n;
    cout << multipliess(m,n);
    return 0;

} 