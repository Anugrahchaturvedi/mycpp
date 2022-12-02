#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[],int size){

    vector<int>v(size);
    for(int i=size-1;i>=0;i--)
    {       int count =0;
        for (int j = i-1; j!=0; j--)
        {
            if(arr[j]<=arr[i])  
           { count++;}
            
        }
        v.push_back(count);
    break;
        
    }
    for(auto it : v){
        cout << it << " " ;
    }
}


int main(){
    int arr[]={60,70,80,100,90,75,80,120};
    int size=8;
     solve(arr,size);
}