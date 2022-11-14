
#include<iostream>
#include<string.h>
using namespace std;

void replacepi(char s[],int size)
{
    if(size<=1)
    return ;
    else
    if(s[0]=='p' && s[1]=='i'){
        for(int i=size-1;i>=0;i--)
        {
            s[i+2]=s[i];
        }
        s[0]='3';
        s[1]='.';
        s[2]='1';
        s[3]='4';
        replacepi(s,size);
    }
    else
    replacepi(s+1,size-1);
  
}
int main()
{
    int size;
    cin >>size;
    char s[size];
    for (int i =0;i<size-1;i++)
     { char x;
      cin >>x;
        s[i]=x;
        }

    replacepi(s,size);
    return 0;

} 