#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

void push(node** hedref, int val){
	node* newnode=new node();
	newnode->data=val;
	newnode->next=*hedref;
	*hedref=newnode;
}

void deletenode(node** n){
	node* current=*n;
	node* next;
	if(current==NULL){
		return;
	}
	while(current!=NULL){
		next=current->next;
		current=next;
	}
	*n=NULL;
	cout<<"node is deleted";
}

void printlist(node* N){
	while(N!=NULL){
		cout<<N->data<<" ";
		N=N->next;
	}
}

int main()
{
	node* head=NULL;
	push(&head, 27);
	push(&head, 46);
	push(&head, 57);
	push(&head, 99);
	printlist(head);
	cout<<endl;
	deletenode(&head);
	printlist(head);
	return 0;
}
