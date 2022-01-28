#include<bits/stdc++.h>
using namespace std;
char tree[10];
class node{
	public:
		int data;
		node* left,*right;
};

void root(char key){
	if(tree[0]!='\0'){
		cout<<"tree already had a root";
	}
	else{
		tree[0]=key;
	}
}

void setleft(char key,int parent){
	if(tree[parent]=='\0'){
		cout<<"cant set child at "<<(2*parent)+1<<" ,No parent available.";
	}
	else{
		tree[(2*parent)+1]=key;
	}
}

void setright(char key, int parent){
	if(tree[parent]=='\0'){
		cout<<"\ncant set child at "<<(2*parent)+2<<" ,No parent available.";
	}
	else{
		tree[(2*parent)+2]=key;
	}
}
void printtree(){
	cout<<"\n";
	for(int i=0;i<10;i++){
		if(tree[i]!='\0'){
			cout<<tree[i];
		}
		else{
			cout<<"-";
		}
	}
}

int main(){
	root('A');
	setright('C',0);
	setleft('D',1);
	setright('E',1);
	setleft('F',2);
	printtree();
	return 0;
}
