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

    int sumNode(treeNodes<int>* root){
        if(root->children.size()==0)
        return root->data;
        int sum=0;
        for(int i=0;i<root->children.size();i++)
        sum+=sumNode(root->children[i]);
    }

treeNodes<int>* maxSumNode(treeNodes<int>* root) {
    
      if(root==nullptr) return nullptr;
    treeNodes<int> *result = root; // root node
    int maxSum = sumNode(root); // Calculate sumNode for root Node
    int childCount = root->children.size();
    for(int i=0; i<childCount; i++)
    {
        treeNodes<int> *temp = maxSumNode(root->children[i]);
        int sum = sumNode(temp);
        if(sum > maxSum)
        {
            maxSum = sum;
            result = temp;
        }
    }
    return result;
}

int main(){
  treeNodes<int>* root = takeinputlevelwise();
// 1 3 2 3 4 2 5 6 0 0 0 2 7 8 0 0
    treeNodes<int>* ans= maxSumNode(root);  
    cout << ans->data <<endl;
}