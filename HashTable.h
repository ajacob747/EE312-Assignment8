#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

class HashTable {
    private:
        struct ValueNode
        {
//            string fileName;
            int fileNumber;
            ValueNode* next;
        };
        static const int size = 1500000;
        ValueNode* table[size];

    public:
    	HashTable();
    	int hashingFunction(vector<string> x);
    	void put(string fileName, int fileNumber, vector<string> words);
    	int** getCollisions(int size);
    	~HashTable();
};