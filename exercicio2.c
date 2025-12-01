#include<stdio.h>
int main (){
    int idade;
    float salario;
    char sexo;
    //leitura de dados
    printf("quantos anos voce tem?");
    scanf("%d", &idade);
    printf("quaL o valor do seu salario?");
    scanf("%f", &salario);
    printf("qual o seu genero? M|F");
    scanf(" %c", &sexo);
    //imprimir de dados
    printf("voce tem %d anos,ganha R$%f e seu genero e %c .", idade, salario, sexo);
    return 0;

}