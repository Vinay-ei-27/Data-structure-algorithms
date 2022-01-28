#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int key,int low,int high){
	if(low>high){
		return -1;
	}
	int mid=low + (high-low)/2;
	if(key==a[mid]){
		return mid;
	}
	else if(key<a[mid]){
		return binarySearch(a,key,low,mid-1);
	}
	else{
		return binarySearch(a,key,mid+1,high);
	}
}

int main()
{
	int a[]={1,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	int low=0;
	int high=n-1;
	int key=4;
	int res=binarySearch(a,key,low,high);
	if(res==-1){
		cout<<"The element is not present in the array.";
	}
	else{
		cout<<"The element is present at index: "<<res;
	}
	return 0;
}
