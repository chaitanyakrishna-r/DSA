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

//function for middle of the linked list
//approach 1
/*Node* MiddleOfTheLinkedList(Node* &head){

    // edge case empty and also one node
    if(head == NULL){
        return NULL;
    }
    if (head -> next == NULL){
        return head;
    }

    //take count or size of the linked list
    Node* curr = head;
    int size = 0;
    while(curr != NULL){
        size++;
        curr = curr -> next;
    }

    int mid = (0 + size)/2 ;

    int currCount = 0;
    curr = head;

    while (currCount < mid)
    {
        curr = curr -> next;
        currCount++ ;
    }
  
    
    return curr ;
}
*/


// approach 2
Node* middleOfTheLinkedList(Node* head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* slow = head; 
    Node* fast = head; 
    while (fast != NULL && fast->next != NULL)
    {
      slow  = slow -> next;
      fast = fast->next-> next ;
    }
    return slow;
}

//function for print the linked list
void printLinkedList(Node* head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }cout<<endl;
}

int main(){
    
    // create linked list / nodes
    Node* node1 = new Node(2);
    Node* node2 = new Node(4);
    Node* node3 = new Node(5);
    Node* node4 = new Node(9);
    Node* node5 = new Node(7);
    Node* node6 = new Node(6);
    Node* node7 = new Node(10);
    Node* node8 = new Node(11);


    // linking the nodes 
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;
    node6 -> next = node7;
    node7 -> next = node8;

    Node* head = node1;

    cout<<"original linked list: ";
    printLinkedList(head);

    // Node* Middle = MiddleOfTheLinkedList(head);
    Node* middle = middleOfTheLinkedList(head);

    cout<<"middle of the linked list: ";
    printLinkedList(middle);

    return 0;
}