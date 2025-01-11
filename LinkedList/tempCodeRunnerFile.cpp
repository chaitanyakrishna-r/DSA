#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> prev = nullptr;
        this -> next = nullptr;
    }
};

//travesing linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//gives length of linked list
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != nullptr){
       len++;
        temp = temp -> next;
    }
    return len;
}

void insertionAtHead(Node* &head,int data){
    //create temp node
    Node* temp = new Node(data);

    //update value or prev and next address
    head -> prev = temp;
    temp -> next = head;
    head = temp;
}
void insertionAtTail(Node* & tail, int data){
    //create node temp
    Node* temp = new Node(data);

    temp -> prev = tail;
    tail -> next = temp;
    tail = temp; 
}
void insertionAtPosition(Node* &head, Node* &tail,int position, int data){


    //create node 
    Node* middle = new Node(data);

    Node* previous = head;
    int count = 1;
    while(count < position - 1){
        previous = previous -> next;
        count++;
    }
    //update next
    Node* valueTemp = previous -> next;
    previous -> next = middle;
    middle -> next = valueTemp;

    //update prev
    middle -> prev = previous;
    valueTemp -> prev = middle;

}
int main(){
    Node* node1 = new Node(10);
    
    //head
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertionAtHead(head , 12);
    insertionAtHead(head , 16);

    //inserting at tail
    insertionAtTail(tail, 26);
    insertionAtTail(tail, 28);
    print(head);
    insertionAtPosition(head, tail, 3, 88);
    print(head);


    cout<< "The length of the linked list is "<<getLength(head)<<endl;
    return 0;
}