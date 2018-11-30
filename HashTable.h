#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

class HashTable {
    private:
        struct ValueNode
        {
            String fileName;
            String str;
            ValueNode* next;
        };
        const int size = 1000000;
        ValueNode* table[size];

    public:
    	HashTable();
    	int hashingFunction(string words);
    	void put(string words, string fileName);
    	~HashTable();    // Rule of 3 states that we need a copy constructor and copy assignment operator
};