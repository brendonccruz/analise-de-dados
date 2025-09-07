/*

    Crie um programa em C que solicite ao usuário três números inteiros e, em seguida, execute as seguintes informações:
    a) Calcule a soma, subtração, multiplicação e divisão dos três números.
    b) Verifique, utilizando operadores relacionais, se o primeiro número é maior que o segundo,
    e se o segundo é menor que o terceiro.
    c) Utilize operadores lógicos para verificar se o primeiro número é positivo e o segundo
    número é par. Caso ambas as condições sejam verdadeiras, o programa deverá exibir
    uma mensagem específica.

*/

#include <stdio.h>

int soma_nums (int num[3]) {

    int soma = 0;

    for (int i = 0; i < 3; i++) {
        soma += num[i];
    }

    return soma;
}

int subtr_nums (int num[3]) {

    int subtr = num[0];

    for (int i = 1; i < 3; i++) {
        subtr -= num[i];
    }

    return subtr;
}

float multip_nums (int num[3]) {

    float multip = 1;

    for (int i = 0; i < 3; i++) {
        multip *= num[i];
    }

    return multip;
}

float div_nums (int num[3]) {

    float div = num[0];

    for (int i = 1; i < 3; i++) {
        div /= num[i];
    }

    return div;
}

int main() {

    printf("--------------------------------------------------------\n");
    printf("------------------ ANÁLISE DE OPERAÇÕES ----------------\n");
    printf("--------------------------------------------------------\n");

    int num[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite um número inteiro %d/3: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("--------------------------------------------------------\n");

    if (num[0] > num[1]) {
        printf("O primeiro número é maior que o segundo.\n");
    } if (num[1] < num[2]) {
        printf("O segundo número é menor que o terceiro.\n");
    }

    printf("--------------------------------------------------------\n");

    int maior = num[0];
    int menor = num[0];

    for (i = 0; i < 3; i++) {
        if (num[0] > 0) {
            maior = num[0];
        } else if (num [i] > num[0]) {
            maior = num[i];
        }
    }

    for (i = 0; i < 3; i++) {
        if (num[i] < num[0]) {
            menor = num[i];
        }
    }

    printf("O MAIOR número dos informados é: %d\n", maior);
    printf("O MENOR número dos informados é: %d\n", menor);

    printf("--------------------------------------------------------\n");

    if (num[0] > 0 && num[1] % 2 == 0) {
        printf("O primeiro número informado (%d) é positivo. E o segundo número (%d) é par.\n", num[0], num[1]);
    } else if (num[0] < 0 && num[1] % 2 != 0) {
        printf("O primeiro número informado (%d) NÃO É positivo. E o segundo número (%d) NÃO É par.\n", num[0], num[1]);
    }

    printf("--------------------------------------------------------\n");

    int resultado_soma = soma_nums(num);
    printf("A soma dos números digitados é igual a %d\n", resultado_soma);

    int resultado_subtr = subtr_nums(num);
    printf("A subtração dos números digitados é igual a %d\n", resultado_subtr);

    float resultado_multip = multip_nums(num);
    printf("A multiplicação dos números digitados é igual a %.1f\n", resultado_multip);

    float resultado_div = div_nums(num);
    printf("A divisão dos números digitados é igual a %.2f\n", resultado_div);

    printf("--------------------------------------------------------\n");

    printf("------------------------- FIM --------------------------\n");

    return 0;

}