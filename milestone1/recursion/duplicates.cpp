#include<iostream>
using namespace std;
int length(char str[]){
    if(str[0]=='\0')
    return 0;
    int smallst=length(str+1);
    return 1+ smallst;
}

void duplicates(char str[])
{
    if(str[0]=='\0')
    return ;
    if(str[0]==str[1])
     {int i;
        for( i=1;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
        str[i-1]='\0';
        duplicates(str);
     }
     duplicates(str+1);
}
int main()
{
    char str[100];
    cin>>str;
    // cout << length(str);
    duplicates(str);
    cout << str ;
}
