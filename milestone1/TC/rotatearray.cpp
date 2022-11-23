
#include<bits/stdc++.h>
using namespace std;
int rotatearray (vector<int>&v, int num){
    vector<int>temp;
    for (int i = 0; i < num; i++)     
    {
        temp.push_back(v[i]);
    }
    for (int i = 0; i < v.size(); i++)     
    {
        v[i]=v[i+num];
    }
    int j;
     for (int i = (v.size()-num), j=0;j<num, i < v.size()-1;j++, i++)     
    {
        v[i]=temp[j];
    }
 for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";
    return 0;
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
    int num;
    cin>>num;
    rotatearray(v,num);
    
}