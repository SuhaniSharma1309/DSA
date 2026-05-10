#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtPos(Node* &head, int val, int pos){
    Node* newnode=new Node(val);
    if(pos==1){
        newnode->next=head;
        head=newnode;
        return;
    }
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void printlist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL; //empty
    insertAtPos(head, 10, 1);
    insertAtPos(head, 20, 2);
    insertAtPos(head, 30, 3);
    insertAtPos(head, 15, 2);
    printlist(head);
    return 0;
}