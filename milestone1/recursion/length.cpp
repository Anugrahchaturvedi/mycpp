#include<iostream>
using namespace std;
int length(char str[]){
    if(str[0]=='\0')
    return 0;
    int smallst=length(str+1);
    return 1+ smallst;
}
int main()
{
    char str[100];
    cin>>str;
    cout << length(str);
}
