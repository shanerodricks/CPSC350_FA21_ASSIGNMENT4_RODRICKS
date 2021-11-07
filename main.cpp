#include "genStack.h"
#include "dnaComplement.h"
#include "RPNcalc.h"
#include "FileProcessor.h"
#include <iostream>
using namespace std;

int main(int argc, char ** argv){
    dnaComplement dn;
    RPNCalc rpn;
    FileProcessor fp;
    string userInput;
    double result;

    cout << "Which mode would you like to choose: RPN or DNA" << endl;
    cin >> userInput;
    
    if(userInput == "RPN"){
        rpn.inputOps();
        result = rpn.getResult();
        cout << result << endl;
    }
    else if(userInput == "DNA"){
        fp.processFile("input.txt", "output.txt");
    }
    else{
        cout << "Not valid input" << endl;
    }

}