#include <stdio.h>

// Leia uma cadeia de caracteres e converta todos os caracteres para maiusculas.

int main() {
    char frase[60];

    printf("Digite uma frase: ");
    fgets(frase, 60, stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = frase[i] - ('a' - 'A');
        }
    }

    printf("Frase em maiusculas: %s\n", frase);

    return 0;
}