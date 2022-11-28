#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void pairsum(vector<int> &v,int num){
    sort(v.begin(),v.end());
  int i=0;
  int j=v.size();
  int c=0;
  while (i<j)          
  {
    if(v[i]+v[j]==num)
    {c++;i++;j++;}
    // cout << v[i] << " " <<v[j] <<endl;
    else if(v[i]+v[j]>num)
    j--;
    else if(v[i]+v[j]<num)
    i++;
  }
  
  cout << c <<endl;
}


int main()
{
    int t;
    cin>>t;
    int size;
    cin>>size;
    vector<int>v;
    for (int i = 0; i < size; i++)
    {
        int x;cin>>x;
        v.push_back(x);
        
    }
    int num;
    cin>>num;
    pairsum(v,num);
    
}