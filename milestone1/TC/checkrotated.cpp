#include<bits/stdc++.h>
using namespace std ;

int checkrotated(vector<int> &v){
    int res=0;
    int min=v[0];
   for (int i = 0; i < v.size(); i++)
   {
    
    
    if(v[i]<min)
    {min=v[i];
    res=i;}
   }
   return res;
}


int main()
{
   
    int size;
    cin>>size;
    vector<int>v;
    for (int i = 0; i < size; i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    cout << checkrotated(v);
    
}