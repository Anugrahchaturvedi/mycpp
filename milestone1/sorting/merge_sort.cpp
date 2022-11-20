#include<string.h>
#include<iostream>
using namespace std;
 void mergeArrays(int arr[],int start,int end)
 {
    int mid=(start+end)/2;
    int i=start,j=mid+1,k=0;
    int ans[end+1];

    while (i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        ans[k++]=arr[i++];
        else 
        ans[k++]=arr[j++];
    }

    while (i <= mid)
        ans[k++] = arr[i++];

    while (j <= end)
        ans[k++] = arr[j++];
    
    int m=0;
    for (int n=start;n<=end;n++)
    {
        arr[n]=ans[m];
        m++;
    }
 }
void merge(int arr[],int start ,int end)
{
   if(start>=end )
   return;
   int mid = (start+end)/2;
   merge(arr,start,mid);
   merge(arr,mid+1,end);
   mergeArrays(arr,start,end);

}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
  cin >> input[i];
  merge(input,0, length-1);
  for(int i = 0; i < length; i++) {
  cout << input[i] << " ";
  }
}