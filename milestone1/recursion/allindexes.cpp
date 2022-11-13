
#include<iostream>
using namespace std;

int allindex(int arr[], int size, int x,int output[])
{
   if(size==0)
   return 0;
  
   int ans=allindex(arr,size-1,x,output);

   if(arr[size-1]==x)
  { output[ans]=size-1;
   return ans+1;}
  else
  return ans;

}


int main()
{
   int arr[]={5,5,2,2,3,5,8};
   int size=7;
    int x;
    cin >>x;
    int output[]={};
   cout << allindex(arr,size,x,output);
    return 0;

} 