//Desenvolva um algoritmo que receba três números. O algoritmo deve 
//imprimir "Condição satisfeita", na tela, caso o primeiro dado 
//inserido seja maior do que os outros dois (o primeiro não pode 
//ser igual a nenhum). Caso contrário, deve ser impressa a mensagem: "Erro"
#include <stdio.h>
int main(){
    float n1,n2,n3;
    printf("insira o primeiro numero:\n");
    scanf("%f", &n1);

    printf("insira o segundo numero:\n");
    scanf("%f", &n2);

    printf("insira o terceiro numero:\n");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("condição satisfeita");
    }
    else
    {
        printf("erro");
    }
    
    
}