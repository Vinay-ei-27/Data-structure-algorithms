#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
}*head = NULL;

// To Create Circular Linked List :-
void create(int A[], int n){
	Node *t, *last;
	head = new Node();
	head->data = A[0];
	head->next = head;
	last = head;
	
	for(int i = 1; i < n; i++){
		t = new Node();
		t->data = A[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}
}

// To display Circular Linked List :-
void display(Node *p){
	do{
		cout<<p->data<<" ";
		p = p->next;
	} while(p != head);
}

// To find the length of the circular linked list { i.e; total number of nodes (count) in CLL}
int Length(Node *p){
	int count = 0;
	do{
		count++;
		p = p->next;
	} while( p != head);
	return count;
}


// To insert a node anywhere in the Circular Linked List :-
void Insert(Node *p, int index, int x){
	Node *t;
	
	if(index < 0 || index > Length(p)){
		return;
	}
	
	if(index == 0){
		t = new Node();
		t->data = x;
		if(head == NULL){
			head = t;
			head->next = head;
		}
		else{
			while(p->next != head){
				p = p->next;
			}
			p->next = t;
			t->next = head;
			head = t;
		}
	}
	else{
		for(int i = 0; i < index - 1; i++){
			p = p->next;
		}
		t = new Node();
		t->data = x;
		t->next = p->next;
		p->next = t;
	}
}

// Function to Delete a node from anywhere in the Circular Linked List :-
int Delete(Node *p, int index){
	Node *q;
	int x = -1;
	if(index < 0 || index > Length(p)){
		return -1;
	}
	
	if(index == 1){
		while(p->next != head){
			p = p->next;
		}
		x = head->data;
		if(p == head){
			delete head;
			head == NULL;
		}
		else{
			p->next = head->next;
			delete head;
			head = p->next;
		}
	}
	else {
		for(int i = 0; i < index - 2; i++){
			p = p->next;
		}
		q = p->next;
		p->next = q->next;
		x = q->data;
		delete q;
	}
	return x;
}

int main()
{
	int A[] = {1, 3, 2, 4, 7, 9};
	create(A, 6);
	cout<<Delete(head, 1);
	cout<<endl;
	display(head);
	return 0;
}
