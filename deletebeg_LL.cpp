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

void deleteAtBeginning(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp=head;
    head= head->next;
    delete temp;
}
void printlist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head= NULL;
    head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"original list: ";
    printlist(head);
    cout<<endl;

    cout<<"deleting at beginning: ";
    deleteAtBeginning(head);
    printlist(head);
    return 0;
}

