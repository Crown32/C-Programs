#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main (){
    float b, h, area;

    setlocale(LC_ALL, "portuguese");

    printf("Programa para calcular área do triângulo");
    printf("\n Infomre o valor da base do Triangulo: ");
    scanf("%f", & b);
    printf("\n Agora digite a altura do triângulo");
    scanf("%f", & h );
    area=(b*h)/2;
    printf("O valor da área do triãngulo é de: %10.2f", area);

    getch();
    return (0);

}