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

void printrightview(node* root,int level,int* maxlevel){
	if(root==NULL){
		return;
	}
	if(*maxlevel<level){
		cout<<root->data<<" ";
		*maxlevel=level;
	}
	printrightview(root->right,level+1,maxlevel);
	printrightview(root->left,level+1,maxlevel);
}

void rightview(node* root){
	int maxlevel=0;
	printrightview(root,1,&maxlevel);
}

int main()
{
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->right=new node(6);
	rightview(root);
	return 0;
}
