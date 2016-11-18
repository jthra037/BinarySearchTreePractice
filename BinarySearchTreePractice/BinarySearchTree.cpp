#include "stdafx.h"
#include <iostream>

using namespace std;

class Node 
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int num)
	{
		data = num;
		left = right = NULL;
	}
};

class BinaryTree 
{
public:
	Node* root;

	BinaryTree()
	{
		root = NULL;
	}

	void push(int val)
	{
		Node* newNode = new Node(val);

		if (root == NULL)
		{
			root = newNode;
			return;
		}
		else
		{
			Node* parent = root;
			Node* c = root;

			while (c != NULL)
			{
				parent = c;
				if (val < c->data)
					c = c->left;
				else
					c = c->right;
			}

			if (val < parent->data)
				parent->left = newNode;
			else
				parent->right = newNode;
		}
	}

	void printInOrder()
	{
		cout << "In Order: " << endl;
		cout << "-";
		inOrder(root);
	}

	void inOrder(Node* c)
	{
		if (c != NULL)
		{
			inOrder(c->left);
			cout << c->data << "-";
			inOrder(c->right);
		}
	}

	void printPreOrder()
	{
		cout << "Pre Order: " << endl;
		cout << "-";
		preOrder(root);
	}

	void preOrder(Node* c)
	{
		if (c != NULL)
		{
			cout << c->data << "-";
			preOrder(c->left);
			preOrder(c->right);
		}
	}

	void printPostOrder()
	{
		cout << "Post Order: " << endl;
		cout << "-";
		postOrder(root);
	}

	void postOrder(Node* c)
	{
		if (c != NULL)
		{
			postOrder(c->left);
			postOrder(c->right);
			cout << c->data << "-";
		}
	}

	bool search(int val)
	{
		Node* c = root;
		while (c != NULL)
		{
			cout << c->data << endl;

			if (val == c->data)
				return true;

			if (val < c->data)
				c = c->left;
			else
				c = c->right;
		}

		return false;
	}
};