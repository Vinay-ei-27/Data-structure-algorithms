#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
}*first = NULL, *second = NULL, *third = NULL; //(*first) it is a global variable;

// to create linked list
void create(int A[], int n){
	Node *t, *last;
	first = new Node();
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(int i = 1; i < n; i++){
		t = new Node();
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}


void create2(int A[], int n){
	Node *t, *last;
	second = new Node();
	second->data = A[0];
	second->next = NULL;
	last = second;
	
	for(int i = 1; i < n; i++){
		t = new Node();
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

// displaying the elements of a linked list :-
void display(Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}

// finding the count of elements of a linked list :-
int count(Node *p){
	int c = 0;
	while(p!=NULL){
		c++;
		p = p->next;
	}
	return c;
}

// finding the sum of elements of a linked list
int add(Node *p){
	int sum = 0;
	while(p!=NULL){
		sum += p->data;
		p = p->next;
	}
	return sum;
}

// finding maximum element in a linked list :-
int max(Node *p){
	int m = INT_MIN;
	while(p != NULL){
		if(p->data > m){
			m = p->data;
		}
		p = p->next;
	}
	return m;
}

//Using Linear Search:-
Node *LSearch(Node *p, int key){
	while(p != NULL){
		if(key == p->data){
			return p;
		}
		p = p->next;
	}
	return NULL;
}

// Improving Search function :- { Using Move to head Method }
Node *Search(Node *p, int key){
	Node *q = NULL;
	while(p != NULL){
		if(key == p->data){
			q->next = p->next;
			p->next = first;
			first = p;
			return p;
		}
		q = p;
		p = p->next;
	}
	return NULL;
}

// Inserting anywhere in a linked listm :-
void Insert(Node *p, int index, int x){
	Node *t;
	
	if(index < 0 || index > count(p)){
		return;
	}
	
	t = new Node();
	t->data = x;
	
	if(index == 0){
		t->next = first;
		first  = t;
	}
	
	else{
		
		for(int i = 0; i < index - 1; i++){
			p = p->next;
		}
		t->next = p->next;
		p->next = t;
	}
}


//Inserting in a sorted Linked list :-
void SortedInsert(Node *p, int x){
	Node *t, *q = NULL;
	t = new Node();
	t->data = x;
	t->next = NULL;
	
	if(first == NULL){
		first = t;
	}
	else{
		while(p && p->data < x){
			q = p;
			p = p->next;
		}
		
		if(p == first){
			t->next = first;
			first = t;
		}
		else{
			t->next = q->next;
			q->next = t;
		}
	}
}

// Deleting a node :-
int Delete(Node *p, int index){
	Node *q = NULL;
	int x = -1;
	if(index < 1 || index > count(p)){
		return x;
	}
	
	if(index == 1){
		q = first;
		x = first->data;
		first = first->next;
		delete q;
		return x;
	}
	else{
		for(int i = 0; i < index - 1; i++){
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		delete p;
		return x;
	}
}

// To check if Linked list is sorted or not:-
bool IsSorted(Node *p){
	int x = INT_MIN;
	while(p != NULL){
		if(p->data < x){
			return false;
		}
		x = p->data;
		p = p->next;
	}
	return true;
}

// Removing Duplicates From Sorted Linked List :-
void RemoveDupli(Node *p){
	Node *q = p->next;
	while(q != NULL){
		if(p->data != q->data){
			p = q;
			q = q->next;
		}
		else{
			p->next = q->next;
			delete q;
			q = p->next;
		}
	}
}

// Reversing a linked list :- { Reversing Elements Method, i.e- Using Arrays }
void Reverse1(Node *p){
	int i = 0;
	Node *q = p; // q is used for traversing through the linked list.
	int *A = new int[count(p)];
	while(q != NULL){
		A[i] = q->data;
		q = q->next;
		i++;
	}
	q = p;
	i--;
	while(q != NULL){
		q->data = A[i];
		q = q->next;
		i--;
	}
}

// Reversing a linked list :- { Reversing Links Method }
void Reverse2(Node *p){
	Node *q = NULL;
	Node *r = NULL;
	while(p != NULL){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

// Recursive Method for Reversing a linked list :-
void Reverse3(Node *q, Node *p){
	if(p != NULL){
		Reverse3(p, p->next);
		p->next = q;
	}
	else{
		first = q;
	}
}

// To Concatenate 2 linked list :-
void concatenate(Node *p, Node *q){
	third = p;
	while(p->next != NULL){
		p = p->next;
	}
	p->next = q;
}

// To Merge 2 Linked List :- 
void Merge(Node *p, Node *q){
	Node *last;
	if(p->data < q->data){
		third = last = p;
		p = p->next;
		third->next = NULL;
	}
	else {
		third = last = q;
		q = q->next;
		third->next = NULL;
	}
	
	while(p != NULL && q != NULL){
		if(p->data < q->data){
			last->next = p;
			last = p;
			p = p->next;
			last->next = NULL;
		}
		else {
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}
	}
	if(p != NULL){
		last->next = p;
	}
	if(q != NULL){
		last->next = q;
	}
}

// To Check if there is a LOOP in a linked list or not :-
int isLoop(Node *f){
	Node *p, *q;
	p = q = f;
	do{
		p = p->next;
		q = q->next;
		if(q != NULL){
			q = q->next;
		}
		else{
			q = q;
		}
	} while( p!= NULL && q != NULL && p != q);
	
	if(p == q){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
	Node * t1, *t2;
	int A[] = {10, 20, 30, 40, 50};
//	int B[] = {5, 15, 25, 35, 45};
	
	create(A, 5);
//	create2(B, 5);
	
	t1 = first->next->next;
	t2 = first->next->next->next->next;
	t2->next = t1;
	cout<<isLoop(first);
	
	//concatenate(first, second); // if we want to print elements of array B first then the elements of array A, we can simply write concatenate(second, first).
	//	Insert(first, 2, 9); // we can also use insert() function to create a linked list; but for that we have to start with index 0 only.
	return 0;
}
