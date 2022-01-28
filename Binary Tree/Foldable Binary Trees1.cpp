#include <bits/stdc++.h>
using namespace std;

/* You would want to remove below 3 lines if your compiler
supports bool, true and false */
#define bool int
#define true 1
#define false 0

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node {
public:
	int data;
	node* left;
	node* right;
};

/* A utility function that checks
if trees with roots as n1 and n2
are mirror of each other */
bool IsFoldableUtil(node* n1, node* n2);

/* Returns true if the given tree can be folded */
bool IsFoldable(node* root)
{
	if (root == NULL) {
		return true;
	}

	return IsFoldableUtil(root->left, root->right);
}

/* A utility function that checks
if trees with roots as n1 and n2
are mirror of each other */
bool IsFoldableUtil(node* n1, node* n2)
{
	/* If both left and right subtrees are NULL,
	then return true */
	if (n1 == NULL && n2 == NULL) {
		return true;
	}

	/* If one of the trees is NULL and other is not,
	then return false */
	if ((n1 != NULL && n2 == NULL)||(n1 == NULL && n2 != NULL) ){
		return false;
	}

	/* Otherwise check if left and right subtrees are
	mirrors of their counterparts */
	return IsFoldableUtil(n1->left, n2->right)
		&& IsFoldableUtil(n1->right, n2->left);
}

/*UTILITY FUNCTIONS */
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

/* Driver code */
int main(void)
{
	/* The constructed binary tree is
		1
		/ \
		2 3
		\ /
		4 5
	*/
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	
	if (IsFoldable(root) == true) {
		cout << "tree is foldable";
	}
	else {
		cout << "tree is not foldable";
	}

	return 0;
}

// This is code is contributed by rathbhupendra

