#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    float a,b,c,x1,x2,delta;

    printf("Programa que faz o cáculo de bhaskara");
    printf("\n Insira o valor de a, 'aX^2'");
    scanf("%f", & a);
    printf("\n Digite o valor de b, 'bX'");
    scanf("%f", & b);
    printf("\n Digite o valor de c,'c'");
    scanf("%f", & c);

    if (a!=0){
        delta=(b*b)+4*a*c;
    }else if(delta>0){
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        printf("\n O valor de delta foi %10.2f, o de x1 %10.2f e de x2 %10.2f", delta, x1,x2);
    }else{
        printf("\n Essa equação não existe");
    }
    
    getch();
    return 0;
}