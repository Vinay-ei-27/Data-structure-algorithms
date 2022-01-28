#include<bits/stdc++.h>
using namespace std;

class Array{
	public:
		int A[10];
		int size;
		int length;
};
// 1. Display() :-
void Display(Array arr){
	for(int i = 0; i < arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
}

//2. Add(x) / Append(x) :-
void Append(Array *arr, int x){
	if(arr->length < arr->size){
		arr->A[arr->length++] = x;
	}
}

// 3. Insert(index, x) :-
void Insert(Array *arr, int index, int x){
	if(index >= 0 && index <= arr->length){
		for(int i = arr->length; i > index; i--){
			arr->A[i] = arr->A[i - 1];
		}
		arr->A[index] = x;
		arr->length++;
	}
}

// 4.delete(index) :-
int Delete(Array *arr, int index){
	int x = 0;
	if(index >= 0 && index < arr->length){
		x = arr->A[index];
		for(int i = index; i < arr->length-1; i++){
			arr->A[i] = arr->A[i+1];
		}
		arr->length--;
		return x;
	}
	return 0;
}

// 5. search(x) {Linear Search} :-
int LinearSearch(Array arr, int key){
	for(int i = 0; i < arr.length; i++){
		if(arr.A[i] == key){
			return i;
		}
	}
	return -1;
}

//For Improving Linear Search :- { Transposition }
int LinearSearch1(Array *arr, int key){
	for(int i = 0; i < arr->length; i++){
		if(arr->A[i] == key){
			swap(arr->A[i], arr->A[i-1]);
			return i;
		}
	}
	return -1;
}

//For Improving Linear Search :- { Move to Head/front }
int LinearSearch2(Array *arr, int key){
	for(int i = 0; i < arr->length; i++){
		if(arr->A[i] == key){
			swap(arr->A[i], arr->A[0]);
			return i;
		}
	}
	return -1;
}

// Binary Search (Iteratively) :-
int BinarySearch(Array arr, int key){
	int l, h, mid;
	l = 0;
	h = arr.length -1;
	while(l <= h){
		mid = (l + h)/2;
		if(arr.A[mid] == key){
			return mid;
		}
		else if(key < arr.A[mid]){
			h = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return -1;
}

// Binary Search (Recursively) :-
int BinarySearch1(Array arr, int l, int h, int key){
	if(l > h){
		return -1;
	}
	int mid = (l + h)/2;
	if(key == arr.A[mid]){
		return mid;
	}
	else if(key < arr.A[mid]){
		return BinarySearch1(arr, l, mid-1, key);
	}
	else{
		return BinarySearch1(arr, mid+1, h, key);
	}
}

// 6. Get() :-
int Get(Array arr, int index){
	if(index >= 0 && index < arr.length){
		return arr.A[index];
	}
	return -1;
}

// 7. Set():-
void Set(Array *arr, int index, int val){
	if(index >= 0 && index < arr->length){
		arr->A[index] = val;
	}
}

// 8. Max():-
int Max(Array arr){
	int max = arr.A[0];
	for(int i = 1; i < arr.length; i++){
		if(arr.A[i] > max){
			max = arr.A[i];
		}
	}
	return max;
}

// 9. Min():-
int Min(Array arr){
	int min = arr.A[0];
	for(int i = 1; i < arr.length; i++){
		if(arr.A[i] < min){
			min = arr.A[i];
		}
	}
	return min;
}

// 10. Sum():-
int sum(Array arr){
	int total = 0;
	for(int i = 0; i < arr.length; i++){
		total = total + arr.A[i];
	}
	return total;
}

// 11. Average():-
float Avg(Array arr){
	return (float)sum(arr)/arr.length;
}

// 12. Reverse() :-
void Reverse(Array *arr){
	int *B;
	int i, j;
	B = new int[arr->length];
	for(i = arr->length-1, j = 0; i >= 0; i--,j++){
		B[j] = arr->A[i];
	}
	for(i = 0; i < arr->length; i++){
		arr->A[i] = B[i];
	}
}

// 12. Reverse() { Swapping Method} :-
void Reverse2(Array *arr){
	int i, j;
	for(i = 0, j = arr->length-1; i < j; i++,j--){
		swap(arr->A[i], arr->A[j]);
	}
}

// 13. Left Shift :-
void LeftShift(Array *arr){
	for(int i = 0; i < arr->length-1; i++){
		arr->A[i] = arr->A[i+1];
	}
	arr->A[arr->length-1] = 0;
}

// 13. Left Rotate an array :-
void LeftRotate(Array *arr){
	int temp = arr->A[0];
	for(int i = 0; i < arr->length-1; i++){
		arr->A[i] = arr->A[i+1];
	}
	arr->A[arr->length-1] = temp;
}

// 14. Inserting an element in a sorted array :-
void InsertSort(Array *arr, int x){
	int i = arr->length - 1;
	if(arr->length == arr->size){
		return;
	}
	while(i >= 0 && arr->A[i] > x){
		arr->A[i+1] = arr->A[i];
		i--;
	}
	arr->A[i+1] = x;
	arr->length++;
}

// 15. Check if array is sorted or not :-
bool isSorted(Array arr){
	for(int i = 0; i < arr.length-1; i++){
		if(arr.A[i] > arr.A[i+1]){
			return false;
		}
	}
	return true;
}

// 16. put negative on left side and positive on right side :-
void Rearrange(Array *arr){
	int i = 0;
	int j = arr->length - 1;
	while(i < j){
		while(arr->A[i] < 0){
			i++;
		}
		while(arr->A[j] >= 0){
			j--;
		}
		if(i < j){
			swap(arr->A[i], arr->A[j]);
		}
	}
}

// 17. Merging of two sorted arrays into one sorted array:-
Array* Merge(Array *arr1, Array *arr2){
	int i = 0, j = 0, k = 0;
	
	Array *arr3 = new Array[arr1->length + arr2->length];
	
	while(i < arr1->length && j < arr2->length){
		if(arr1->A[i] < arr2->A[j]){
			arr3->A[k++] = arr1->A[i++];
		} else {
			arr3->A[k++] = arr2->A[j++];
		}
	}
	while(i < arr1->length){
		arr3->A[k++] = arr1->A[i++];
	}
	while(j < arr2->length){
		arr3->A[k++] = arr2->A[j++];
	}
	arr3->length = arr1->length + arr2->length;
	arr3->size = 10;
	return arr3;
}

// 18. Set operations on array:-
// 1. union of two arrays:-
Array* Union(Array *arr1, Array *arr2){
	int i = 0, j = 0, k = 0;
	
	Array *arr3 = new Array[arr1->length + arr2->length];
	
	while(i < arr1->length && j < arr2->length){
		if(arr1->A[i] < arr2->A[j]){
			arr3->A[k++] = arr1->A[i++];
		}
		else if(arr2->A[j] < arr1->A[i]){
			arr3->A[k++] = arr2->A[j++];
		}
		else{
			arr3->A[k++] = arr1->A[i++];
			j++;
		}
	}
	while(i < arr1->length){
		arr3->A[k++] = arr1->A[i++];
	}
	while(j < arr2->length){
		arr3->A[k++] = arr2->A[j++];
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

// 2. Intersection of two arrays:-
Array* Intersection(Array *arr1, Array *arr2){
	int i = 0, j = 0, k = 0;
	
	Array *arr3 = new Array[arr1->length + arr2->length];
	
	while(i < arr1->length && j < arr2->length){
		if(arr1->A[i] < arr2->A[j]){
			i++;
		}
		else if(arr2->A[j] < arr1->A[i]){
			j++;
		}
		else if(arr1->A[i] == arr2->A[j]){
			arr3->A[k++] = arr1->A[i++];
			j++;
		}
	}

	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

// 3. Difference of two arrays:-
Array* Difference(Array *arr1, Array *arr2){
	int i = 0, j = 0, k = 0;
	
	Array *arr3 = new Array[arr1->length + arr2->length];
	
	while(i < arr1->length && j < arr2->length){
		if(arr1->A[i] < arr2->A[j]){
			arr3->A[k++] = arr1->A[i++];
		}
		else if(arr2->A[j] < arr1->A[i]){
			j++;
		}
		else{
			i++;
			j++;
		}
	}
	while(i < arr1->length){
		arr3->A[k++] = arr1->A[i++];
	}

	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

int main()
{
	Array arr1 = {{3, 5, 10, 15, 56}, 10, 5};
	Array arr2 = {{5, 7, 15, 19, 27}, 10, 5};
	Array *arr4;
	arr4 = Difference(&arr1, &arr2);
	cout<<endl;
	Display(*arr4);
	return 0;
}
