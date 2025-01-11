#include <iostream>
using namespace std;

class Node{

public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != nullptr){
            delete this->next;
            this -> next = NULL;
        }
    }
};

// travesing linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of linked list
int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertionAtHead(Node *&head,Node* &tail, int data)
{
    // empty list
    if (head == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        // create temp node
        Node *temp = new Node(data);

        // update value or prev and next address
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}
void insertionAtTail(Node* &head,Node* &tail, int data)
{
    
     // empty list
    if (tail == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        // create node temp
        Node *temp = new Node(data);

        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
  
}
void insertionAtPosition(Node *&head, Node *&tail, int position, int data)
{

    // if position is 1
    if (position == 1)
    {
        insertionAtHead(head,tail,  data);
        return;
    }

    Node *previous = head;
    int count = 1;

    while (count < position - 1)
    {
        previous = previous->next;
        count++;
    }
    // inserting at last position
    if (previous->next == nullptr)
    {
        insertionAtTail(tail,tail,  data);
        return;
    }

    // create node
    Node *middle = new Node(data);

    // update next
    Node *valueTemp = previous->next;
    previous->next = middle;
    middle->next = valueTemp;

    // update prev
    middle->prev = previous;
    valueTemp->prev = middle;
}

void deleteNode(Node* &head, int position, Node* &tail) {
    if(position == 1){
        // delete start node or first node
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = nullptr;
        delete temp -> next;

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
        curr ->prev = nullptr;
        prev -> next = curr ->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){

    // if empty list
    //  Node* head = nullptr;
    //  Node* tail = nullptr;

    Node *node1 = new Node(10);

    // head
    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertionAtHead(head,tail, 12);
    insertionAtHead(head,tail,  16);

    // inserting at tail
    insertionAtTail(head,tail,  26);
    insertionAtTail(head,tail,  28);
    insertionAtPosition(head, tail, 6, 88);
    print(head);
    deleteNode(head, 1, tail);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    cout << "The length of the linked list is " << getLength(head) << endl;
    return 0;
}