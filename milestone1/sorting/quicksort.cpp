#include<iostream>
using namespace std;
int partition(int input[],int start, int end)
{
    int pivot=input[start];
    int pivot_index;
    int c=0;
    for (int i = start+1; i <= end; i++)
    {
        if(input[i]<=pivot)
        c++;
    }
    pivot_index=start+c;
    int temp = input[start];
    input[start] = input[pivot_index];
    input[pivot_index] = temp;

    int i = start, j = end;

   while((i <=pivot_index) && (j >= pivot_index)){
      
    
      while(input[i]<=pivot){
         i++;
     } 
   
       while(input[j] > pivot) {
         j--;
     }
        if(i <pivot_index  &&  j >pivot_index){
         int temp = input[i];
         input[i] = input[j];
         input[j] = temp;
        i++;
         j--;
     }
   
   }
   return pivot_index;
 
}
void quick_Sort(int input[],int start,int end)
{
    if(start>=end)
    return;
    int pivot = partition(input,start,end);
    quick_Sort(input,start,pivot-1);
    quick_Sort(input,pivot+1,end);

}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
  cin >> input[i];
  quick_Sort(input,0, length-1);
  for(int i = 0; i < length; i++) {
  cout << input[i] << " ";
  }
}