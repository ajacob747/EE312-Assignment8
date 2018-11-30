#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

class HashTable {
    private:
        struct ValueNode
        {
            string fileName;
            int fileNumber;
            ValueNode* next;
        };
        static const int size = 1500000;
        ValueNode* table[size];

    public:
    	HashTable();
    	int hashingFunction(string words);
    	void put(string fileName, int fileNumber, string words);
    	void printContents();
    	int** getCollisions(int size);
    	~HashTable();    // Rule of 3 states that we need a copy constructor and copy assignment operator
};