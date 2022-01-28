#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
		int size;
		int top;
		int *A;
};

// Function to define Stack :-
void create(Stack *st){
	cout<<"Enter the size: ";
	cin>>st->size;
	st->top = -1;
	st->A = new int[st->size];
}

// Function to display the elements of stack :-
void Display(Stack st){
	for(int i = st.top; i >= 0; i--){
		cout<<st.A[i]<<" ";
	}
}

// Function to insert an element in stack:-
void push(Stack *st, int val){ 
	if(st->top == st->size - 1){
		cout<<"Stack Overflow, cannot push element "<<val<<endl;
	}
	else{
		st->top++;
		st->A[st->top] = val;
	}
}

// Function to delete an element from stack { top element } :-
int pop(Stack *st){
	int x = -1;
	if(st->top == -1){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		x = st->A[st->top];
		st->top--;
	}
	return x;
}

// Function to get an element at given position :-
int peek(Stack st, int pos){
	int index = st.top - pos + 1;
	int x = -1;
	
	if(index < 0){
		cout<<"Invalid Position.";
	}
	else{
		x = st.A[index];
	}
	return x;
}

// Function to check if stack is empty or not :-
int isEmpty(Stack st){
	if(st.top == -1){
		return 1;
	}
	else {
		return 0;
	}
}

// Function to check if stack is Full or not :-
int isFull(Stack st){
	if(st.top == st.size - 1){
		return 1;
	}
	else {
		return 0;
	}
}

// Function to get top element of the stack :-
int top(Stack st){
	if(!isEmpty(st)){
		return st.A[st.top];
	}
	else{
		return -1;
	}
}

int main()
{
	Stack st;
	create(&st);
	push(&st, 5);
	push(&st, 4);
	push(&st, 3);
	push(&st, 2);
	push(&st, 12);
	
	cout<<top(st);
	cout<<endl;
	Display(st);
	return 0;
}
