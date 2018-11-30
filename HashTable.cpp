#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "HashTable.h"

HashTable::HashTable()
{
	for(int i=0; i<sizeof(this->table)/sizeof(this->table[0]); i++)
	{
		this->table[i] = NULL;
	}
}

int HashTable::hashingFunction(string words)
{
	
} 

HashTable::~HashTable()
{
	for(int i=0; i<sizeof(this->table)/sizeof(this->table[0]); i++)
	{
		if(this->table[i] != NULL)
		{
			ValueNode* curr = this->table[i];
			ValueNode* trail = NULL;
			while(curr != NULL)
			{
				trail = curr;
				delete curr;
				curr = trail->next;
			}
		}
	}
}