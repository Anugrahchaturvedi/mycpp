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

int sumOfNodes(treeNodes<int>* root){
    int ans=root->data;
    for(int i=0;i<root->children.size();i++){
        ans+=sumOfNodes(root->children[i]);
    }
    return ans;
}
int main(){
treeNodes<int>* root= takeinputlevelwise();
cout << sumOfNodes(root);
}