#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void preorder(Node* root){
        if(root==NULL) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(Node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};
int main(){
    int x;
    cout<<"Root node: "<<endl;
    cin>>x;
    queue<Node*> q;
    Node* root=new Node(x);
    q.push(root);
    int leftVal,rightVal;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"Enter left value of "<<temp->data<<endl;
        cin>>leftVal;
        if(leftVal!=-1){
            temp->left=new Node(leftVal);
            q.push(temp->left);
        }
        cout<<"Enter right value of "<<temp->data<<endl;
        cin>>rightVal;
        if(rightVal!=-1){
            temp->right=new Node(rightVal);
            q.push(temp->right);
        }
    }
    cout<<"Inorder Traversal: ";
    root->inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal: ";
    root->preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    root->postorder(root);
    cout<<endl;
    return 0;
}