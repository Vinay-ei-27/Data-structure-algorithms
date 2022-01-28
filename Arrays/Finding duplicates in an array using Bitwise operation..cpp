#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A[] = {1,2,4,6,2,7,3,9,5,7};
	int H = 0, x = 0;
	for(int i = 0; i < 10; i++){

		x = 1;
		x = x << A[i];
		if((x&H )> 0){
			cout<<A[i]<<" is Duplicate."<<endl;
		}
		else {
			H = x|H;
		}
	}
	return 0;
}
