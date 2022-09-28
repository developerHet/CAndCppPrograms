#include <iostream>
using namespace std;


class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val) {

    node* n = new node(val);

    if(head==NULL){
        head=n;
        n->next=head;
        return;
    }

    
    node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next=head;
    head=n;
}


void insertAtTail(node* &head,int val) {

    if(head==NULL) {
        insertAtHead(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deletionAtHead(node* &head) {
    
    node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    node* toDelete=head;
    temp->next = head->next;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head,int pos) {

    if(pos==1){
        deletionAtHead(head);
        return;
    }

    int count =1;
    node* temp = head;
    node* toDelete;
    while(count<pos-1) {
        temp = temp->next;
        count++;
    }

    toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

void display(node* &head) {
    node* temp = head;
    do {
        cout << temp->data << " ";
        temp=temp->next;
    } while(temp!=head);
    cout << endl;
}

int main() {
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertAtHead(head,0);
    display(head);
    deletion(head,4);
    display(head);
    deletionAtHead(head);
    display(head);
    deletion(head,4);
    display(head);
    return 0;
}