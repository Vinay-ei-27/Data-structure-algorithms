#include<bits/stdc++.h>
#include<queue>
using namespace std;

class tnode{
	public:
		int data;
		tnode* left,*right;
};

tnode* createnode(int value){
	tnode* newnode=new tnode();
	newnode->data=value;
	newnode->left=newnode->right=NULL;
	return newnode;
}

tnode* insertnode(tnode* root,int val){
	if(root==NULL){
		root=createnode(val);
		return root;
	}
	queue<tnode*> q;
	q.push(root);
	
	while(!q.empty()){
		tnode* temp=q.front();
		q.pop();
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		else{
			temp->left=createnode(val);
			return root;
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
		else{
			temp->right=createnode(val);
			return root;
		}
	}
}

void inorder(tnode* temp){
	if(temp==NULL)
		return;
	
	inorder(temp->left);
	cout<<temp->data<<" ";
	inorder(temp->right);	
}

int main()
{
	 tnode* root=createnode(50);
	 root->left=createnode(60);
	 root->right=createnode(70);
	 root->left->left=createnode(80);
	 root->right->left=createnode(30);
	 root->right->right=createnode(40);
	 cout<<"inorder traversal before insertion: ";
	 inorder(root);
	 cout<<endl;
	 tnode* N=insertnode(root,75);
	 cout<<"inorder traversal after insertion: ";
	 inorder(root);
	 return 0;
}
