#include<bits/stdc++.h>
using namespace std;
class stacknode{
	public:
		int data;
		stacknode* next;
};

stacknode* newnode(int data){
	stacknode* stackNode=new stacknode();
	stackNode->data=data;
	stackNode->next=NULL;
	return stackNode;
}

int isempty(stacknode *root){
	return !root;
}

void push(stacknode** root,int data){
	stacknode* Newnode=newnode(data);
	Newnode->next=*root;
	*root=Newnode;
	cout<<data<<" pushed in the stack."<<endl;
}

int pop(stacknode** root){
	if(isempty(*root)){
		return INT_MIN;
	}
	else{
		stacknode* temp=*root;
		*root=(*root)->next;
		int popped=temp->data;
		free(temp);
		return popped;
	}
}

int peek(stacknode* root){
	if(isempty(root)){
		return INT_MIN;
	}
	else{
		int op=root->data;
		return op;
	}
}
int main()
{
	stacknode* root=NULL;
	push(&root,3);
	push(&root,5);
	push(&root,7);
	cout<<peek(root)<<" is the top element."<<endl;
	cout<<pop(&root)<<" popped from the stack."<<endl;
	cout<<"elements in the stack are: "<<endl;
	while(!isempty(root)){
		cout<<peek(root)<<" ";
		pop(&root);
	}
	return 0;
}
