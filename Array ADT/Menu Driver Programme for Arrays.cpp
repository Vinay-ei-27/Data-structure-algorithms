#include<bits/stdc++.h>
using namespace std;

class Array{
	private:
		int *A;
		int size;
		int length;
	public:
		Array(){
			size = 10;
			length = 0;
			A = new int[size];
		}
		
		Array(int sz){
			size = sz;
			length = 0;
			A = new int[size];
		}
		~Array(){
			delete []A;
		}
		
		void Display();
		void Insert(int index, int x);
		int Delete(int index);
		int LinearSearch(int key);
		int sum();
		
};

// Display() :-
void Array::Display(){
	cout<<"The elements are: ";
	for(int i = 0; i < length; i++){
		cout<<A[i]<<" ";
	}
}

// 1. Insert(index, x) :-
void Array::Insert(int x, int index){
	if(index >= 0 && index <= length){
		for(int i = length; i > index; i--){
			A[i] = A[i - 1];
		}
		A[index] = x;
		length++;
	}
}

// 2.delete(index) :-
int Array::Delete(int index){
	int x = 0;
	if(index >= 0 && index < length){
		x = A[index];
		for(int i = index; i < length-1; i++){
			A[i] = A[i+1];
		}
		length--;
		return x;
	}
	return 0;
}

// 3. search(x) {Linear Search} :-
int Array::LinearSearch(int key){
	for(int i = 0; i < length; i++){
		if(A[i] == key){
			return i;
		}
	}
	return -1;
}

// 4. Sum():-
int Array::sum(){
	int total = 0;
	for(int i = 0; i < length; i++){
		total = total + A[i];
	}
	return total;
}

int main()
{
	Array *arr1;
	int sz, ch, x, index;
	
	cout<<"Enter the size of the array: ";
	cin>>sz;
	arr1 = new Array(sz);
	
	do
	{	
		cout<<"Menu\n";
		cout<<"1. Insert\n";
		cout<<"2. Delete\n";
		cout<<"3. Search\n";
		cout<<"4. Sum\n";
		cout<<"5. Display\n";
		cout<<"6. Exit\n";
	
		cout<<"Enter Your Choice: ";
		cin>>ch;
	
		switch(ch){
			case 1:
				cout<<"Enter element and index: ";
				cin>>x>>index;
				arr1->Insert(x, index);
				break;
		
			case 2:
				cout<<"Enter Index: ";
				cin>>index;
				x = arr1->Delete(index);
				cout<<"Deleted element is: "<<x<<endl;
				break;
			
			case 3:
				cout<<"Enter an element to search: ";
				cin>>x;
				index = arr1->LinearSearch(x);
				cout<<"The element is present at index: "<<index<<endl;
				break;
			
			case 4:
				cout<<"The sum of the elements is: "<<arr1->sum()<<endl;
				break;
			
			case 5:
				arr1->Display();
			cout<<"\n\n";
		}
	} while(ch < 6);
	return 0;
}
