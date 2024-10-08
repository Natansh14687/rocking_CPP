#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtBeginning(int val){
        Node *temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main(){
    LinkedList ll;
    ll.insertAtBeginning(20);
    ll.display();
    ll.insertAtBeginning(50);
    ll.display();
    return 0;
}