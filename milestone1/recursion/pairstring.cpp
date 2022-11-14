#include<iostream>
#include<math.h>
using namespace std;

int length(char input[]){
     int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    return len;
}
void pairstring(char input[])
{
    int len = length(input);
    int i;
    if(len==1)
    return ;
    if(input[0]==input[1])
    {
        for( i=len;i>=1;i--)
        {
            input[1+i]=input[i];
        }
        input[i+1]='*';
    }
 pairstring(input+1);
     
     }
int main()
{   
    char input[100];
    cin.getline(input, 100);
    pairstring(input);
    cout << input << endl;
}