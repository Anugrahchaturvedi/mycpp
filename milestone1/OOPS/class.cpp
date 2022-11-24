#include<iostream>
using namespace std;
class student{
    public:
    int a;
    int b;

    student(){
       cout << "default constructor called" <<endl;
    }

    student(int random){
        a=random;
        cout << "paramaterzied constructor called" << endl;
    }


    student(int a,int b){
      this->a=a;
       this->b=b;
        cout << a <<endl;
        cout << b <<endl;
    }
};