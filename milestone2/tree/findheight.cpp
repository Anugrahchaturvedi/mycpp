#include<iostream>
#include<queue>
#include"tree.h"
using namespace std;
treeNodes<int>* takeinputlevelwise(){
    int rootData;
    cout << "Enter data" <<endl;
    cin>>rootData;
    treeNodes<int>* root=new treeNodes<int>(rootData);
    queue<treeNodes<int>*> pendingNodes;
    pendingNodes.push(root); //phle root push kia
    while(pendingNodes.size()!=0){
        treeNodes<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter Num of children of" << front->data <<endl;
        int numChild;
        cin>>numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " <<i << "th child of " << front->data <<endl;
            cin>>childData;
            treeNodes<int>* child= new treeNodes<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
        
    }

    return root ;

}

int height(treeNodes<int>* root){
    if(root==NULL)
    return 0;
    int max=0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int temp=height(root->children[i]);
        if(temp>max)
        max=temp;
    }
    return max+1;
}


int main(){
treeNodes<int>* root= takeinputlevelwise();
cout << height(root);
}