
#include<iostream>
using namespace std;

int sum (int n)
{
    if(n==0)
    return 0;
    int small = sum(n/10);
    return n%10+small;
}
int main()
{
    int n;
    cin >>n;
    cout << sum(n);
    return 0;

} 