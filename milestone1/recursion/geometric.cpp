
#include<iostream>
using namespace std;


int countzeros(int n)
{

    if((n>=1)&&(n<=9))
    return 0;
    if(n==0)
    return 1;

    int ans = countzeros(n/10);
    if(n%10==0)
        return ans +1;
        else
    return ans;
}

int main()
{ 
    int n;
    cin>>n;
    cout << countzeros(n);
    return 0;

} 