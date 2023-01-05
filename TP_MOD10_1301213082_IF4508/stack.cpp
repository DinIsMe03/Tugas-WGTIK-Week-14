#include "stack.h"

void createStack_1301213082(Stack &S){
    Top(S) = 0;
}

bool isEmpty_1301213082(Stack S){
    if (Top(S) == 0){
        return true;
    }
    else {
        return false;
    }
}

bool isFull_1301213082(Stack S){
    if (Top(S) == 15) {
        return true;
    }
    else {
        return false;
    }
}

void push_1301213082(Stack &S, infotype x){
    if (isFull_1301213082(S)) {
        cout << "Stack Penuh!" << endl;
    }
    else {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

int pop_1301213082(Stack &S){
    infotype x;
    x = info(S)[Top(S)];
    Top(S)--;
    return x;
}

void printInfo_1301213082(Stack S){
    int i = Top(S);
    while (i != 0){
        cout << info(S)[i] << ' ';
        i--;
    }
}
