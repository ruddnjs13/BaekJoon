#include <iostream>	
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* MakeNode(int n) {
	Node* node = new Node;
	node->data = n;
	node->left = NULL;
	node->right = NULL;

	return node;
}

Node* root = NULL;

void postOrder(Node* nd) {
	if (nd->left != NULL)
		postOrder(nd->left);
	if (nd->right != NULL)
		postOrder(nd->right);
	cout << nd->data << '\n';

}

void Insert(Node* parent, Node* node) {
	if (root == NULL) root = node;
	else if (parent->data < node->data) {
		if (parent->right == NULL)
			parent->right = node;
		else
			Insert(parent->right, node);
	}
	else {
		if (parent->left == NULL)
			parent->left = node;
		else
			Insert(parent->left, node);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int value;

	while (cin >> value) {
		Insert(root, MakeNode(value));
	}

	postOrder(root);

	return 0;
}