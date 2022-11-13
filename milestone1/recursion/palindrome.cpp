
#include<iostream>
using namespace std;

bool palindrom(char s[],int size,int start,int last)
{
    if(size==0 || start>=last)
    {return false;}
    if(s[start]==s[last])
    {return true;}
    else return false;
    palindrom(s+1,size-1,start+1,last-1);
}
int main()
{
    int size;
    cin >>size; 
    char s[size];
    for (int i =0; i<size;i++)
    cin >> s[i];
    int start=0;
    int last=size-1;
    cout << (palindrom(s,size,start,last));
    return 0;

} 