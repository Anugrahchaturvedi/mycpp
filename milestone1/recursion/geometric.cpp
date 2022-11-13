
#include<iostream>
#include<math.h>
using namespace std;


double gp( double n)
{
    if(n==0)
    return 1;
    float small= gp(n-1);
    return small + pow(0.5,n);


}

int main()
{ 
    int n;
    cin>>n;
   cout <<gp(n);
    return 0;

} 