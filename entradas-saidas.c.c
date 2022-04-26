#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a;
    float b;
    double c;
    long d;
    char e;

    printf("Digite um int: ");
    scanf("%d", &a);
    printf("Digite um float: ");
    scanf("%f", &b);
    printf("Digite um double: ");
    scanf("%lf", &c);
    printf("Digite um long: ");
    scanf("%ld", &d);
    getchar();
    printf("Digite um char: ");
    scanf("%c", &e);
    
    printf("===================\n");
    printf("Interiro: %d\n",a);
    printf("===================\n");
    printf("Float: %f\n",b);
    printf("===================\n");
    printf("Double: %lf\n", c);
    printf("===================\n");
    printf("Long: %ld\n", d);
    printf("===================\n");
    printf("Caracter: %c\n",e);
    printf("===================\n");
    
    return 0;
}
