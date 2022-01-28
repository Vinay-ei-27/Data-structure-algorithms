#include<iostream>
using namespace std;
#define MAX 1000

class stack{
	private:
		int top;
		
	public:
		int a[MAX]; //max size of integer.
		stack(){
			top=-1;
		}
		bool push(int x);
		int pop();
		int peek();
		bool isEmpty();
		
};

bool stack::push(int x){
	if(top>=(MAX-1)){
		cout<<"stack overflow"<<endl;
		return false;
	}
	else{
		a[++top]=x;
		cout<<x<<" pushed into stack."<<endl;
		return true;
	}
}

int stack::pop(){
	if(top<0){
		cout<<"stack underflow."<<endl;
		return 0;
	}
	else{
		int m=a[top--];
		return m;
	}
}

int stack::peek(){
	if(top<0){
		cout<<"stack is empty.";
		return 0;
	}
	else{
	int p=a[top];
	return p;
	}
}

bool stack::isEmpty(){
	if(top<0){
		cout<<"stack is empty.";
	}
	else
	cout<<"stack is not empty.";
}

int main()
{
	stack obj;
	obj.push(5);
	cout<<"element in the stack is: "<<obj.peek()<<endl;
	cout<<"popped element is: "<<obj.pop()<<endl;
	cout<<obj.peek()<<endl;
	obj.isEmpty();
	return 0;
}
