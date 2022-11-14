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

int strtono(char input[])
{
    int a,b;
    int len= length(input);
    if((input[1])=='\0')
    return input[0]-48;
    if(input[0]=='0')
    return strtono(input+1);
    else
    {
     b=input[0]-48;
     a=strtono(input+1);
    }
    return (b*pow(10,(len-1)))+a;
    

}

int main()
{   
    char input[100];
    cin.getline(input, 100);
    strtono(input);
    cout << input << endl;
}