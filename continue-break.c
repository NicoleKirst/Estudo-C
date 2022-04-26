#include <stdio.h>
#include <stdlib.h>

int ateCinco() {
    int i;
    for(i=1; i < 10; i++) {
        if(i == 6) {
            break;
        } else {
            printf("Numero %d\n", i);
        }
    }
    printf("Final do programa numero ate 5!\n\n");
}

int main() {
    int i;
    for(i=1; i < 10; i++) {
        if(i % 2 == 0) {
            continue;
        } else {
            printf("Numero %d\n", i);
        }
        printf("Numero impar!\n");
    }
    printf("====================================\n\n");
    ateCinco();
    printf("Final do programa!\n\n");
    printf("====================================");
    
    return 0;
}







