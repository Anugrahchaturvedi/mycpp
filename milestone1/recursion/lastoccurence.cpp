
#include<iostream>
using namespace std;

int lastocuurence(int arr[], int size, int x)
{
    if(size==0)
    return -1;
    int small=lastocuurence(arr+1,size-1,x);
    if(small==-1 && arr[0]==x)
    return 0;
    else
    if(small!=-1)
    return small+1;
    else
    return -1;
}



int main()
{
   int arr[]={5,5,2,2,3,5,8};
   int size=7;
    int x;
    cin >>x;
   cout << lastocuurence(arr,size,x);
    return 0;

} 