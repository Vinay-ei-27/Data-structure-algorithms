#include<bits/stdc++.h>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node* left,*right;
};

node* newnode(int data){
	node* Node=new node();
	Node->data=data;
	Node->left=Node->right=NULL;
	return Node;
}

void delete_deepest(node* root, node* d_node){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		if(temp==d_node){
			temp=NULL;
			delete(d_node);
			return;
		}
		
		if(temp->left){
			if(temp->left==d_node){
				temp->left=NULL;
				delete(d_node);
				return;
			}
			else{
				q.push(temp->left);
			}
		}
		if(temp->right){
			if(temp->right==d_node){
				temp->right=NULL;
				delete(d_node);
				return;
			}
			else{
				q.push(temp->right);
			}
		}
	}
}

node* deletenode(node* root, int key){
	if(root==NULL){
		return NULL;
	}
	if(root->left==NULL && root->right==NULL){
		if(root->data==key){
			return NULL;
		}
		else{
			return root;
		}
	}
	queue<node*> q;
	q.push(root);
	node* temp;
	node* keynode=NULL;
	while(!q.empty()){
		temp=q.front();
		q.pop();
		
		if(temp->data==key){
			keynode=temp;
		}
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
	}
	if(keynode!=NULL){
		int x=temp->data;
		delete_deepest(root,temp);
		keynode->data=x;
	}
}

void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	cout<<"inorder traversal before deletion: ";
	inorder(root);
	root=deletenode(root,1);
	cout<<"\nInorder traversal after deletion: ";
	inorder(root);
	return 0;
}
