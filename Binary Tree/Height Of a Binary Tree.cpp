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

int main()
{
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	cout<<height(root);
	return 0;
}
