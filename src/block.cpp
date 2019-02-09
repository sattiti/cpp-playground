#include <iostream>
//#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]){
    // block という名前をつけて、宣言する
    int(^block)(int) = ^(int y){return y + y;};

    printf("%d", block(3));


    // 名前なし
    printf("%d", ^(int){return y + y;}(3););

    return 0;
}
