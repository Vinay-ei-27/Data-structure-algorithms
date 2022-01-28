#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val)
	{
		data = val;
		left = right = NULL;
	}
};

Node* constructtree(string s, int* start)
{

	if (s.size() == 0 || *start >= s.size())
		return NULL;

	int num = 0;
	while (*start < s.size() && s[*start] != '('
		&& s[*start] != ')') {
		int num_here = (int)(s[*start] - '0');
		num = num * 10 + num_here;
		*start = *start + 1;
	}

	struct Node* root = new Node(num);

	if (*start >= s.size())
		return root;

	if (*start < s.size() && s[*start] == '(') {
		*start = *start + 1;
		root->left = constructtree(s, start);
	}
	if (*start < s.size() && s[*start] == ')'){
		*start = *start + 1;
		return root;
	}

	if (*start < s.size() && s[*start] == '(') {
		*start = *start + 1;
		root->right = constructtree(s, start);
	}
	if (*start < s.size() && s[*start] == ')')
		*start = *start + 1;
	return root;
}
void preorder(Node* root)
{
	if (root == NULL)
		return;
	
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
int main()
{
	string s = "4(2(3)(1))(6(5))";
	int start = 0;
	Node* root = constructtree(s, &start);
	preorder(root);
	return 0;
}

