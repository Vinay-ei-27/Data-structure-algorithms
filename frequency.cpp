#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void frequency(int arr[],int n){
	int freq[n]={0};
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		int count=0;
		if(freq[i]!=1){
			for(int j=0;j<n;j++){
				if(arr[i]==arr[j]){
					count++;
					freq[j]=1;
				}
			}
			cout<<count<<" ";
		}
	}
}

int main()
{
	int a[]={1,1,2,4,3,5,3,4,4,2,1};
	int n=sizeof(a)/sizeof(int);
	frequency(a,n);
	return 0;
}
