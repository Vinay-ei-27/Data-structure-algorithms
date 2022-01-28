#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int low, int mid, int high){
	while(mid <= high){
		if(arr[mid] == 0){
			swap(arr[low++], arr[mid++]);
		}
	
		else if(arr[mid] == 1){
			mid++;
		}
	
		else{
			swap(arr[mid], arr[high--]);
		}
	}
}

void print(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int n =sizeof(arr)/sizeof(arr[0]);
	int low = 0, mid = 0, high = n-1;
	cout<<"Before sorting: ";
	print(arr,n);
	cout<<endl;
	sort(arr, low, mid, high);
	cout<<"After sorting: ";
	print(arr,n);
	return 0;
}
