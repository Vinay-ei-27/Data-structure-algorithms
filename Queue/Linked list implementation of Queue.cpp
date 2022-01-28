#include<bits/stdc++.h>
using namespace std;
class Qnode{
	public:
		int data;
		Qnode* next;
		Qnode(int d){
			data=d;
			next=NULL;
		}
};

class Queue{
	public:
	Qnode* front,*rear;
	Queue(){
		front=rear=NULL;
	}
	void enqueue(int x){
		Qnode* temp=new Qnode(x);
		if(rear==NULL){
			front=rear=temp;
			return;
		}
	 	rear->next=temp;
		rear=temp;
	}
	
	void dequeue(){
		if(front==NULL){
			return;
		}
		Qnode* temp=front;
		front=front->next;
		if(front==NULL){
			rear=NULL;
			return;
		}
		delete(temp);
	}
};
int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(25);
	cout<<"queue front: "<<(q.front)->data<<endl;
	cout<<"queue rear: "<<(q.rear)->data;
	return 0;
}
