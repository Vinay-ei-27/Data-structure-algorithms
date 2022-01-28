#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(n2) :-
double taylor(int x, int n){
	static double p = 1, f = 1;
	double r;
	if( n == 0){
		return 1;
	}
	else{
		r = taylor(x, n-1);
		p = p*x;
		f = f*n;
		return r + p/f;
	}
}

// Better Approach, Time Complexity = O(n) [Iteratively] :-
double taylor1(int x, int n){
	double s = 1, num = 1, den = 1;
	for(int i = 1; i <= n; i++){
		num *= x;
		den *= i;
		s += num/den;
	}
	return s;
}

//Recursive Approach Time Complexity = O(n) :- {Horner's Rule}
double taylor2(int x, int n){
	static double s = 1;
	if(n == 0){
		return s;
	}
	s = 1 + x*s/n;
	return taylor2(x, n-1);
}

int main()
{
	cout<<taylor2(1, 10);
	return 0;
}
