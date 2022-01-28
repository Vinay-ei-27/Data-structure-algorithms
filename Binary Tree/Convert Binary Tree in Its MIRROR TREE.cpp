#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* right,*left;
};

node* newnode(int key){
	node* Node=new node();
	Node->data=key;
	Node->left=Node->right=NULL;
	return Node;
}

void mirror(node* root){
	if(root==NULL){
		return;
	}
	mirror(root->left);
	mirror(root->right);
	node* temp=root->left;
	root->left=root->right;
	root->right=temp;
}

void inorder(node* root){
	if(!root){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	cout<<"tree traversal before mirroring: ";
	inorder(root);
	cout<<"\ntree traversal after mirroring: ";
	mirror(root);
	inorder(root);
	return 0;
}
