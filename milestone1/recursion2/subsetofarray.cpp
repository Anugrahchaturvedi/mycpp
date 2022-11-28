#include<iostream>
using namespace std;

int subset(int arr[],int size, int startindex, int output[][20]){
    if(startindex==size)
   { output[0][0]=0;
    return 1;}

int smallsize= subset(arr,size,startindex+1,output);
for (int i = 0; i < smallsize; i++)
{
    
}

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
  
}
