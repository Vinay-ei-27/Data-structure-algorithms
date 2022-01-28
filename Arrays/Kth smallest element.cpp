#include<algorithm>
#include<iostream>
using namespace std;
int kthelement(int arr[],int k,int n){
	sort(arr,arr+n);
	return arr[k-1];
}
int main()
{
	int arr[]={10,9,234,162,76,98,2,3,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<kthelement(arr,6,n);
	return 0;
}
