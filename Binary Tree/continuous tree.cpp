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

bool continuoustree(node* root){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		return true;
	}
	if(root->left==NULL){
		return(abs(root->data-root->right->data)==1 && continuoustree(root->right));
	}
	if(root->right==NULL){
		return(abs(root->data-root->left->data)==1 && continuoustree(root->left));
	}
	else{
		return(abs(root->data-root->left->data)==1 &&  abs(root->data-root->right->data)==1 && continuoustree(root->left) && continuoustree(root->right));
	}
}

int main()
{
	node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->right=newnode(6);
	if(continuoustree(root)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
