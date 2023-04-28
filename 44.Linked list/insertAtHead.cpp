#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next; 

    // constructor
    node(int data){
        this -> data = data;
        this -> next = NULL; 
    }

};

// insert in a linked list 

void insertAtHead(node * &head, int d){

    // new node create
    node* temp = new node(d);
    temp -> next = head; // next of temp is pointing to the data of head
    head = temp; // temp will become our new head

}

// printing the linked list 

void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<< temp -> data << " "; // printing the current node
        temp = temp -> next; // temp ko badhao

    }
    cout<< endl;
}

int main(){
    // created a new node
    node* node1 = new node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

     // head pointed to node1
     node* head = node1;
     print(head);

     insertAtHead(head, 12);

     print(head);

     insertAtHead(head,15);
     
     print(head);

     return 0;

     // the output will be 15,12,10 because we are inserting every new elemet at the head of our linked list
}
