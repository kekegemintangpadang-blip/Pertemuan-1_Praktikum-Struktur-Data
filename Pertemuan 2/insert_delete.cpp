#include <iostream>
using namespace std;

struct node{
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

// fungsi insert linked list
// 1. insert first
void insertfirst(int n){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head === NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        newnode -> next = head;
        head = newnode;
    }
}
// 2. insert last
void insertlast (int n){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL){
        head = newnode;
        tail = head;
    }
    else{
        tail -> next = newnode;
        tail = newnode;
    }
}
// 3. insert after
void insertafter(int n, int check){
    
    if (head == NULL){
        cout << "List kosong" << endl;
        return;
    }
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    node *p = head;
    while (p != NULL && p -> value != check){
        p = p -> next;
    }

    if (p== NULL){
        cout << "Node dengan nilai" << check << "tidak ditemukan" << endl;
        delete newnode;
    }
    else{
        newnode -> next = p -> next;
        p -> next = newnode;
        }
        if (current != NULL){
            newnode -> next = current -> next;
            current -> next = newnode;
        }
    }
// fungsi delete pada linked list
// 1. delete first
void deletefirst (){
    if (head == NULL){
        cout << "Linked List Kosong!" << endl;
        return;
    }
    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
        delete temp;
    
}
// 2. delete last
void deletelast (){
    if (head == NULL){
        cout << "Linked List Kosong!" << endl;
        return;
    }
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    node *p = head;
    while (p -> next != tail){
        p = p -> next;
    }
    delete tail;
    tail = p;
    tail -> next = NULL;
}

// 3. delete middle
void deletemiddle (int check){
    if (head == NULL){
        cout << "List Kosonng!"<< endl;
        return;
    }

    node *p = head;
    while (p -> next != NULL && p -> next -> value != check){
        p = p -> next;
    }

    if (p -> next == NULL){
        cout << "Node dengan nilai " << check << "tidak ditemukan" << endl;
    }
    else {
        node *temp = p -> next;
        p -> next = temp -> next;
        if (temp == tail) tail = p;
        delete temp;
    }
    void display(){
        node temp = head;
        cout << "Isi Linked List:";
        while (temp != NULL){
            cout << temp -> value << "";
            temp = temp -> next;
        }
        cout <<
    }
}
int main (){
     insertfirst(10);
     display();
     insertfirst(5);
     display();
     insertlast(20);
     display();
     insertafter(15, 10);
     display();

     deletefirst();
     display();
     deletelast();
     display();
     deletemiddle(30);
     display();
     return 0;
}