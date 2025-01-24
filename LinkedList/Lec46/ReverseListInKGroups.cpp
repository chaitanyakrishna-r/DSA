#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
Node* RevserLinkedList(Node* head,int k){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    int countK = 0;
    while (countK < k)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        cout<<"data"<<curr->data<<endl;
        countK++;
        
    }
    if(head != NULL){
        head -> next = curr;
    }
    
    return prev;
    
}
void printLL(Node* head){
    while (head != NULL)
    {
        cout<<head -> data<<" ";
        head = head -> next;
    }cout<<endl;
    
}

int main(){


    //creating linked list
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    //connected /linking nodes
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
   
    Node* head = node1;

    cout<<"orignal LL: ";
    printLL(head);

    Node* reverse = RevserLinkedList(head,2);

    cout<<"Reverse LL: ";
    printLL(reverse);
    return 0;
}