#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		char data;
		node* left,*right;
};

bool isoperator(char a){
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='^'){
		return true;
	}
	return false;
}

void inorder(node* root){
	if(root){
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
	}
}

node* newnode(char a){
	node* Node=new node();
	Node->data=a;
	Node->left=Node->right=NULL;
	return Node;
}

node* construct_tree(char postfix[]){
	stack<node*> st;
	node* t,*t1,*t2;
	for(int i=0;i<strlen(postfix);i++){
		if(!isoperator(postfix[i])){
			t=newnode(postfix[i]);
			st.push(t);
		}
		else{
			t=newnode(postfix[i]);
			t1=st.top();
			st.pop();
			t2=st.top();
			st.pop();

			t->left=t2;
			t->right=t1;

			st.push(t);
		}
	}
	t=st.top();
	st.pop();
	return t;
}

int main()
{
	char postfix[]="ab+ef*g*-";
	node* root=construct_tree(postfix);
	cout<<"infix expression is:\n";
	inorder(root);
	return 0;
}
