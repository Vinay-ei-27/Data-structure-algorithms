#include<bits/stdc++.h>
using namespace std;

int pow(int m, int n){
	if(n == 0){
		return 1;
	}
	return m * pow(m, n-1);
}

//More Efficient Approach:-

int pow1(int m, int n){
	if(n == 0){
		return 1;
	}
	if(n%2 == 0){
		return pow1( m*m, n/2);
	}
	else{
		return m * pow(m*m, n/2);
	}
}

int main()
{
	int m = 2, n = 9;
	cout<<pow1(m, n);
	return 0;
}
