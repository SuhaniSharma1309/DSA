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
void deleteAtPosition(Node* &head, int pos){
    if(head==NULL){
        return;
    }
    if(pos==0){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp=head;
    for(int i=1; i<pos-1;i++){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head= NULL;
    head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"original list: ";
    printList(head);
    cout<<endl;

    int pos;
    cout<<"enter the position to delete: ";
    cin>>pos;
    
    deleteAtPosition(head,pos);
    cout<<"list after deletion: ";
    printList(head);
    return 0;
}