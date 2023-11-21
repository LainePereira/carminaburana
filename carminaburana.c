#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[] = "Carmina Burana";

    int extensao = strlen(nome);

    printf("Vogais de '%s': ", nome);

    for (int i = 0; i < extensao; i++) {
        if (nome[i] == 'a' || nome[i] == 'i' || nome[i] == 'u' ||
            nome[i] == 'A' || nome[i] == 'I' || nome[i] == 'U') {
            printf("%c ", nome[i]);
        }
    }

    printf("\n");

    return 0;
}
