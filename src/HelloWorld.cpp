#include <iostream>
using namespace std;

#define kMessage "const HELLO"

void printStar(){
    char start = '*';
    int len    = 10;

    for(int i = 0; i < len; i++){
        cout << start << endl;
    }
}


int main(int argc, char *argv[]){
    cout << "hello world." << endl;
    cout << kMessage << endl;
    printStar();
    return 0;
}
