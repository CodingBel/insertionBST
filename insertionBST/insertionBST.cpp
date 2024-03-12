// This program is about inserting a new node to a BST 

#include<iostream>

class BST {
public: 
	BST(); 
	BST(int); 
	BST* insertNode(BST*, int);
	void printBST(BST*); 

private: 
	int value{}; 
	BST* left{}; 
	BST* right{}; 
};

BST::BST() {
	this->value = 0; 
	this->left = nullptr; 
	this->right = nullptr; 
}

BST::BST(int value) {
	this->value = value; 
	this->left = nullptr; 
	this->right = nullptr; 
}

BST* BST::insertNode(BST* node, int value) {
	if (node == nullptr)
		return new BST(value);

	if (value < node->value)
		node->left = insertNode(node->left, value);

	if (value > node->value)
		node->right = insertNode(node->right, value);

	return node; 
}

void BST::printBST(BST* node) {
	if (node == nullptr)
		return; 

	printBST(node->left); 
	std::cout << node->value << " "; 
	printBST(node->right);
}

int main() {
	BST Tree{}; 
	BST* root{}; 
	
	root = root->insertNode(root, 4);
	Tree.insertNode(root, 6);
	Tree.insertNode(root, 12); 
	Tree.insertNode(root, 3);
	Tree.insertNode(root, 2);
	Tree.insertNode(root, 8);
	Tree.insertNode(root, 3);
	Tree.insertNode(root, 3);
	Tree.insertNode(root, 3);

	Tree.printBST(root);
	return 0; 
}