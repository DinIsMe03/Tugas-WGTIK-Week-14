#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

#define Top(S) (S).Top
#define info(S) (S).info

using namespace std;


typedef int infotype;

struct Stack{
    int Top;
    infotype info[15];
};

void createStack_1301213082(Stack &S);
bool isEmpty_1301213082(Stack S);
bool isFull_1301213082(Stack S);

void push_1301213082(Stack &S, infotype x);
int pop_1301213082(Stack &S);
void printInfo_1301213082(Stack S);

#endif // STACK_H_INCLUDED
