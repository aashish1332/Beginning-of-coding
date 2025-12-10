#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
void printLL(Node* head) {
    if (!head) return;
    Node* p = head;
    do {                            // Use do-while to handle circular nature
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
};
void insertathead(Node*& head,int val){
    Node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    Node* newnode= new Node(val);
    p->next=newnode;
    newnode->next=head;
    head=newnode;
}
void insertionInLL(Node* &head,int pos, int val){
    Node* p = head;
    Node* q=nullptr;
    for(int i=0; i<pos; i++){
        q=p;
        p=p->next;
    }
    Node* newNode = new Node(val);
    newNode->next = p;
    q->next = newNode;
}
void insertattail(Node*& head ,int val){
    Node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    Node* newnode= new Node(val);
    p->next=newnode;
    newnode->next=head;
}
void deletehead(Node*& head){
    Node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    Node* q=head;
    p->next=head->next;
    head=head->next;
    delete q;
}
void deleteatpos(Node* &head, int pos){
    Node* p = head;
    Node* q = nullptr;
    for(int i=0; i<pos; i++){
        q=p;
        p=p->next;
    }
    q->next = p->next;
    delete p;
}
void deletetail(Node* &head){
    Node* p=head;
    while(p->next->next!=head){
        p=p->next;
    }
    Node* q=p->next;
    p->next=head;
    delete q;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head; // Creating a circular link
    insertathead(head,0);
    insertattail(head,4);
    insertionInLL(head, 2, 5);
    deleteatpos(head, 3);
    deletehead(head);
    deletetail(head);
    printLL(head);
    return 0;
}