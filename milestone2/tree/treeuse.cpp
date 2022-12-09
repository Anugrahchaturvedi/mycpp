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



treeNodes<int>* takeInput(){
    int rootData;
    cout << "Enter data" <<endl;
    cin>>rootData;
    treeNodes<int>* root=new treeNodes<int>(rootData);
    int n;
    cout << "enter number of children" ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        treeNodes<int>* child= takeInput();
        root->children.push_back(child);
    }
   return root; 
}



void printTree(treeNodes<int>* root){
    if(root==NULL)
    return ;
    cout << root->data << ":" ;
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}


int main(){
    // treeNodes<int>* root=new treeNodes<int>(1);
    // treeNodes<int>* node1=new treeNodes<int>(2);
    // treeNodes<int>* node2=new treeNodes<int>(5);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // printTree(root);

    // treeNodes<int>* root = takeInput();
    treeNodes<int> * root=takeinputlevelwise();
    printTree(root);
}

