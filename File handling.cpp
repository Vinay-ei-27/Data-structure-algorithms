#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[100];
	cout<<"enter your name and age: ";
	cin.getline(arr,100);
	
	ofstream obj("xyz.txt");
	obj<<arr;
	obj.close();
	cout<<"write operation performed succesfully"<<endl;

	char arr2[100];
	ifstream obj1("xyz.txt");
	obj1.getline(arr2,100);
	obj1.close();
	cout<<"Read operation performed succesfully"<<endl;
	cout<<arr2;
	return 0;
}
