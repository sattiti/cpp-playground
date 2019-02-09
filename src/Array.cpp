#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
    int len = 3;
    int nums[len];
    char strArray[] = "ハローず";

    for(int i = 0; i < len; i++) {
        nums[i] = i + len;
        cout << nums[i] << endl;
    }

    cout << "strArray の内容 : " << strArray << endl;
    cout << "strArray の長さ : " << strlen(strArray) << endl;

    return 0;
}
