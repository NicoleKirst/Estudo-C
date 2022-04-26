#include<stdio.h>
#include<conio.h>

// Esta função armazena tudo que foi digitado, inclusive os espaços, até que a tecla ENTER seja pressionada.

int main(void) {
    char nome[61];

    printf("Digite seu nome: ");
    gets(nome);

    printf("O nome armazenado foi: %s", nome);

    getch();
    return 0;
}