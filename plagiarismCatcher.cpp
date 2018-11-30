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

using namespace std;
int getdir(string dir, vector<string> &files);

int main(int argc, char* argv[]){
    string dir = string("sm_doc_set");
    vector<string> files = vector<string>();
    int n = atoi(argv[1]);
    string word;
    getdir(dir,files);
    stringstream words;
    ifstream file;
    for (unsigned int i = 2;i < files.size();i++) {
        cout << i << files[i] << endl;
        file.open(dir+"\\"+files[i]);
        if(file){
            vector<string> allWords;
            words<<file.rdbuf();
            while(!words.eof()){
                words >> word;
                allWords.push_back(word);
            }
            for(int i = 0; i<allWords.size()-n-1; i++){
                string wordGroup = "";
                for(int j = 0; j<n; j++){
                    wordGroup += allWords[i+j];
                }
                
            }
        }
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
