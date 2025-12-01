//exercicio de variaveis


#include <stdio.h>
int main(){
    char nome[] = "athus";
    char sexo = 'M';
    int idade = 19;
    float salario;
    salario = 2277.33;

    printf("seus dados sao:\n");
    printf("nome: %s\n",nome);
    printf("idade:%d\n",idade);
    printf("salario:%.2f\n",salario);
    printf("sexo: %c\n",sexo);

    return 0;
}
