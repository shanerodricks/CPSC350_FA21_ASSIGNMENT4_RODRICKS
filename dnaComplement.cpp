#include "dnaComplement.h"
#include "genStack.h"
#include <fstream>
using namespace std;

char dnaComplement::convertChar(char character){
    if(character == 'A'){
        character = 'T';
    }
    else if(character == 'T'){
        character = 'A';
    }
    else if(character == 'C'){
        character = 'G';
    }
    else if(character == 'G'){
        character = 'C';
    }
    return character;
}

string dnaComplement::makeComp(string input){
    for(int i = 0; i < input.length(); ++i){
        input[i] = convertChar(input[i]);
    }
    return input;
}

string dnaComplement::reverseComp(string input){
    char character;
    string reverse;
    
    GenStack<char> *gs = new GenStack<char>();
    for(int i = 0; i < input.length(); ++i){
        gs->push(input[i]);
    }
    for(int i = 0; i < input.length(); ++i){
        character = gs->pop();
        character = convertChar(character);
        reverse = reverse + character;
    }
    return reverse;
}