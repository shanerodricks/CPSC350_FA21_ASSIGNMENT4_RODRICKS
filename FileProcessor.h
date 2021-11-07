#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileProcessor{
    public:
        void processFile(string inputFileName, string outputFileName);
};

#endif