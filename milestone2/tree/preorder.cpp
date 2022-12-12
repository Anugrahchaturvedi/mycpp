#include<iostream>
#include"tree.h"
#include<queue>
using namespace std;
treeNodes<int>* takeinputlevelwise(){
    int rootData;
    cout << "Enter data" <<endl;
    cin>>rootData;
    treeNodes<int>* root=new treeNodes<int>(rootData);
    queue<treeNodes<int>*> pendingNodes; //queue
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
void preorder(treeNodes<int>*root){
    cout << root->data << " ";
    for ( int i= 0; i < root->children.size(); i++)
    {   
        preorder(root->children[i]);
    }
    
}
void postorder(treeNodes<int>* root){
    for (int i = 0; i < root->children.size(); i++)
    {   
        postorder(root->children[i]);
    }
    
    cout << root->data <<" ";
}

int main(){
  treeNodes<int>* root = takeinputlevelwise();
//   cout << leafNode(root);
// 1 3 2 3 4 2 5 6 0 0 0 2 7 8 0 0  
    preorder(root);
    cout << endl;
    postorder(root);
}