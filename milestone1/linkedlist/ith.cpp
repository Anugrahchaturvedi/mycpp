#include<iostream>
#include"linkedlist.cpp"
using namespace std;


node * takeinput(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node * temp=new node(data);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else {
            tail->next=temp;
            tail=temp;
        }
        cin>>data;
    }
}


int ith_input(node * head,int n){
    if(head==NULL)
    return 0;
    else{
        node * ptr=head;
        for(int i=0;i<n;i++){
            ptr=ptr->next;
        }
        return ptr->data;
    }
}

void print(node* head)
{
    if(head==NULL)
    return ;
    node * ptr= head;
    while(ptr!=NULL){
        cout << ptr->data << endl;
        ptr=ptr->next;
    }
}
int main(){
node * head=takeinput();
print(head);
// int n;
// cout << "enter a ith post";
// cin>>n;
// cout << ith_input(head,n);
}