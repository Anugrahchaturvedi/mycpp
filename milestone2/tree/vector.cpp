#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int> *vp = new vector<int>();
    vector<int>v;
    v.push_back(10);
    v.push_back(19);

    for(auto it : v){
        cout <<  it << endl;
    }
    cout << v.at(1) <<endl;
 }