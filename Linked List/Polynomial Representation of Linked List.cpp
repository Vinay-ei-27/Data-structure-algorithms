#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int coeff;
		int exp;
		Node *next;
}*poly = NULL;

// function to create polynomial :-
void create(){
	Node *t = NULL, *last = NULL;
	int num;
	
	cout<<"Enter Number of Terms: ";
	cin>>num;
	cout<<"Enter each term with coefficient and exponents: ";
	
	for(int i = 0; i < num; i++){
		t = new Node();
		cin>>t->coeff;
		cin>>t->exp;
		t->next = NULL;
		if(poly == NULL){
			poly = last = t;
		}
		else{
			last->next = t;
			last = t;
		}
	}
}

//function to display Polynomial :-
void Display(Node *p){
	while(p != NULL){
		cout<<p->coeff<<"x"<<p->exp<<" + ";
		p = p->next;
	}
}

//function to evaluate polynomial :-
long Evaluate(Node *p, int x){
	long val = 0;
	while(p != NULL){
		val += p->coeff*pow(x, p->exp);
		p = p->next;
	}
	return val;
}

int main()
{
	create();
	Display(poly);
	cout<<endl;
	cout<<"Answer is: "<<Evaluate(poly, 1);
	return 0;
}
