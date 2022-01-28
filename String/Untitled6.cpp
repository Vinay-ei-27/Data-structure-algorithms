#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,X,Y,K,N;
	cin>>T;
	for(int i=0;i<T;i++){
		vector<int> a;
		vector<int> b;
	    cin>>X>>Y>>K>>N;
	    int P=(X-Y);
	    int g=0;
	    for(int j=0;j<N;j++){
	    	int value1,value2;
	    	cin>>value1>>value2;
	    	a.push_back(value1);
	    	b.push_back(value2);	
	    }
	    for(int c=0;c<N;c++){
	    	if(a[c]>=P && b[c]<=K){
	    		g=1;
			}
		}
		if(g==1){
			cout<<"luckychef"<<endl;
		}
		else
		cout<<"unluckychef"<<endl;
	}
	return 0;
}
