#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
    float peso, altura,imc;

    setlocale(LC_ALL, "portuguese");

    printf("Programa que calcula o IMC");
    printf("\n Digite seu peso em Kg: ");
    scanf("%f", & peso);
    printf("\n Digite sua altura em metros: ");
    scanf("%f", & altura);
    imc=peso/(altura*altura);
    printf("\n O seu IMC é de: %10.2f", imc);
    
    getch();
    return (0);

}