#include<stdio.h>
int main () {
   float metros,decimetros,centimetros,milimetros;
    //leitura de dados 
    printf("quantos metros voce quer tranformar:");
    scanf("%f", &metros);
    decimetros=metros*10;
    centimetros=metros*100;
    milimetros=metros*1000;
 // impressao de dados
    printf("valores equivalentes:\n");
    printf("decimetros: %.2f dm\n",decimetros);
    printf("centimetros: %.2f cm\n", centimetros );
    printf("milimetros: %.2f mm\n", milimetros);
    return 0;
}