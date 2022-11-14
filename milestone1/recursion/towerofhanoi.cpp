#include<iostream>
using namespace std;

void towerofhanaoi(int n,char s, char a, char d)
{
    if(n == 0){
        return;
    }
if(n == 1){
    cout<<s <<" "<<d<<endl;
     return;
}
    
    
    
    towerofhanaoi(n-1, s, d, a);
        cout<<s<<" "<<d<<endl;
    
    towerofhanaoi(n-1, a, s, d );
     
}


int main()
{
    int n;cin>>n;
    char s,a,d;
    towerofhanaoi(n,s,a,d);
}