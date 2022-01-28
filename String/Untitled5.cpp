// C++ program to find whether the string has all same characters or not.
#include<bits/stdc++.h>
using namespace std;

bool isequal(string s){
	for(int i=1;i<s.length();i++){
		if(s[i]==s[0]){       /* another condition can be    if(s[i]!=s[0])    */
		return true;                                      /*  return false    */
	}                                                    /*   }              */
	return false;                                       /*   return true    */
	}
}

int main()
{
	string str="vinay";
	if(isequal(str))
	cout<<"Yes";
	else
	cout<<"No.";
	return 0;
}
