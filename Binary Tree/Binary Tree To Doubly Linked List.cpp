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

node* binarytodll(node* root, node** head){
	if(root==NULL){
		return NULL;
	}
	static node* prev=NULL;
	binarytodll(root->left,head);
	if(prev==NULL){
		*head=root;
	}
	else{
		root->left=prev;
		prev->right=root;
	}
	prev=root;
	binarytodll(root->right,head);
	return *head;
}

void printlist(node* Node){
	while(Node!=NULL){
		cout<<Node->data<<" ";
		Node=Node->right;
	}
}

int main()
{
	node* head=NULL;
	node* root=new node(10);
	root->left=new node(12);
	root->right=new node(15);
	root->left->left=new node(25);
	root->left->right=new node(30);
	root->right->left=new node(36);
	head=binarytodll(root,&head);
	printlist(head);
	return 0;
}
