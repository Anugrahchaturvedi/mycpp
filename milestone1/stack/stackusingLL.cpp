#include<iostream>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node(T data){
        this->data=data;
        next=NULL;
    }
};

template <typename T>
class stackusingLL{
   Node<T>* head;
   int size;
   public:
   stackusingLL(){
    head=NULL;
    size=0;
   }
   int getSize(){
    return size;
   }
    bool isempty(){
        if(getSize()==0)
        return true;
        return false;
    }
   void push( T element){
    Node<T> * newNode;
    if(head==NULL)
     {
    //  newNode->data=element;
     head=newNode;
     size++;
     }
     else{
        // newNode->data=element;
        newNode->next=head;
        head=newNode;
        size++;
     }}

     T pop(){
        if(head==NULL)
        cout << "stack empty";
        else{
        T ans = head->data;
        Node<T>* temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
        }
     }


    T top(){
        if(isempty()){
            return -1;
        }
        return head->data;
    }
   
};