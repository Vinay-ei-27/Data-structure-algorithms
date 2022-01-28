#include<bits/stdc++.h>
using namespace std;

int main()
{
	char A[] = "decimal";
	char B[] = "medical";
	int H[26] = {0};
	int i;
	for(i = 0; A[i]  != '\0'; i++){
		H[A[i] - 'a']++;
	}
	for(i = 0; B[i] != '\0'; i++){
		H[A[i] - 'a']--;
		if(H[A[i] - 'a'] < 0){
			cout<<"It is not Anagram.";
			break;
		}
	}
	if(B[i] == '\0'){
		cout<<"It is Anagram.";
	}
	return 0;
}
