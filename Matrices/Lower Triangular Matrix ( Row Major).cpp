#include<bits/stdc++.h>
using namespace std;

class LowerTriangular{
	private:
		int n;
		int *A;
	public:
		LowerTriangular(int a){
			n = a;
			A = new int[n*(n+1)/2];
		}
		
		~LowerTriangular(){
			delete []A;
		}
		
		void Set(int i, int j, int x);
		int Get(int i, int j);
		void Display();
		int GetDimension(){
			return n;
		}
};

void LowerTriangular :: Set(int i, int j, int x){
	if(i >= j){
		A[i*(i-1)/2 + (j-1)] = x;
	}
}

int LowerTriangular :: Get(int i, int j){
	if(i >= j){
		return A[i*(i-1)/2 + (j-1)];
	}
	else {
		return 0;
	}
}

void LowerTriangular :: Display(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i >= j){
				cout<<A[i*(i-1)/2 + (j-1)]<<" ";
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
	int d;
	cout<<"Enter Dimension: ";
	cin>>d;
	
	LowerTriangular lm(d);
	
	int x;
	cout<<"Enter all elements: "<<endl;
	for(int i = 1; i <= d; i++){
		for(int j = 1; j <= d; j++){
			cin>>x;
			lm.Set(i, j, x);
		}
	}
	cout<<"\n\n";
	lm.Display();
	return 0;
}
