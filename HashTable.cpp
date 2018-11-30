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

int HashTable::hashingFunction(vector<string> x)
{
//	vector<string> x;
//	string currword = "";
//	for(int i=0; i<words.size(); i++)
//	{
//		if(words[i]!=' ')
//		{
//			currword += words[i];
//		}
//		else
//		{
//			x.push_back(currword);
//			currword = "";
//		}
//	}
	int multiplier = 1;
	int sum = 0;
	for(int i=0; i<x.size(); i++)
	{
		int sub_sum = 0;
		int end=0;
		x[i].size() > 10 ? end=10 :end = x[i].size();

		for(int j=0; j<end; j++)
		{
			sub_sum += x[i][j];
		}
		sum += sub_sum*multiplier;
		multiplier *= 3;


	}
	return sum;
}

void HashTable::put(string fileName, int fileNumber, vector<string> words)
{
	int idx = hashingFunction(words);
	ValueNode* trail = NULL;
	ValueNode* curr = this->table[idx];
	if(curr==NULL)
	{
		this->table[idx] = new ValueNode;
		this->table[idx]->fileName = fileName;
		this->table[idx]->next = NULL;
		this->table[idx]->fileNumber = fileNumber;
		return;
	}
	while(curr != NULL)
	{
		trail = curr;
		curr = curr->next;
	}
	trail->next = new ValueNode;
	trail->next->next = NULL;
	trail->next->fileName = fileName;
	trail->next->fileNumber = fileNumber;
}

void HashTable::printContents()
{
    for(int i=0; i<sizeof(table)/ sizeof(table[0]); i++)
    {
        if(table[i] != NULL)
        {
            cout << i << endl;
        }
    }
}

int** HashTable::getCollisions(int size)
{
	int** collisions;
	collisions = new int*[size];
	for(int i=0; i<size; i++)
	{
		collisions[i] = new int[size];
	}
	for(int i=0; i<size; i++)
		for(int j=0; j<size; j++)
		{
			collisions[i][j] = 0;
		}
	for(int i=0; i<sizeof(table)/ sizeof(table[0]); i++)
	{
		ValueNode* curr = table[i];
		if(curr==NULL)
		{
			continue;
		}
		if(curr->next == NULL)
		{
			continue;
		}
		vector<int> all;
		while(curr != NULL)
		{
			all.push_back(curr->fileNumber);
			curr = curr->next;
		}
		for(int j=0; j<all.size()-1; j++)
		{
			for(int k=j+1; k<all.size(); k++)
			{
				collisions[all[j]][all[k]] += 1;
			}
		}
	}
	return collisions;
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