#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "RPNcalc.h"
using namespace std;


void RPNCalc::inputOps(){
    //need to clear input buffer because getline() is being used
    //input buffer is the temporary storage in memory and needs to be cleared because of getline()
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Enter your operators and operands: " << endl;
    getline(cin, ops);
}


double RPNCalc::getResult(){
    string op;
    //stringsteam(): ops string needs to be split into separate tokens to be saved on the stack
    stringstream ss(ops);
    while(ss >> op){
        if(op == "+"){
            double operand1 = gs.peek();
            gs.pop();
            double operand2 = gs.peek();
            gs.pop();
            gs.push(operand1 + operand2);
        }
        else if(op == "-"){
            double operand1 = gs.peek();
            gs.pop();
            double operand2 = gs.peek();
            gs.pop();
            gs.push(operand2 - operand1);
        }
        else if(op == "*"){
            double operand1 = gs.peek();
            gs.pop();
            double operand2 = gs.peek();
            gs.pop();
            gs.push(operand1 * operand2);
        }
        else if(op == "/"){
            double operand1 = gs.peek();
            gs.pop();
            double operand2 = gs.peek();
            gs.pop();
            gs.push(operand2 / operand1);
        }
        else{
            //atof(): alpha numeric to floating point value
            //since all the ops are strings, it needs to be converted to double because the stack can only store doubles
            gs.push(atof(op.c_str()));
        }
    }
    double result = gs.peek();
    gs.pop();
    return result;
}