
#include<iostream>
using namespace std;



int sumofarray(int arr[],int size)
{
    if(size==0)
    return 0;
    if(size==1)
    return *arr;
    int output = *(arr)+sumofarray(arr+1,size-1);
    return output;
}

int main()
{
   int arr[]={11,2,3,4,5};
   int size=5;
   cout << sumofarray(arr,size);
    return 0;

}