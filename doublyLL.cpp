#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertioninDLL(Node* &head,int pos,int val){
    Node* p=head;
    Node* q=nullptr;
    for(int i=0; i<pos; i++){
        q=p;
        p=p->next;
    }
    Node* newNode = new Node(val);
    newNode->next = p;
    q->next = newNode;
    newNode->prev=q;
    p->prev=newNode;
}
void insertionathead(Node* &head,int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insertionattail(Node* &head,int val){
    Node* p=head;
    Node* q=nullptr;
    while(p->next!=nullptr){
        q=p;
        p=p->next;
    }
    Node* newNode=new Node(val);
    p->next=newNode;
    newNode->prev=p;
    newNode->next=nullptr;
}
void deletioninDLL(Node* &head,int pos){
    Node* p=head;
    Node* q=nullptr;
    for(int i=0;i<pos;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    p->next->prev=q;
    delete p;
}
void deletehead(Node* &head){
    Node* p=head;
    head=head->next;
    head->prev=nullptr;
    delete p;
}
void deletetail(Node* &head){
    Node* p=head;
    Node* q=nullptr;
    while(p->next=nullptr){
        q=p;
        p=p->next;
    }
    q->next=nullptr;
    p->prev=nullptr;
    delete p;
}
void findmid(Node* &head){
    Node* p=head;
    int count=0;
    Node* q=head;
    while(p->next!=nullptr){
        count++;
        p=p->next;
    }
    for(int i=0;i<count/2;i++){
        q=q->next;
    }
    cout<<"mid: "<<q->data;
}
// void hascycle(Node* &head){
//     Node* p=head;
//     while(p->next)
// }
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->prev=head;
    head->next->next=new Node(3);
    head->next->next->prev=head->next;
    insertioninDLL(head,1,5);
    insertionathead(head,0);
    insertionattail(head,10);
    deletioninDLL(head,2);
    printLL(head);
    findmid(head);
    return 0;
}