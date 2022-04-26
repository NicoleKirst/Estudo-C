#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

// A função scanf realiza a leitura até encontrar um espaço, depois encerra a leitura e coloca o caracter terminador 

int main(void) {
    char nome[61];

    printf("Digite seu nome: ");
    scanf("%s",nome);

    printf("O nome armazenado foi: %s\n", nome);

    getch();
    system("PAUSE");
    return 0;
}


