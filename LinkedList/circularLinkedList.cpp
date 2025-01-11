 #include<iostream>
 using namespace std;

 class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
 };
 //printing node
 void print(Node* tail){
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }

   Node* temp = tail;
    do{
        cout<<tail -> data<<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout<<endl;
 }
 
 void insertNode(Node* &tail, int element, int data){
 
    //empty list
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = temp;
        return;
    }else{
        //non-empt list 
        //assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }   
        //element fount -> curr is representing element 
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

 }
 void deleteNode(int element,Node* &tail ){
    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }else{
        //non-empty

        //assuming that "value is present in the Linked List"
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr -> data != element){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 node linked list
        if(curr == prev){
            tail = NULL;
        }
        // >=2 node linked list
        else if(tail == curr){
            tail = prev;
            }
        curr -> next = NULL;
        delete curr;

    }
 }
 
 int main(){
    
    Node* tail = NULL;

    insertNode(tail, 5, 10);
    print(tail);
    insertNode(tail, 10, 12);
    print(tail);
    insertNode(tail, 12, 22);
    print(tail);
    insertNode(tail, 22, 32);
    print(tail);
    insertNode(tail, 22, 42);
    print(tail);
    insertNode(tail, 10, 2);
    print(tail);
    deleteNode(32, tail);
    print(tail);
    return 0;
 }