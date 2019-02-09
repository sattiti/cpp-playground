#include <stdio.h>

using namespace std;

void displatAddresses(unsigned char *p){
    int i;
    for(i = 0; i < 10; i++){
        printf("&p[%d] : %d\n", i, &p[i]);
    }
}

int main(int argc, char *argv[]){
    unsigned char array[10];

    int i;
    for(i = 0; i < 10; i++) {
        printf("&array[%d] : %d\n", i, &array[i]);
    }

    printf("\n");

    displatAddresses(array);
    return 0;
}
