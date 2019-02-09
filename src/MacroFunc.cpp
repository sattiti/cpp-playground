#include <iostream>

// <> 設定フォルダ
// "" 現在のフォルダ
#include "MacroFunc.h"

using namespace std;

int main(int argc, char *argv[]){
    cout << "function       -> f1(10, 20)   : " << f1(10, 20) << endl;
    cout << "Macro function -> FUNC(10, 20) : " << FUNC(10, 20) << endl;
    return 0;
}

int f1(int x, int y) {
    return x * y;
}
