#include <stdio.h>

int main() {
    int password;

    printf("Digite a senha:\n ");
    scanf("%d", &password);

    if (password == 4351) {
        printf("Acesso permitido.\n");
        return 0;
    }

    printf("Acesso negado.\n");
    return 1;
}