
#include<iostream>
using namespace std;

bool sorted(int arr[],int size)
{
    if(size==0 || size==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    bool issorted=sorted(arr+1,size-1);
    return issorted;

}

int main()
{
   int arr[]={11,2,3,4,5};
   int size=5;
   cout <<  sorted(arr,size);
    return 0;

}