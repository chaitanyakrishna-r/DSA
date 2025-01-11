#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;//creating node type pointer

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this-> next != NULL){
            delete next;
            this-> next = NULL;
        } 
        cout<<"Memeory is free for node with data "<<value<<endl;
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
void insertioAtPosition(Node* &tail,Node* &head, int position, int d){

    //insertion at start
    if(position == 1){
        insertionAtHead(head, d);
        return;

    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at last postion
    if(temp->next == NULL){
        insertionAtTail(tail,d);
        return;
    }

    //create node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert-> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(Node* &head, int position, Node* &tail) {
    if(position == 1){
        // delete start node or first node
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else {
        // middle position or end
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;

        while(count < position && curr != nullptr) {
            prev = curr;
            curr = curr->next; 
            count++;
        }

        if(curr == nullptr) {
            cout << "The node has exceeded the length" << endl;
            return;
        } 

        // Update tail if the last node is being deleted
        if(curr->next == NULL) {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


// void deleteNode(Node* &head, int position) {
//     // Delete the first node
//     if (position == 1) {
//         Node* temp = head;
//         head = head->next; // Move the head pointer
//         temp->next = nullptr; // Detach the node
//         delete temp;          // Free memory
//         return;
//     }

//     // Delete a node at a middle or end position
//     Node* prev = nullptr;
//     Node* curr = head;
//     int count = 1;

//     // Traverse to the node just before the one to delete
//     while (count < position && curr != nullptr) {
//         prev = curr;
//         curr = curr->next;
//         count++;
//     }

//     // If position is out of bounds
//     if (curr == nullptr) {
//         cout << "Position out of range!" << endl;
//         return;
//     }

//     // Remove the node
//     prev->next = curr->next; // Link the previous node to the next of the current
//     curr->next = nullptr;    // Detach the node
//     delete curr;             // Free memory
// }

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
    insertioAtPosition(tail,head, 2, 55);
    printNode(head);
    cout<<"before delete"<<endl;
    deleteNode(head, 5,tail);
    printNode(head);

    cout<<" head " <<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;
    return 0;
}