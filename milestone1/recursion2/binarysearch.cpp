#include<iostream>
using namespace std;

int binary_search(int arr[],int start, int end, int key)
{
  if(start>=end){
    return -1;

  } 

  int mid= (start+end)/2;
  if(key==arr[mid])
  return mid;
  if(key<=arr[mid])
  return binary_search(arr,start,mid-1,key);
  if(key>arr[mid])
  return binary_search(arr,mid+1,end,key);
  
}

int main()
{
  int size;
  cin>>size;
  int arr[size];
  for (int i =0; i<size;i++)
  {
    cin>>arr[i];
  }
  int key ;
  cin>>key;
  int start=0;
  cout << binary_search(arr,start,size,key);
}