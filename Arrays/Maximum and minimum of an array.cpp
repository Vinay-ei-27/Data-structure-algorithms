#include<iostream>
using namespace std;
struct Pair{
	public:
		int max;
		int min;
};

struct Pair getminmax(int arr[],int n){
	struct Pair minmax;
	if(n==1){
		minmax.max=arr[0];
		minmax.min=arr[0];
		return minmax;
	}
	
	if(arr[0]>arr[1]){
		minmax.max=arr[0];
		minmax.min=arr[1];
	}
	else{
		minmax.max=arr[1];
		minmax.min=arr[0];
	}
	for(int i=2;i<n;i++){
		if(arr[i]>minmax.max)
			minmax.max=arr[i];
		
		else
			if(arr[i]<minmax.min){
				minmax.min=arr[i];
			}
	}
	return minmax;
}

int main()
{
	int arr[]={109,12,34,98,897,4,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	Pair minmax=getminmax(arr,n);
	cout<<"maximum element is: "<<minmax.max<<endl;
	cout<<"minimum element is: "<<minmax.min<<endl;
	return 0;
}
