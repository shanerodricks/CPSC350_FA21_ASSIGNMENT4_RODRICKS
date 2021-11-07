#ifndef DNACOMPLEMENT_H
#define DNACOMPLEMENT_H
#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;

class dnaComplement{
    private:
        char convertChar(char character);
    public:
        string makeComp(string input);
        string reverseComp(string input);
};



#endif