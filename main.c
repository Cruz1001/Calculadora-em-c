#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float valor, operando, resultado;
    int aux, aux2 = 0;

    printf("Digite um número:");
    scanf("%f", &valor);

    printf("Qual operação você deseja fazer?\n");
    printf("[1] Soma\n");
    printf("[2] Subtração\n");
    printf("[3] Divisão\n");
    printf("[4] Multiplicação\n");
    scanf("%d", &aux);

    if (aux2 == 0)
    {
        printf("Digite o segundo valor");
        scanf("%f", &operando);
        aux2 = 1;
    }
    switch (aux)
    {
    case 1:
        resultado = valor + operando;
        break;
    case 2:
        resultado = valor - operando;
        break;
    case 3:
        resultado = valor / operando;
        break;
    case 4:
        resultado = valor * operando;
        break;
    default:
        printf("Insira uma operação válida");
        break;
    }
    printf("O Resultado da conta é %2.f", resultado);
}