#include<bits/stdc++.h>
using namespace std;

class Diagonal{
	private:
		int n;
		int *A;
	public:
		Diagonal(int a){
			n = a;
			A = new int[n];
		}
		
		~Diagonal(){
			delete []A;
		}
		
		void Set(int i, int j, int x);
		int Get(int i, int j);
		void Display();
};

void Diagonal :: Set(int i, int j, int x){
	if(i == j){
		A[i - 1] = x;
	}
}

int Diagonal :: Get(int i, int j){
	if(i == j){
		return A[i-1];
	}
	else {
		return 0;
	}
}

void Diagonal :: Display(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				cout<<A[i]<<" ";
			}
			else{
				cout<<"0"<<" ";
			}
		}
		cout<<endl;
	}
}

int main()
{
	Diagonal m(5);

	m.Set(1, 1, 11);
	m.Set(2, 2, 17);
	m.Set(3, 3, 27);
	m.Set(4, 4, 33);
	m.Set(5, 5, 49);
	cout<<m.Get(3, 3);
	cout<<endl;
	m.Display();
	return 0;
}
