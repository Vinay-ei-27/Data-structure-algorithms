#include<bits/stdc++.h>
using namespace std;

int Jump(int nums[], int n){
	int a = nums[0];
	int b = nums[0];
	int jump = 1;
	for(int i= 1; i<=n; i++){
		if(i == n - 1){
			return jump;
		}
		a--;
		b--;
		
		if(nums[i] > b){
			b = nums[i];
		}
		
		if(a == 0){
			jump++;
			a=b;
		}
	}
	return jump;
}

int main()
{
	int nums[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	int n = sizeof(nums)/sizeof(nums[0]);
	cout<<"Total Number of Jumps is: "<<Jump(nums, n);
	return 0;
}
