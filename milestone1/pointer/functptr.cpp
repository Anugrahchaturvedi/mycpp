#include<iostream>
using namespace std;

void fun (int *ptr)
{
    cout << *ptr <<endl;
    
}

void increment(int * ptr)
{
     ptr = ptr+1 ;
     cout << ptr <<endl;

}

void newincrement(int * ptr)
{
    cout << (*ptr)++ << endl ;
    cout << * ptr <<endl;
}
 int main()
{
  int i =10;
  int *p=&i;
  fun(p);

  cout << p <<endl;
  increment(p);
  cout << p <<endl;
  newincrement(p);
  cout << *p <<endl;

    return 0;
}