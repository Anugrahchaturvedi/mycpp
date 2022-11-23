
#include<bits/stdc++.h>
using namespace std;

int triplet(vector<int>&v, int num)
{
    sort(v.begin(),v.end());
    int c=0;
    int k=0;
    int i;
    int j;
    while (k<i)
    {   i=k+1;
        j=v.size()-1;
        while (i<j)
        {
       if(v[i]+v[j]+v[k]==num)
       {c++;
       i++;j--; }
     else if(v[i]+v[j]+v[k]>num)
        {
            j--;
        }
        else if(v[i]+v[j]+v[k]<num){
            i++;
        }
       }
       k++;
    }
    return c;
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
    cout << triplet(v,num);
    
}