#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val) {
    node *n = new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val) {

    node* n = new node(val);

    if(head==NULL) {
        insertAtHead(head,val);
        return;
    }

    node *temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
}

void display(node*head) {
    node*temp = head;
    while(temp!=NULL) {
        cout << temp->data << "->";
        temp=temp->next;
    }cout << "NULL" << endl;
}

bool search(node*head,int key) {
    node*temp = head;
    while(temp!=NULL) {
        if(temp->data == key) {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void deletionAtHead(node* &head) {
    node* toDelete = head;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head,int val) {

    if(head->next==NULL) {
        deletionAtHead(head);
        return;
    }

    if(head==NULL) {
        return;
    }

    node* temp = head;
    while (temp->next->data !=  val)
    {
        temp=temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}





int length(node* head) {
    node* temp = head;
    int l=0;
    while(temp!=NULL) {
        l++;
        temp=temp->next;
    }
    return l;
}

node* kAppend(node* &head, int k) {
    int l = length(head);
    node* newHead;
    node* newTail;
    node* tail = head;
    int count=1;
    while(tail->next!=NULL) {
        if(count==l-k) {
            newTail = tail;
        }
        if(count==l-k+1) {
            newHead = tail;
        }
        tail=tail->next;
        count ++;
    }
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}



int main() {
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    head = kAppend(head,3);
    display(head);
    return 0;
}