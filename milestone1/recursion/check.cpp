
#include<iostream>
using namespace std;

bool check(int arr[],int size,int x){
    if(size ==0)
    return false;
    if(size==1)
    {
        if((*arr)==x)
        return true;
    }
    if((*arr)==x)
        return true;
    check(arr+1,size-1,x);
}

int main()
{
   int arr[]={11,2,3,4,5};
   int size=5;
    int x;
    cin >>x;
   cout <<  check(arr,size,x) << endl;
    return 0;

}