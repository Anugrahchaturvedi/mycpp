#include<iostream>
#include"linkedlist.cpp"
using namespace std;
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



// take input

node * takeinput(){
    int data;
    cin>>data;
    node* head =NULL;
    while(data!=-1){
        node * temp=new node(data);
        if(head==NULL)
        {
            head=temp;
        }
        else {
        node * ptr=head;
        while(ptr->next!=NULL)
        {
         ptr=ptr->next;
            }
        
        ptr->next= temp;
        }
        cin>>data;
    }
}
int  main()
{

// statically
node n1(1);
node n2(2);
n1.next=&n2;
node *head=&n1; // storing head address 
// cout << n1.data << " " << n2.data << endl;
// cout << head->data << endl;


//dynamically
node * n3 = new node(10);
node * n4 = new node(20);
n3->next=n4;
node * head2=n3;

// cout << n3->data << " " << n4->data;

print(head2);
takeinput();
}