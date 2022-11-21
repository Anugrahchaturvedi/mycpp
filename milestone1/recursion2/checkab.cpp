#include<iostream>
#include<string>
using namespace std;

bool checkab(char s[]){
   if(s[0]=='\0')
   return true;
   if(s[0]!='a'){
    return false;
   }
   if(s[1]!='\0' && s[2]!='\0'){
    if(s[1]=='b' && s[2]=='b')
    return checkab(s+3);
   }
   return checkab(s+1);
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    cout << checkab(input);
    // cout << input << endl;

 }