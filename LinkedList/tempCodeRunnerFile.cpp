// 


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    // Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// Function to reverse the linked list
// approach 2 using recursiton
Node* ReverlinkedList(Node* &head,Node* prev, Node* forward, Node* ans){

    Node* curr = head;
   
    //base case
    if(curr == NULL){
        ans = prev;
        return ans;
    }

    // updating the prev curr and forward 
    forward = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = forward;

    //recursive call
    ReverlinkedList(curr, prev, forward,ans);
    
} 

// Function to print the linked list
void printNode(Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    // Creating the linked list: 2 -> 3 -> 5 -> 6 -> 7
    Node* node1 = new Node(2);
    Node* node2 = new Node(3);
    Node* node3 = new Node(5);
    Node* node4 = new Node(6);
    Node* node5 = new Node(7);

    // Linking the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Head of the linked list
    Node* head = node1;

    // Print original linked list
    cout << "Original Linked List: ";
    printNode(head);

    Node* prev = NULL;
    Node* forward = NULL;
    Node* ans = NULL;
    // Reverse the linked list
    ans = ReverlinkedList(head,prev, forward, ans);

    // Print reversed linked list
    cout << "Reversed Linked List: ";
    printNode(ans);

    return 0;
}
