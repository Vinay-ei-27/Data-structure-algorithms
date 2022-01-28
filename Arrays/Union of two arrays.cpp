#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Union(int arr1[], int arr2[], int m,int n){
	vector<int> unionset;
	for(int i=0;i<m;i++){
		unionset.push_back(arr1[i]);
	}
	for(int i=0;i<n;i++){
		bool duplicate=false;
		for(int j=0;j<unionset.size();j++){
			if(arr2[i]==unionset.at(j)){
				duplicate=true;
			}
		}
		if(!duplicate){
			unionset.push_back(arr2[i]);
		}
	}
	sort(unionset.begin(),unionset.end());
	for(int i=0;i<unionset.size();i++){
		cout<<unionset.at(i)<<", ";
	}
}

int main() 
{ 
    int arr1[] = { 1, 2, 4, 5, 6 }; 
    int arr2[] = { 2, 3, 5, 7 }; 
  
    int m = sizeof(arr1) / sizeof(arr1[0]); 
    int n = sizeof(arr2) / sizeof(arr2[0]); 
  	Union(arr1,arr2,m,n);
  	return 0;
}
