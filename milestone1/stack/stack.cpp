#include<iostream>
#include<climits>
using namespace std;
class stackUsingArray{
 int * data;
 int nextIndex;
 int capacity; //total class
    public:
    //constructor to intialize the value
    stackUsingArray(int totolsize){
        data= new int[totolsize]; //pointing our pointer to the new index
        nextIndex=0;
        capacity=totolsize;
    }
   // size function
   int size(){
    return nextIndex;
   }

   //isempty fucntion
   bool isEmpty(){
return nextIndex==0;
   }

   //push function
  void push(int val){
    if(nextIndex==capacity)
    {cout << "stack is full" <<endl;
    return ;}
    data[nextIndex]=val;
    nextIndex++;
  } 

  // pop function
  int pop(){
    if(isEmpty()){
        cout << "stack empty" <<endl;
        return INT_MIN;
    }
    nextIndex--;
    return data[nextIndex];
  }

  //top function
  int top(){
    if(isEmpty()){
        cout << "stack empty " <<endl;
        return INT_MIN;
    }
    return data[nextIndex-1];
  }
};
