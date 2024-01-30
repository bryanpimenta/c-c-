#include <stdio.h>

int main() {
    double price;
    int origin;
    char *procedence;

    printf("Digite o código de origem do produto: 1 á 30\n ");
    scanf("%d", &origin);

    printf("Digite o preço do produto:\n ");
    scanf("%lf", &price);

    if (origin == 1) {
        procedence = "Sul";
    }
    else if (origin == 2) {
        procedence = "Norte";
    }
    else if (origin == 3) {
        procedence = "Leste";
    }
    else if (origin == 4) {
        procedence = "Oeste";
    }
    else if (origin == 5 || origin == 6) {
        procedence = "Nordeste";
    }
    else if (origin == 7 || origin == 8 || origin == 9) {
        procedence = "Sudeste";
    }
    else if (origin >= 10 && origin <= 20) {
        procedence = "Centro-oeste";
    }
    else if (origin >= 21 && origin <= 30) {
        procedence = "Nordeste";
    }
    else {
        printf("Código de origem inválido.\n");
        return 1;
    }

    printf("O preço do produto é R$%.2lf\n Procedência: %s", price, procedence);
    return 0;
}
