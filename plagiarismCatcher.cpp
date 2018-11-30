//
// Created by Andrew and Sudeep on 11/29/2018.
//
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include "HashTable.cpp"

using namespace std;
int getdir(string dir, vector<string> &files);

int main(int argc, char* argv[]){
    string ww;
    ww += "??A??.0";
    string dir = string(argv[1]);
    vector<string> files = vector<string>();
    int n = atoi(argv[2]);
    string word;
    getdir(dir,files);
    ifstream file;
    HashTable table;
    int** collisions;
    for (unsigned int i = 2;i < files.size();i++) {
        cout << i << " " << files[i] << endl;
        string path = dir+"/"+files[i];
        const char* c = path.c_str();
        file.open(c);
        if(file){
            cout << "Successfully opened " << files[i] << endl;
            vector<string> allWords;
            while(file >> word){
                allWords.push_back(word);
            }
            cout << allWords.size() << endl;
            for(int k = 0; k<allWords.size()-n-1; k++){
                vector<string> group;
                for(int j = 0; j<n; j++)   {
                    group.push_back(allWords[k + j]);
                }
                table.put(files[i], i-2, group);
            }
        }
        else {
            cout << "Failed to open " << files[i] << endl;
        }
        file.close();
    }

    table.printContents();

    collisions = table.getCollisions(files.size()-2);

    for(int i=0; i<files.size()-2; i++) {
        for (int j = 0; j < files.size() - 2; j++) {
            cout << " \t" << collisions[i][j];
        }
        cout << endl;
    }

    return 0;
}

 int getdir (string dir, vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);
    return 0;
}
