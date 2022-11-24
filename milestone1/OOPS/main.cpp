#include<iostream>
#include"student.cpp"
using namespace std;

int main()
{

  char name[]= "anugrah";
  int age =5;
  student s1(name,age);
  s1.display();

  name[3]='h';
  student s2(name,age);
  s2.display();
  s1.display();

  student s3=s1;
}