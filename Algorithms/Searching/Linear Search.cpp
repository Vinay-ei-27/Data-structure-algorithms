#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int key, int n){
	 for(int i=0; i<n; i++){
	 	if(arr[i] == key){
	 		return i;
		 }
	 }
	 return -1;
}

int main()
{
	int arr[]={46,21,11,34,88,97,2,15,9,44};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 21;
	int res = search(arr, key, n);
	if(res == -1){
		cout<<"The element is not present in the array.";
	} else {
		cout<<"The element is present at the index: "<<res;
	}
	return 0;
}
