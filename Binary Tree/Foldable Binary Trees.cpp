#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left,*right;
};
void mirror(node* Node){
	if(Node==NULL){
		return;
	}
	node* temp;
	mirror(Node->left);
	mirror(Node->right);
	
	temp=Node->left;
	Node->left=Node->right;
	Node->right=temp;
}

bool isstructsame(node* a,node* b){
	if(a==NULL && b==NULL){
		return true;
	}
	if(a!=NULL && b!=NULL && isstructsame(a->left,b->left) && isstructsame(a->right,b->right)){
		return true;
	}
	return false;
}

bool isfoldable(node* root){
	bool func;
	mirror(root->left);
	func=isstructsame(root->left,root->right);
	mirror(root->left);
	return func;
}

node* Newnode(int val){
	node* newnode=new node();
	newnode->data=val;
	newnode->left=newnode->left=NULL;
	return newnode;
}

int main(){
	node* root=Newnode(27);
	root->left=Newnode(16);
	root->right=Newnode(21);
	root->left->right=Newnode(45);
	root->right->left=Newnode(6);
	bool temp=isfoldable(root);
	if(temp){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
