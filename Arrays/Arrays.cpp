#include<iostream>
using namespace std;
int main()
{
//	this will give any random value:-
	
	int arr[2];
	cout<<arr[3]<<endl;
	cout<<arr[-2];
	
	int arr[3]={1,2,3,4,5};  /*{this will show error:-  “error: too many initializers for ‘int [3]'”. }*/
	
	
//	C++ program to demonstrate that array elements are stored contiguous locations:
	
	int arr[5];
	cout<<"size of int in this compiller is: "<<sizeof(int)<<endl;
	for(int i=0;i<5;i++){
		cout<<"the address of array arr["<<i<<"] is: "<<&arr[i]<<endl;
		}
	
	methods to traverse an array:-
	
//	method 1:-
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
//	method 2:-
	for(int i=0;i<5;i++){
		cout<<i[arr]<<" ";
	}
	
	int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr = arr;
 	ptr[2] = 111;
 	cout<<arr[2]<<endl;
     sizof(int) * (number of element in arr[]) is printed
    cout << "Size of arr[] " << sizeof(arr) << "\n";
 
     sizeof a pointer is printed which is same for all
     type of pointers (char *, void *, etc)
    cout << "Size of ptr " << sizeof(ptr)<<endl;
    cout<< &arr <<" "<<&ptr;

//  second program to show array and pointer are different:-
    int arr[] = {10, 20}, x = 10;
    int *ptr = &x; // This is fine
    arr = &x;  // Compiler Error
    
    
	return 0;
}
