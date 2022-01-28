#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* right,*left;
		node(int key){
			data=key;
			left=right=NULL;
		}
};

int sum(node* root){
	if(root==NULL){
		return 0;
	}
	int old_val=root->data;
	root->data=sum(root->left)+sum(root->right);
	return root->data + old_val;
}

void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	node* root=new node(10);
	root->left=new node(-2);
	root->right=new node(6);
	root->left->left=new node(8);
	root->left->right=new node(-4);
	root->right->left=new node(7);
	root->right->right=new node(5);
	sum(root);
	inorder(root);
	return 0;
}
