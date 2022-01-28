#include<iostream>
using namespace std;

void swap(int* x,int* y){
	int* temp=x;
	x=y;
	y=temp;
}

void rearrange(int arr[],int n){
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			if(i!=0){
				swap(arr[i],arr[j]);
			}
			j++;
		}
	}
}

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int ARR[]={-1,2,4,-5,-6,8,9,-3};
	int N=sizeof(ARR)/sizeof(ARR[0]);
	cout<<"Array before Rearrangement: ";
	printarray(ARR,N);
	cout<<endl;
	rearrange(ARR,N);
	cout<<"Array After Rearrangement: ";
	printarray(ARR,N);
	return 0;
}
