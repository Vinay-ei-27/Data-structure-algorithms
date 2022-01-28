#include<bits/stdc++.h>
using namespace std;

int fun(int arr[], int key, int low, int high){
	if(low > high){
		return -1;
	}
	int mid = (low + high)/2;
	if(arr[mid] == key){
		return mid;
	}
	if(arr[low] <= arr[mid]){
		if(key >= arr[low] && key <= arr[mid]){
			return fun(arr, key, low, mid-1);
		} else {
			return fun(arr, key, mid+1, high);
		}
	} else {
		if(key >= arr[mid] && key <= arr[high]){
			return fun(arr, key, mid+1, high);
		} else {
			return fun(arr, key, low, mid-1);
		}
	}
}


int main(){
	int arr[]={3, 4, 5, 6, 7, 8, 9, 10, 1, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 1;
	int low = 0;
	int high = n-1;
	cout<<"The number is present at index: "<<fun(arr, key, low, high);
	return 0;
}
