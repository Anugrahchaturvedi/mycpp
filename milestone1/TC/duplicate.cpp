#include<iostream>
using namespace std;
int duplicate(int size,int arr[]){
    int ans[size-2]={0};
    for(int i=0;i<size-2;i++){
        ans[arr[i]]++;
    }
    for(int i=0; i<size-2;i++){
        if(ans[i]==2)
        return i;
    }

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
    cout <<duplicate(size,array);}
    return 0;
}