#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void printLL(Node* head){
    Node* temp = head;
    int temp2 = 0;
    int sum=0;
    while(temp != NULL){
        cout << temp->data << " ";
        sum += temp->data;
        temp = temp->next;
        temp2++;
      
    }
    cout << endl;
    cout << "Length of linked list: " << temp2 << endl;
    cout << "Sum of linked list: " << sum << endl;
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
void insertionHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertionTail(Node* head,int val){
    Node* p =head;
    while(p->next!=nullptr){
        p=p->next;
    }
    Node* newNode = new Node(val);
    p->next = newNode;
}
void deletionLL(Node* head, int pos){
    Node* p = head;
    Node* q = nullptr;
    for(int i=0; i<pos; i++){
        q=p;
        p=p->next;
    }
    q->next = p->next;
    delete p;
}
void deletehead(Node* &head){
    Node* todelete = head;
    head = head->next;
    delete todelete;
}
void reverseLL(Node* &head){
    Node* q = nullptr;
    Node* p = head;
    Node* r;
    while(p != nullptr){
        r = p->next;
        p->next = q;
        q = p;
        p = r;
    }
    head = q;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(20);
    printLL(head);
    insertionInLL(head,1,12);
    printLL(head);
    insertionHead(head,5);
    insertionTail(head,100);
    printLL(head);
    deletionLL(head,3);
    printLL(head);
    deletehead(head);
    printLL(head);
    reverseLL(head);
    printLL(head);
    return 0;
}