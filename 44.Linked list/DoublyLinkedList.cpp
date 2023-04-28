#include <iostream>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// printing the doubly linked list

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length as output
int getLength(node *&head)
{
    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(node *&head, int d)
{
    node *temp = new node(d); // step 1

    temp->next = head; // step 2
    head->prev = temp; // step 3

    head = temp; // step 4
}

void insertattail(node *tail, int d)
{
    node *temp = new node(d); // step 1 create a new node

    tail->next = temp; // step 2
    temp->prev = tail; // step 3;

    tail = temp; // step 4
}

void insertatposition(node* &tail ,node* &head, int position, int d){

    // insert at start
    if(position == 1){
        insertathead(head, d);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while(cnt< position-1){
        temp = temp -> next;
        cnt++;
    }

    // inserting at last position
    if(temp -> next == NULL){
        insertattail(tail,d);
        return;
    }

    // creating a node for d
    node* nodetoinsert = new node(d);

    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    nodetoinsert-> prev = temp;
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;


    print(head);

    insertathead(head, 15);
    print(head);

    insertathead(head, 20);
    print(head);

    insertattail(tail,25);
    print(head);

    insertatposition(tail, head , 2, 100);
    print(head);

    //cout << getLength(head) << endl;
}
