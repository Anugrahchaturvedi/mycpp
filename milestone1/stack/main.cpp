#include<iostream>
#include"stack.cpp"

int main()
{
    stackUsingArray s1(5);
    s1.push(10);
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(15);
    cout << s1.top() <<endl;
    cout << s1.pop()  <<endl;
    cout << s1.pop()  <<endl;
    cout << s1.pop()  <<endl;
    cout << s1.pop()  <<endl;
    cout << s1.top()  <<endl;
    }
