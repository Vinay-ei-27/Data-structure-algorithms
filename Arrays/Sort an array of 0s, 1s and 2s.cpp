#include<bits/stdc++.h>
using namespace std;

void sort012(int a[],int arrsize){
	int lo=0;
	int mid=0;
	int hi=arrsize-1;
	
	while(mid<=hi){
		switch(a[mid]){
			case 0:
				swap(a[lo++],a[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(a[mid],a[hi--]);
				break;
		}
	}
}

void printlist(int a[],int arrsize){
	for(int i=0;i<arrsize;i++){
		cout<<a[i]<<" ";
	}
}

int main()
{
	int arr[]={0,1,1,0,0,2,2,2,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort012(arr,n);
	printlist(arr,n);
	return 0;
}
