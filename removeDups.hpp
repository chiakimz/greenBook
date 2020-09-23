#pragma once

struct Node
{
	Node* next = nullptr;
	int data;
	Node(int d, Node* n = nullptr)
	{
		data = d;
		next = n;
	}
	~Node() {}

};

class LinkedList
{
public:
	Node removeDuplicates(Node *head);
};
