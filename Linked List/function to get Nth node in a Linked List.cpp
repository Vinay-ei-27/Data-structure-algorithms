#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

void push(node** hedref,int val){
	node* newnode=new node();
	newnode->data=val;
	newnode->next=*hedref;
	*hedref=newnode;
}

int getnth(node* head,int index){
	node* temp=head;
	int count=0;
	if(temp==NULL){
		return 0;
	}
	while(temp!=NULL){
		if(count==index){
			return temp->data;
		}
		count++;
		temp=temp->next;
	}
}

void printlist(node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main()
{
	node* head=NULL;
	push(&head,65);
	push(&head,15);
	push(&head,79);
	printlist(head);
	cout<<endl;
	cout<<getnth(head,0);
	return 0;
}
