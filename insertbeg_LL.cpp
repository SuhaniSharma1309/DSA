#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertatbeginning(Node* &head, int val){

    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void printlist(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){

    Node* head = NULL;

    insertatbeginning(head, 10);
    insertatbeginning(head, 20);
    insertatbeginning(head, 30);

    printlist(head);

    return 0;
}