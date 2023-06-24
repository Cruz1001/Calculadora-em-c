#include <stdio.h>
#include <locale.h>

void calcular(float *resultado) {
    int aux;
    float operando;

    printf("Qual operação você deseja fazer?\n");
    printf("[1] Soma\n");
    printf("[2] Subtração\n");
    printf("[3] Divisão\n");
    printf("[4] Multiplicação\n");
    scanf("%d", &aux);

    printf("Digite o operando:");
    scanf("%f", &operando);

    switch (aux) {
        case 1:
            *resultado = *resultado + operando;
            break;
        case 2:
            *resultado = *resultado - operando;
            break;
        case 3:
            *resultado = *resultado / operando;
            break;
        case 4:
            *resultado = *resultado * operando;
            break;
        default:
            printf("Insira uma operação válida\n");
            break;
    }

    printf("O Resultado da conta é %.2f\n", *resultado);

    inicio(resultado);
}

void inicio(float *resultado) {
    int aux;

    printf("Você deseja calcular algo a mais usando o resultado?\n");
    printf("[1] Sim\n");
    printf("[2] Não\n");
    scanf("%d", &aux);

    if (aux == 1) {
        calcular(resultado);
    } else {
        printf("Encerrando...\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valor, resultado = 0;

    printf("Digite um número: ");
    scanf("%f", &valor);

    resultado = valor;

    calcular(&resultado);
}