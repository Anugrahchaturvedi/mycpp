#include<iostream>
using namespace std;

int unique(int size, int arr[]){
  int s=0;
  for(int i=0;i<size;i++){
    s^=arr[i];
  }
  return s;
}




int main()
{
    int t;
    cin >>t;
    int size;
    cin>>size;
    int * array= new int[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    while(t--){
    cout <<unique(size,array);}
    return 0;
}