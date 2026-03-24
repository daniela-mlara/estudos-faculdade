#include <stdio.h>

//Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo: “0011001” -> 3.

int main() {
    char palavra[100];
    int contador = 0;

    printf("Digite uma string: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == '1') {
            contador++;
        }
    }

    printf("O numero de 1's na string é: %d\n", contador);

    return 0;
}