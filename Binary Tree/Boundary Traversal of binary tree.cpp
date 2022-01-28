#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left,*right;
		node(int key){
			data=key;
			left=right=NULL;
		}
};

void printleaves(node* root){
	if(root==NULL){
		return;
	}
	printleaves(root->left);
	if(!(root->left) && !(root->right)){
		cout<<root->data<<" ";
	}
	printleaves(root->right);
}

void leftbound(node* root){
	if(root==NULL){
		return;
	}
	if(root->left){
		cout<<root->data<<" ";
		leftbound(root->left);
	}
	else if(root->right){
		cout<<root->data<<" ";
		leftbound(root->right);
	}
}

void rightbound(node* root){
	if(root==NULL){
		return;
	}
	if(root->right){
		rightbound(root->right);
		cout<<root->data<<" ";
	}
	else if(root->left){
		rightbound(root->left);
		cout<<root->data<<" ";
	}
}

void printboundary(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	leftbound(root->left);
	printleaves(root->left);
	printleaves(root->right);
	rightbound(root->right);
}

int main()
{
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
    printboundary(root);
	return 0;
}
