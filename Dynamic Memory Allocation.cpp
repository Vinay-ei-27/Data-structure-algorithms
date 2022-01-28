#include<iostream>
using namespace std;
int main()
{
	int size;
	int *ptr;
	cout<<"enter the number of values you want to enter in the array"<<endl;
	cin>>size;
	
	ptr=new int[size];
	cout<<"enter the values in the array: "<<endl;
	for(int i=0;i<size;i++){
		cin>>ptr[i];
	}
	cout<<"the values in the array are: "<<endl;
	for(int i=0;i<size;i++){
		cout<<ptr[i]<<endl;
	}
	return 0;
}
