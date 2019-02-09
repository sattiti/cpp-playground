#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int aa = 10;
    int bb = 20;
    
    // n ポインタを宣言
    int *n;
    
    // *n 初期化する。
    // aa のアドレスを保持する
    n = &aa;

    cout << "// aa の値を *n に代入" << endl;

    cout << "----------------" << endl;
    // aa adress, value
    cout << "aa(&aa) のアドレス          : " << &aa << endl;
    cout << "aa(aa) の値                 : " << aa  << endl << endl;
    
    // bb adress, value
    cout << "bb(&bb) のアドレス          : " << &bb << endl;
    cout << "bb(bb) の値                 : " << bb  << endl << endl;
   
    // n
    cout << "n(&n) ポインタのアドレス    : " << &n << endl;
    cout << "n(n) ポインタの値のアドレス : " << n  << endl;
    cout << "n(*n) ポインタの値          : " << *n << endl;
    cout << "----------------" << endl << endl;


    cout << "----------------" << endl;
    cout << "// bb を *n に代入し、" << endl;
    cout << "// *n の値 0 にする。"  << endl;
    cout << "// bb の値も 0 になる"  << endl << endl;

    n  = &bb;
    *n = 0;

    cout << "n  = &bb;" << endl;
    cout << "*n = 0;"   << endl << endl;

    cout << "aa(&aa) のアドレス          : " << &aa << endl;
    cout << "aa(aa) の値                 : " << aa  << endl << endl;

    cout << "bb(&bb) のアドレス          : " << &bb << endl;
    cout << "bb(bb) の値                 : " << bb  << endl << endl;

    cout << "n(&n) ポインタのアドレス    : " << &n << endl;
    cout << "n(n) ポインタの値のアドレス : " << n  << endl;
    cout << "n(*n) ポインタの値          : " << *n << endl;
    cout << "----------------" << endl << endl;

    return 0;
}
