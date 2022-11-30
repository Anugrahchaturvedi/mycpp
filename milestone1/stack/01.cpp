#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s; 
    s.push(19);
    s.push(29);
    cout << s.top() <<endl;
}