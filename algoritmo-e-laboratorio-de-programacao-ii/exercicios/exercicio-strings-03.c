#include <stdio.h>

// Faça um programa que conte o numero de vogais (a, e, i, o, u) que aparecem em um string. Exemplo: “Hello World” -> 3.

int main() {
    char palavra[25];
    int contador = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 25, stdin);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            contador++;
        }
    }

    printf("O numero de vogais na string é: %d\n", contador);

    return 0;
}