#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class Stack{
	private:
		Node *top;
		
	public:
		Stack(){
			top = NULL;
		}
		void push(int x);
		int pop();
		int peek(int pos);
		int isEmpty();
		int isFull();
		int Top();
		void Display();
};

// Function to insert an element :-
void Stack::push(int x){
	Node *t = new Node();
	if(t == NULL){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		t->data = x;
		t->next = top;
		top = t;
	}
}

// Function to Delete an element or TOP element :-
int Stack::pop(){
	int x = -1;
	if(top == NULL){
		cout<<"Stack Underflow";
	}
	else{
		x = top->data;
		Node *t = top;
		top = top->next;
		delete t;
	}
	return x;
}

// Function to get an element at given position :-
int Stack::peek(int pos){
	Node *p = top;
	for(int i = 0; i < pos-1 && p != NULL; i++){
		p = p->next;
	}
	if(p != NULL){
		return p->data;
	}
	else{
		return -1;
	}
}

// Function to check if stack is empty or not :-
int Stack::isEmpty(){
	if(top != NULL){
		return 0;
	}
	else{
		return 1;
	}
}

// Function to check if stack is full or not :-
int Stack::isFull(){
	Node *t = new Node();
	if(t == NULL){
		cout<<"Heap Overflow";
		return 1;
	}
	else{
		return 0;
	}
}

// Function to get the top element in stack :-
int Stack::Top(){
	if(top != NULL){
		return top->data;
	}
	else{
		return -1;
	}
}

// Function to display all elements of stack :-
void Stack::Display(){
	Node *p = top;
	while(p != NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}

int main()
{
	Stack s;
	s.push(7);
	s.push(10);
	s.push(13);
	s.push(15);
	s.push(19);
	
	cout<<s.pop();
	cout<<endl;
	s.Display();
	return 0;
}
