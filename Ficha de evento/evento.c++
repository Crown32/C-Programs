#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
    char sexo[2];
    int age, fem, masc, men18, fem20, i, y;
    age=0;
    fem=0;
    masc=0;
    men18=0;
    fem20=0;
    y=0;

    printf("Quantas vezes deseja que o programa rode?");
    scanf("%d", & y);

    for ( i = 1; i <= y; i++)
    {
        printf("\n Qual o sexo do convidado: ");
        scanf("%2c", & sexo);
        printf("\n Qual a idade do convidado: ");
        scanf("%d", & age);

        if (sexo=="M" || sexo=="m")
        {
            masc++;
        } else if (sexo=="F" || sexo=="f")
        {
            fem++;
            if (age<20)
            {
                fem20++;
            }
        }
        
        if (age<18)
        {
           men18++; 
        }
        
    }
    
    printf("\n Existem %d pessoas do sexo masculino e %d do sexo feminino.", masc , fem);
    printf("\n %d são menores de idade e %d mulheres são menores de 20 anos.", men18, fem20);

    return 0;
    getch();

}