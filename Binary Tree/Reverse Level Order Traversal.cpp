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

void printgivenlevel(node* root,int level){
	if(root==NULL){
		return;
	}
	if(level==1){
		cout<<root->data<<" ";
	}
	if(level>1){
		printgivenlevel(root->left,level-1);
		printgivenlevel(root->right,level-1);
	}
}

int height(node* root){
	if(root==NULL){
		return 0;
	}
	else{
		int lheight=height(root->left);
		int rheight=height(root->right);
		if(lheight>rheight){
			return (lheight+1);
		}
		else{
			return (rheight+1);
		}
	}
}

void printlevelorder(node* root){
	int h=height(root);
	for(int i=h;i>=1;i--){
		printgivenlevel(root,i);
	}
}

int main(){
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	printlevelorder(root);
	return 0;
}
