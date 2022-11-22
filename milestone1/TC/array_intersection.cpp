#include<iostream>
#include<vector>
using namespace std;

void intersection(int n,int arr1[],int m,int arr2[]){
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr1[i]==arr2[j])
             v.push_back(arr1[i]);
        }
        
    }
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";
}



int main()
{
    int t;cin>>t;
    int n,m;
    cin>>n;
    int * arr1=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    cin>>m;
    int * arr2=new int[m];
    for(int i=0;i<m;i++)
    cin>>arr2[i];
    intersection(n,arr1,m,arr2);
}