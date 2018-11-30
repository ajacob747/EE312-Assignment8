#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "HashTable.h"
using namespace std;

HashTable::HashTable()
{
	for(int i=0; i<sizeof(this->table)/sizeof(this->table[0]); i++)
	{
		this->table[i] = NULL;
	}
}

int HashTable::hashingFunction(string words)
{
	vector<string> x = split(words, ' ');
	int multiplier = 1;
	int sum = 0;
	for(int i=0; i<x.size(); i++)
	{
		int sub_sum = 0;
		for(int j=0; j<x[i].size(); j++)
		{
			sub_sum += x[i][j];
		}
		sum += sub_sum*multiplier;
		multiplier *= 3;
	}
	return sum;
}

void HashTable::put(string fileName, int idx)
{
	ValueNode* trail = NULL;
	ValueNode* curr = this->table[idx];
	if(curr==NULL)
	{
		this->table[idx] = new ValueNode;
		this->table[idx]->fileName = fileName;
		this->table[idx]->next = NULL;
	}
	while(curr != NULL)
	{
		trail = curr;
		curr = curr->next;
	}
	trail->next = new ValueNode;
	trail->next->next = NULL;
	trail->next->fileName = fileName;
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