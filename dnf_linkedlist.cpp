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
Node* sort(Node* head){
    Node* cur = head;
    Node* dummy0 = new Node(-1);
    Node* dummy1 = new Node(-1);
    Node* dummy2 = new Node(-1);
    Node* tail0 = dummy0;
    Node* tail1 = dummy1;
    Node* tail2 = dummy2;
    while(cur!=NULL){
        if(cur->data == 0){
            tail0->next = cur;
            tail0 = tail0->next;
        }else if(cur->data == 1){
            tail1->next = cur;
            tail1=tail1->next;
        }else{
            tail2->next = cur;
            tail2 = tail2->next;
        }
        cur=cur->next;
    }
    tail0->next=dummy1->next?dummy1->next:dummy2->next;
    tail1->next = dummy2->next;
    tail2->next = NULL;
    return dummy0->next;
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
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(0);
    head->next->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next->next = new Node(2);
    display(head);
    cout<<endl;
    Node* sortedHead = sort(head);
    display(sortedHead);
    return 0;
}