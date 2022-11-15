#include<iostream>
using namespace std;
int length(char str[]){
    if(str[0]=='\0')
    return 0;
    int smallst=length(str+1);
    return 1+ smallst;
}

void replace(char str[],char c1,char c2)
{
    if(str[0]=='\0')
    return ;
    if(str[0]==c1)
    {
       str[0]=c2;
       replace(str+1,c1,c2);
    }
    else
    replace(str+1,c1,c2);
}

int main()
{
    char str[100];
    cin>>str;
    char c1,c2;
    cin>>c1>>c2;
    replace(str,c1,c2);
    cout << str;
    cout << length(str);
}
