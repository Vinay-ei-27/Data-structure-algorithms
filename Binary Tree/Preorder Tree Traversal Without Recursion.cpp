#include<bits/stdc++.h>
#include<stack>
using namespace std;

class node{
	public:
		int data;
		node* left,*right;
		node(int data){
			this->data=data;
			left=right=NULL;
		}
};

void preorder(node* root){
	if(root==NULL){
		return;
	}
	stack<node*> s;
	s.push(root);
	while(s.empty()==false){
		node* Node=s.top();
		cout<<Node->data<<" ";
		s.pop();
		
		if(Node->right){
			s.push(Node->right);
		}
		if(Node->left){
			s.push(Node->left);
		}
	}
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
