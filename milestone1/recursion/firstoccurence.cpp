
#include<iostream>
using namespace std;

int firstoccurence(int arr[],int size ,int x)
{
    if(size==0)
    return -1;
    if(arr[0]==x)
    return 0;
    int small=firstoccurence(arr+1,size-1,x);
    if(small==-1)
    return small;
    else
    return small+1;
}

int main()
{
   int arr[]={11,2,3,4,5};
   int size=5;
    int x;
    cin >>x;
   cout << firstoccurence(arr,size,x);
    return 0;

}