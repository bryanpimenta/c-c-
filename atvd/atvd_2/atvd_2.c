#include <stdio.h>
#include <math.h>

int main()
{
    int price;
    printf("Digite o preço:\n ");
    scanf("%d", &price);

    float discount;
    char *category;

    if (price >= 1 && price <= 50) {
        discount = 0.05;
    } else if (price >= 51 && price <= 100) {
        discount = 0.10;
    } else {
        discount = 0.15;
    }

    float finalPrice = price * (1 - discount);

    if (finalPrice <= 80) {
        category = "Barato";
    } else if (finalPrice <= 120) {
        category = "Normal";
    } else if (finalPrice <= 200) {
        category = "Caro";
    } else {
        category = "Muito caro";
    }

    printf("Preço final: R$%.2f\n", finalPrice);
    printf("Categoria: %s\n", category);
    return 0;
}