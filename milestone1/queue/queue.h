
#include<iostream>
using namespace std;
template<typename T>

class queueUsingArray{
    T* data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
        queueUsingArray(int s){
            data=new T[s];
            nextIndex=0;
            firstIndex=-1;
            size=0;
            capacity=s;
        }
        int getSize(){
            return size;
        }

        bool iSEmpty(){
            return size==0;
        }

        void enqueue(T element){
            if(size==capacity)
               { cout << "queue full" << endl;
                return ;}
            data[nextIndex]=element;
            nextIndex=(nextIndex+1)%capacity;
            if(firstIndex==-1)
            {firstIndex=0;}
            size++;
        }

        T front(){
            if(iSEmpty()){
                cout << "Queue is empty " <<endl;
            }

            return data[firstIndex];
        }

        T dequeue(){
            if(iSEmpty()){
               { cout << "Queue is empty" << endl;
                return 0;}
                T ans=data[firstIndex];
                firstIndex=(firstIndex+1)%capacity;
                size--;
                if(size==0){
                    firstIndex=-1;
                    nextIndex=0;
                }
                return ans;

            }
        }
};