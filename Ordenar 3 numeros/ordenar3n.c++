#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
    int n1,n2,n3,aux;

    setlocale(LC_ALL, "portuguese");

    printf("Programa que ordena 3 números recebidos");
    printf("\nDigite 3 números aleatórios");
    scanf("%d", & n1);
    scanf("%d", & n2);
    scanf("%d", & n3);

    if (n1<n2 && n1<n3 && n2<n3)
    {
        printf("%d, %d, %d",n1,n2,n3);
    }else if(n1<n2 && n1<n3){
        printf("%d, %d, %d",n1,n3,n2);        
    }else if(n1>n2 && n1>n3 && n3>n2){  
        printf("%d, %d, %d",n2,n3,n1);         
    }else if(n1>n2 && n1>n3 && n3<n2){
        printf("%d, %d, %d",n3,n2,n1); 
    }else if(n1>n3 && n1<n2 && n2>n3){
        printf("%d, %d, %d",n3,n1,n2); 
    }
    
    getch();
    return 0;
}