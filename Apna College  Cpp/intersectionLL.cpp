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
    int l=0;
    node* temp = head;
    while(temp!=NULL) {
        l++;
        temp=temp->next;
    }
    return l;
}

void intersection(node* head1,node* head2,int pos) {
    node*temp1 = head1;
    node*temp2 = head2;

    while(--pos) {
        temp1=temp1->next;
    }

    while(temp2->next!=NULL) {
        temp2=temp2->next;
    }
    temp2->next = temp1;
}

int detectIntersection(node* head1, node* head2) {
    int l1 = length(head1);
    int l2 = length(head2);

    node* ptr1;
    node* ptr2;
    int d=0;

    if(l1>l2) {
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else {
        d = l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d) {
        ptr1=ptr1->next;
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL) {
        if(ptr1==ptr2) {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return false;
}



int main() {
    node *head1=NULL;
    node *head2=NULL;
    
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    insertAtTail(head2,9);
    insertAtTail(head2,10);
    display(head1);
    intersection(head1,head2,3);
    display(head2);
    cout << detectIntersection(head1,head2);
    return 0;
}