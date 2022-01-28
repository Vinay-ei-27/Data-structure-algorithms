#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		char data;
		node* right,*left;
		node(char val){
			data=val;
			left=right=NULL;
		}
};

int search(char in[],int strt,int end,char val){
	for(int i=strt;i<=end;i++){
		if(in[i]==val){
			return i;
		}
	}
}

node* buildtree(char in[],char pre[],int strt,int end){
	static int preindex=0;
	if(strt>end){
		return NULL;
	}
	node* newnode=new node(pre[preindex++]);
	if(strt==end){
		return newnode;
	}
	int index=search(in,strt,end,newnode->data);
	newnode->left=buildtree(in,pre,strt,index-1);
	newnode->right=buildtree(in,pre,index+1,end);
	return newnode;
}

void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
	char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
	int len = sizeof(in) / sizeof(in[0]);
	node* root = buildtree(in, pre, 0, len - 1);
	inorder(root);
	return 0;
}
