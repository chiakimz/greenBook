#include "removeDups.hpp"
#include <unordered_map>


Node LinkedList::removeDuplicates(Node *head)
{
	Node* n =head;
	std::unordered_map<int, int> seen_data = { {n->next->data, 1}, };

	while (n->next != nullptr)
	{
		auto a = seen_data.find(n->next->data);
		if (seen_data.find(n->next->data) == seen_data.end())
		{
			int a = n->next->data;
			

			seen_data.insert(std::make_pair(n->next->data, 1));
		}
		else
		{
			if (n->next->next != nullptr)
				n->next = n->next->next;
			else
				n->next = nullptr;
		}
	}
	return *head;
}