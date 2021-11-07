#include "FileProcessor.h"
#include "dnaComplement.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void FileProcessor::processFile(string inputFileName, string outputFileName){
    string line;
    ifstream inputFile(inputFileName);
    dnaComplement dna;
    string complement;
    string reverseComplement;

    if(!inputFile.is_open()){
        cout << "Could not open the file." << inputFile << endl;
        exit(1);
    }
    getline(inputFile, line);
    complement = dna.makeComp(line);
    reverseComplement = dna.reverseComp(line);
    inputFile.close();

    ofstream outputFile(outputFileName);
    if(!outputFile.is_open()){
        cout << "Could not open the file." << outputFile << endl;
        exit(1);
    }
    outputFile << "Complement: " << complement << endl;
    outputFile << "Reverse Complement: " << reverseComplement << endl;

}