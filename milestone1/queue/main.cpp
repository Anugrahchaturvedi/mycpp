#include<iostream>
#include"queue.h"
using namespace std;
int main(){
    queueUsingArray<int>q(5);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
   cout <<  q.dequeue(); 
    cout <<q.dequeue();
    cout << q.front() <<endl;

}
