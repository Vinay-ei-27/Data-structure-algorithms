#include<bits/stdc++.h>
using namespace std;

int findMaxmValue(int arr[], int low, int high){
	if(low == high){
		return arr[low];
	}
	if(low == high-1){
		if( arr[low] > arr[high] ){
			return arr[low];
		} else {
			return arr[high];
		}
	}
	
	int mid =  (low + high)/2;
	
	if( arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1] ){
		return  arr[mid];
	}
	if(arr[mid] > arr[mid+1] && arr[mid] < arr[mid-1]){
		return findMaxmValue(arr, low, mid-1);
	}
	if(arr[mid] > arr[mid-1] && arr[mid]  < arr[mid+1]){
		return findMaxmValue(arr, mid+1, high);
	}
}

int main()
{
	int arr[]={7, 9, 10, 11, 5, 4};
	int N = sizeof(arr)/sizeof(arr[0]);
	int low = 0;
	int high = N-1;
	cout<<"The maximum number in the array is: "<<findMaxmValue(arr, low, high);
	return 0;
}
