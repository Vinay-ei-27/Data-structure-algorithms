#include<bits/stdc++.h>
using namespace std;

void MoveZeroToEnd(int arr[], int n){
	int count = 0;
	for(int i = 0; i<n; i++){
		if(arr[i] != 0){
			arr[count++] = arr[i];
		}
	}
	
	while(count<n){
		arr[count++] = 0;
	}
}

void print(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1, 3, 0, 0, 4, 0, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array Before Sorting: ";
	print(arr,n);
	cout<<endl;
	MoveZeroToEnd(arr, n);
	cout<<"Array After Sorting: ";
	print(arr, n);
	return 0;
}
