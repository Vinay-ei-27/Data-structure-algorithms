#include<bits/stdc++.h>
using namespace std;
class Queue{
	public:
		int front,rear,size;
		unsigned capacity;
		int* arr;
};

Queue* createqueue(unsigned capacity){
	Queue* nqueue=new Queue();
	nqueue->capacity=capacity;
	nqueue->size=nqueue->front=0;
	nqueue->rear=capacity-1;
	nqueue->arr=new int[nqueue->capacity];
	return nqueue;
}
int isfull(Queue* queue){
	return (queue->size==queue->capacity);
}
int isempty(Queue* queue){
	return(queue->size==0);
}
void enqueue(Queue* queue,int x){
	if(isfull(queue)){
		cout<<"queue is full.\n";
	}
	else{
		queue->rear=(queue->rear+1)%(queue->capacity);
		queue->arr[queue->rear]=x;
		queue->size=queue->size+1;
	}
}
int dequeue(Queue* queue){
	if(isempty(queue)){
		return INT_MIN;
	}
	int item=queue->arr[queue->front];
	queue->front=(queue->front+1)%(queue->capacity);
	queue->size=queue->size-1;
	return item;
}
int front(Queue* queue){
	if(isempty(queue)){
		return INT_MIN;
	}
	return queue->arr[queue->front];
}
int rear(Queue* queue){
	if(isempty(queue)){
		return INT_MIN;
	}
	return queue->arr[queue->rear];
}

int main()
{
	Queue* queue=createqueue(1000);
	enqueue(queue,12);
	enqueue(queue,27);
	enqueue(queue,55);
	enqueue(queue,92);
	cout<<front(queue);
	return 0;
}
