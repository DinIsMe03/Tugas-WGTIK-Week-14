#include <iostream>
#include "stack.h"

int main()
{
    Stack S;
    string kata,word;
    infotype x;
    int i = 1;

    createStack_1301213082(S);

    while (i <= 11){
        cout << "Masukkan Char: ";
        cin >> x;
        push_1301213082(S, x);
        i++;
    }
    cout << "Sebelum Pop: ";
    printInfo_1301213082(S);
    cout << endl;

    i = 1;
    while ( i <= 7) {
        pop_1301213082(S);
        i++;
    }
    cout << "Sesudah Pop: ";
    printInfo_1301213082(S);
    cout << endl;

    return 0;
}

