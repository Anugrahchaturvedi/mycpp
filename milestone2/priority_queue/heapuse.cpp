#include"priorityqueue.h"
#include<iostream>
using namespace std;
int main(){
    priorityQueue p;
    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(17);
    p.insert(4);
    p.insert(21);

    cout << p.getSize() <<endl;
    cout << p.getMin() <<endl;
    while (!p.isempty())
    {
        cout << p.removemin() << " " ;
    }
    cout << endl;
    

}