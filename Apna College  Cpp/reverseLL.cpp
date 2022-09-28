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


node* reverse(node* &head) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL) {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

node* reverseRecursive(node* &head) {

    if(head==NULL || head->next == NULL) {
        return head;
    }

    node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}


node* reverseKNode(node* &head,int k) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;

    while(currptr != NULL && count < k) {
        nextptr=currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!=NULL) {
    head->next =  reverseKNode(nextptr,k);
    }

    return prevptr;
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
    //deletion(head,2);
    //display(head);
    //deletionAtHead(head);
    //display(head);
    //cout << search(head,2);
    //node *newHead = reverseKNode(head,2);
    // display(newHead);
    return 0;
}