#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void binary_search(int n, vector<int> &v1, int m, vector<int> &v2){
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int i=0,j=0;
    while (i<v1.size() && j<v2.size())
    {
        if(v1[i]!=v2[j])
          {if(v1[i]>v2[j])
          j++;
          else
          i++;}
        else 
        cout << v1[i] << " ";
        i++;
        j++;
    }
    }


int main()
{
    int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int m;
    cin>>m;
    vector<int>v2;
      for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    
    binary_search(n,v1,m,v2);}
    
}