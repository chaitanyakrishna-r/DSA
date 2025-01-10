#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;//creating node type pointer

    //custom constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertionAtHead(Node* &head, int data){
    //create new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void insertionAtTail(Node* &tail, int data){
    
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}
void printNode(Node* &head){
    Node* temp = head;
    // cout<<head<<endl;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    
    cout<<endl;
}


int main(){
    
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    Node* head = node1;
    Node* tail = node1;

    printNode(head);
    insertionAtHead(head, 12);
    insertionAtHead(head, 15);
    insertionAtTail(tail, 25);
    printNode(head);
    return 0;
}