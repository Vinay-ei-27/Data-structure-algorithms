#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
	
	int result[10];
	
	int k = low, i = low, j = mid+1;
	
	while(i<=mid && j<=high){
		if(arr[i]<=arr[j]){
			result[k++] = arr[i++];
		} else {
			result[k++] = arr[j++];
		}
	}
	
	while(i<=mid){
		result[k++] = arr[i++];
	}
	
	while(j<=high){
		result[k++] = arr[j++];
	}
	
	for(i=low; i<=high; i++){
		arr[i] = result[i];
	}
}

void mergesort(int arr[], int low, int high){
	
	if(low == high){
		return;
	}
	
	int mid = (low + high)/2;
	
	mergesort(arr, low, mid);
	
	mergesort(arr, mid+1, high);
	
	merge(arr, low, mid, high);
}

void printarray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={12,43,4,1,67,33,77,90,54,27};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low = 0;
	int high = n-1;
	cout<<"Array before sorting: ";
	printarray(arr, n);
	cout<<endl;
	mergesort(arr, low, high);
	cout<<"Array after sorting: ";
	printarray(arr, n);
	return 0;
}
