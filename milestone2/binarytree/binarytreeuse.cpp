#include<iostream>
#include"binarytree.cpp"
#include<queue>
using namespace std;

void printtree(binarytree<int>* root){
    if(root==NULL)
    return ;
    cout << root->data << ":";
    if(root->left!=NULL)
    {
        cout << "L" << root->left->data;
    }
    if(root->right!=NULL){
        cout << "R" <<root->right->data ;
    }
    cout << endl;
    printtree(root->left);
    printtree(root->right);
}
binarytree<int>* takeinput(){
    int rootData;
    cout << "enter data";
    cin>>rootData;
    if(rootData==-1)
    return NULL ;
    binarytree<int>* root = new binarytree<int>(rootData);
    binarytree<int>* leftchild= takeinput();
    binarytree<int>* rightchild= takeinput();
    root->left=leftchild;
    root->right=rightchild;
    return root;
}

binarytree<int>* takeInputLevelWise(){
    cout << "enter root data";
    int rootData;
    cin>>rootData;
    queue<binarytree<int>*>q;
    binarytree<int>* root = new binarytree(rootData);
    q.push(root);
   
   while(q.size()!=0){
    binarytree<int>* front=  q.front();
    q.pop();
    cout << "enter the left of " << front->data;
    int leftData ;
    cin>>leftData;
    if(leftData!=-1)
    {binarytree<int>* left =new binarytree(leftData);
    front->left=left;
    q.push(left);}
    int rightData;
    cout << "enter the right of " << front->data;
    cin>>rightData;
    if(rightData!=-1)
    {
    binarytree<int>* right =new binarytree(rightData);
    front->right=right;
    q.push(right);
    }
   
   }
return root;
}


int main(){
    // binarytree<int>* root= new binarytree(1);
    // binarytree<int>* node1= new binarytree(2);
    // root->left=node1;
    // binarytree<int>* node2= new binarytree(3);
    // root->right=node2;
    // printtree(root);
    // binarytree<int>* root= takeinput();
    binarytree<int>* root = takeInputLevelWise();
    printtree(root);   
    
}