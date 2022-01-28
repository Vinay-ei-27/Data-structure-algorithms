#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left, *right;
};

void printgivenlevel(node* root,int level){
	if(root==NULL)
		return;
	if(level==1){
		cout<<root->data<<" ";
	}
	else if(level>1){
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
		else
			return (rheight+1);
	}
}

void printlevelorder(node* root){
	int h=height(root);
	for(int i=1;i<=h;i++){
		printgivenlevel(root,i);
	}
}

node* newnode(int data){
	node* Node=new node();
	Node->data=data;
	Node->left=Node->right=NULL;
	return Node;
}

int main()
{
	node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	cout<<"Level order traversal is: \n";
	printlevelorder(root);
	return 0;
}
