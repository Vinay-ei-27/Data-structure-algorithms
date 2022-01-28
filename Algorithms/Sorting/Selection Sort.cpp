#include<bits/stdc++.h>
using namespace std;

void swap(int* x,int* y){
	int* temp=x;
	x=y;
	y=temp;
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

void selectionsort(int ARR[],int n){
	int Min;
	for(int i=0;i<n;i++){
		Min=i;
		for(int j=i+1;j<n;j++){
			if(ARR[Min]>ARR[j]){
				Min=j;
			}
		swap(ARR[i],ARR[Min]);
		}
	}
}

int main()
{
	int arr[]={5,3,1,7,6,9,2};
	int N=sizeof(arr)/sizeof(arr[0]);
	cout<<"Array before sorting: ";
	print(arr,N);
	selectionsort(arr,N);
	cout<<"\nArray after sorting: ";
	print(arr,N);
	return 0;
}
