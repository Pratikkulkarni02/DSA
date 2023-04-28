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


// insert at tail

void insertAtTail(node* &tail, int d){
    // new node create
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void print(node* &tail){
    node* temp = tail;

    while(temp != NULL){
        cout<< temp -> data << " "; // printing the current node
        temp = temp -> next; // temp ko badhao

    }
    cout<< endl;
}

int main(){
    //created a new nodde
    node* node1 = new node(10);
    
    
    node* tail = node1;
    
    print(tail);

    insertAtTail(tail, 15);
    print(tail);

    insertAtTail(tail,20);
    print(tail);

    return 0;
}