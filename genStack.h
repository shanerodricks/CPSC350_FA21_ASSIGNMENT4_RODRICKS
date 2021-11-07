#ifndef GENSTACK_H
#define GENSTACK_H
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

template <class T>
class ListNode{
    public:
        ListNode(){}
        T data;
        ListNode<T> *next;
};

template <class T>
class GenStack{
    public:
        GenStack();
        void push(T data);
        T pop();
        T peek();
        bool isEmpty();
    private:
        ListNode<T> *top;
};

#include "genStack.cpp"
#endif