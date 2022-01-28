#include<bits/stdc++.h>
using namespace std;

int maxsubarray(int arr[],int n){
	int max_so_far=0;
	int max_ending_here=0;
	for(int i=0;i<n;i++){
		max_ending_here=max_ending_here+arr[i];
		if(max_so_far<max_ending_here){
			max_so_far=max_ending_here;
		}
		if(max_ending_here<0){
			max_ending_here=0;
		}
	}
	return max_so_far;
}

int main()
{
	int a[]={-2,-3,4,-1,-2,1,5,-3};
	int size=sizeof(a)/sizeof(int);
	cout<<"Max contiguous sum is: "<<maxsubarray(a,size);
	
	return 0;
}
