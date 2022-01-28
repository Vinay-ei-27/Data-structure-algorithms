#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		Node *prev;
		int data;
		Node *next;
}*first = NULL;


// Function to create and add nodes at the end of the Doubly linked list :- 
void create(int A[], int n){
	Node *t, *last;
	
	first = new Node();
	first->data = A[0];
	first->prev = NULL;
	first->next = NULL;
	last = first;
	
	for(int i = 1; i < n; i++){
		t = new Node();
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;
	}
}

//function to display all the nodes in a Doubly Linked list :-
void display(Node *p){
	while(p != NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}

// function to find the length of a doubly linked list { i.e; number of nodes in the DLL, or( count ) }
int Length(Node *p){
	int count = 0;
	while(p != NULL){
		count++;
		p = p->next;
	}
	return count;
}

// Function To insert a node in a Doubly Linked List :-
void Insert(Node *p, int index, int x){
	Node *t;
	if(index < 0 || index > Length(p)){
		return;
	}
	
	if(index == 0){
		t = new Node();
		t->data = x;
		t->prev = NULL;
		t->next = first;
		first->prev = t;
		first = t;
	}
	else{
		for(int i = 0; i < index - 1; i++){
			p = p->next;
		}
		t = new Node();
		t->data = x;
		
		t->prev = p;
		t->next = p->next;
		if(p->next != NULL){
			p->next->prev = t;
		}
		p->next = t;
	}
}

// Function to delete a node in a Doubly Linked List :-
int Delete(Node *p, int index){
	Node *q;
	int x = -1;
	if(index < 1 || index > Length(p)){
		return -1;
	}
	
	if(index == 1){
		first = first->next;
		if(first != NULL){
			first->prev = NULL;
		}
		x = p->data;
		delete p;
	}
	else{
		for(int i = 0; i < index - 1; i++){
			p = p->next;
		}
		p->prev->next = p->next;
		if(p->next != NULL){
			p->next->prev = p->prev;
		}
		x = p->data;
		delete p;
	}
	return x;
}

// Function to Reverse a Doubly Linked List :-
void Reverse(Node *p){
	Node *temp = NULL;
	
	while(p != NULL){
		// swapping p->next and p->prev :-
		
		temp = p->next;
		p->next = p->prev;
		p->prev = temp;
		//swap(p->next, p->prev);
		
		p = p->prev;
		if(p != NULL && p->next == NULL){
			first = p;
		}
	}
}

int main()
{
	int A[] = {10, 20, 30, 40, 50, 60, 70};
	create(A, 7);
	Reverse(first);
	
	display(first);
	return 0;
}
