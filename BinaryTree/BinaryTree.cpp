#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	Node(string i, Node* l, Node* r) {
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree() {
		ROOT = nullptr;
	}

	void insert(string element) {
		Node* newNode = new Node(element, nullptr, nullptr);
		newNode->info = element;
		newNode->leftchild = nullptr;
		newNode->rightchild = nullptr;

		Node* parent = nullptr;
		Node* currentNode = nullptr;

		if (parent == nullptr) {  
			ROOT = newNode;  
			return;  
		}
		if (element < parent->info) {  
			parent->leftchild = newNode;  
		}
		else if (element > parent->info) {  
			parent->rightchild = newNode;  
		}
	}
	void search(string element, Node*& parent, Node*& currentNode) {
		currentNode = ROOT;
		parent = NULL;

		while ((currentNode != NULL) && (currentNode->info != element)) {  
			parent = currentNode;  
			if (element < currentNode->info) {
				currentNode = currentNode->leftchild;
			}
			else {  // If the value in the data field of the new node is greater than the value in the data field of the currentNode
				currentNode = currentNode->rightchild;  // Make the currentNode point to the right child of the currentNode
			}
	}
};