#include<bits/stdc++.h>
using namespace std;
class student {
    int age ;
    char * name ;
    public:
    student(char * name, int age){
    this-> age=age;
    this-> name=name;
}

void display(){
    cout << name << " " << endl;
    cout << age << " " <<endl;
}

//copy constructor with shallow copy
student(student &s){
    this->age = s.age;
    this-> name=s.name;
}

//copy constructor with deep copy
student (student &s){
    this ->name= new char[strlen(s.name)+1];
    strcpy(this->name,s.name);
}

};


