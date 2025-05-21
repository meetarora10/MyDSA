#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* after = NULL;
    Node* cur = head;
    while(cur!=NULL){
        after = cur->next;
        cur->next = prev;
        prev = cur;
        cur = after;
    }
    return prev;
}
Node* addOne(Node* head){
    Node* cur = head;
    Node* prev = NULL;
    int carry = 1;
    while(cur!=NULL){
        int sum = cur->data + carry;
        carry = sum/10;
        cur->data = sum%10;
        prev = cur;
        cur = cur->next;
    }
    if(carry>0){
        prev->next = new Node(carry);
    }
}
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    display(head);
    cout<<endl;
    Node* reversedHead = reverse(head);
    display(reversedHead);
    return 0;
}