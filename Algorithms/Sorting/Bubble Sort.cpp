#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,5,1,3,9,6,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"unsorted array is: ";
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nsorted array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
