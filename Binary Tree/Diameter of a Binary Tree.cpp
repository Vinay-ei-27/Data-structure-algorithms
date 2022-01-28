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

int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int height(node* root){
	if(root==NULL){
		return 0;
	}
	else{
		int lh=height(root->left);
		int rh=height(root->right);
		if(lh>rh){
			return (lh+1);
		}
		else{
			return (rh+1);
		}
	}
}

int diameter(node* root){
	if(root==NULL){
		return 0;
	}
	int lh=height(root->left);
	int rh=height(root->right);
	
	int ld=diameter(root->left);
	int rd=diameter(root->right);
	
	return max((lh+rh+1),(ld,rd));
}

int main()
{
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	root->right->right->left=new node(8);
	cout<<diameter(root);
	return 0;
}
