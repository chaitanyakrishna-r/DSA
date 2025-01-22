#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    
    //constructore
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

//apprach 1  funtionc to reverse the linked list
// this uses 2 pointers

/*Node* ReverseLinkedList(Node* &head){
    //if linked list is empty or one element
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}*/


// approach 2 using recursiton
/*Node* ReverlinkedList(Node* curr,Node* prev = NULL){
   
    //base case
    if(curr == NULL){
       return prev;
    }

    // updating the prev curr and forward 
    Node* forward = curr -> next;
    curr -> next = prev;

    //recursive call
    ReverlinkedList(forward, curr);
}*/

//approach 3 
Node* ReverseLinkedList(Node* & head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* subHead = ReverseLinkedList(head -> next);

    head -> next -> next = head ;
    head -> next = NULL;
    return subHead;
}

//Function to print the linked list
void printNode(Node* &head){ 

    Node* temp = head;
    while (temp !=NULL)
    {
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }cout<<endl;
    
}
int main(){


    //create a linked list 
    Node* node1 = new Node(2);
    Node* node2 = new Node(3);
    Node* node3 = new Node(4);
    Node* node4 = new Node(9);
    Node* node5 = new Node(8);
    Node* node6 = new Node(7);

    //linking the nodes
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;

    // Head of the linked list 
    Node* head = node1;

    cout<<"original Linked list: ";
    printNode(head);

    // //reverseing ll
    // head = ReverseLinkedList(head);
    
     head = ReverseLinkedList(head);

    cout<<"Reversed Linked list: ";
    printNode(head);

}
