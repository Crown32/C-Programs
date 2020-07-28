#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i,id;
    float hora,sal_h,sal_b,sal_l;
    hora=0;
    id=0;
    sal_h=0;
    sal_l=0;
    sal_b=0;
    for (i=1;i<=10;i++){
        printf("\n Digite a matrícula do funcionário:");
        scanf("%d", & id);
        printf("\n Digite o número de horas trabalhadas desse funcionário:");
        scanf("%f", & hora);
        printf("\n Digite o valor da remuneração por hora");
        scanf("%f", & sal_h);

        sal_b=sal_h*hora;
        sal_l=sal_b-(sal_b*0.11);

        printf("\n O valor do salário sem inss descontado %10.2f e o salário final a ser recebido %10.2f.", sal_b, sal_l );
    }
    return 0;
    getch();

}