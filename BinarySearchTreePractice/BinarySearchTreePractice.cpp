// BinarySearchTreePractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BinarySearchTree.cpp"

int main()
{
	BinaryTree bt;

	bt.push(40);
	bt.push(25);
	bt.push(78);
	bt.push(10);
	bt.push(32);

	bt.printPreOrder();
	cout << endl;
	bt.printInOrder();
	cout << endl;
	bt.printPostOrder();
	cout << endl;

    return 0;
}

