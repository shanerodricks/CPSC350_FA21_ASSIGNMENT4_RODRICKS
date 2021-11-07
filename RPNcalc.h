#ifndef RPNCALC_H
#define RPNCALC_H
#include "genStack.h"
#include <string>
using namespace std;

class RPNCalc{
    private:
        GenStack<double> gs;
        string ops;
    public:
        void inputOps();
        double getResult();
};

#endif