#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char sexo[2]; 
    float pes, alt, pesma, pesme, altma,altme;
    int i, masc, fem;
    masc=0;
    fem=0;
    pes=0;
    alt=0;
    pesma=0;
    pesme=9999999;
    altma=0;
    altme=99999999;

    for ( i = 1; i < 21; i++)
    {
        printf("\n Digite a altura do atleta em metros: ");
        scanf("%f", & alt);
        printf("\n Digite o peso do atleta em kg: ");
        scanf("%f", & pes);
        printf("\n Digite o sexo do atleta usando F ou M: ");
        scanf("%2c", & sexo);
        //Sexo
        if (sexo=="M" || sexo=="m")
        {
            masc++;
        }else if(sexo=="F" || sexo=="f"){
            fem++;
        }
        //Peso
        if (pes>pesma)
        {
            pesma=pes;
        }
        
        if (pes<pesme)
        {
            pesme=pes;
        }
        //Altura
        if (alt>altma)
        {
            altma=alt;
        }

        if (alt<altme)
        {
            altme=alt;
        }
        
        
        
    }
    printf("\n São %d atletas masculinos e %d femininos.", masc,fem);
    printf("\n O atleta mais pesado têm %10.2f Kg e o mais leve %10.2f Kg", pesma, pesme);
    printf("\n O maior atleta possui %10.f metros e o mais baixo %10.2f metros", altma,altme);
    
    return 0;
    getch();
}