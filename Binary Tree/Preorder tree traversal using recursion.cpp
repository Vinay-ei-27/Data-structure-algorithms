#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* left,*right;
		node(int val){
			data=val;
			left=right=NULL;
		}
};

void preorder(node* root){
	if(!root){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int main()
{
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	preorder(root);
	return 0;
}
