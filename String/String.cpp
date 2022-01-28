#include<bits/stdc++.h>
using namespace std;
/*
FUNCTION to print digits only in a string:-
void isnumb(string s){
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
		cout<<s[i]<<" ";
	}
}
}
*/

//FUNCTION to check if the string is a proper string or integer.
bool fun1(string str){                       /* bool function me agar if condition hai or usme sabse pehle jo return ho jaye to bool function wahi dega. */
	for(int i=0;i<str.length();i++){           /* matlb agar if me false return ho rha to bool function false dega or agar if condition me sabse pehle true return ho rha to bool function true return karegabb  */
		if(isdigit(str[i])==false)
			return false;
		
	return true;
	}
}

int main()
{
	string x="3v";
	if(fun1(x))
	cout<<"integer";
	else
	cout<<"string";
	return 0;
}
