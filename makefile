final: plagiarismCatcher.o HashTable.o
	g++ -o plagiarismCatcher plagiarismCatcher.o HashTable.o
driver: plagiarismCatcher.cpp HashTable.h
	g++ -c plagiarismCatcher.cpp
HashTable.o: HashTable.cpp HashTable.h
	g++ -c HashTable.cpp
