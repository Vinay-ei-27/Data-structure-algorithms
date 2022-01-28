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

void Inorder(node* root){
	if(root==NULL){
		return;
	}
	stack<node*> s;
	node* curr=root;
	while(curr!=NULL||s.empty()==false){
		while(curr!=NULL){
			s.push(curr);
			curr=curr->left;
		}
		curr=s.top();
		s.pop();
		cout<<curr->data<<" ";
		curr=curr->right;
	}
}

int main()
{
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	Inorder(root);
	return 0;
}
