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

	bt.search(25);
	cout << "Is 25 in the tree? " << endl;
	cout << "Is 13 in the tree? " << bt.search(13) << endl;

    return 0;
}

