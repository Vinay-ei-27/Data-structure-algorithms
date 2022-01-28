#include<bits/stdc++.h>
using namespace std;

// Recursive Method:-
int fib(int n){
	if(n <= 1){
		return n;
	}
	return fib(n-2) + fib(n-1);
}

//Iterative Method:-
int fib1(int n){
	int t0 = 0, t1 = 1, s;
	if(n <= 1){
		return n;
	}
	for(int i = 2; i <= n; i++){
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}

// Using Memoization {For Better Time Complexity} :-
int F[10];
int fib2(int n){
	if(n <= 1){
		F[n] = n;
		return n;
	}
	else {
		if(F[n-2] == -1){
			F[n-2] = fib2(n-2);
		}
		if(F[n-1] == -1){
			F[n-1] = fib2(n-1);
		}
		return F[n-2] + F[n-1];
	}
}

int main()
{
	for(int i = 0; i < 10; i++){
		F[i] = -1;
	}
	cout<<fib2(10);
}
