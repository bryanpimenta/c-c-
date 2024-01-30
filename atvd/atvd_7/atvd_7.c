#include <stdio.h>

int main() {
    int productCode;
    int quantity;
    double productValue;

    printf("Digite o código do produto:\n ");
    scanf("%d", &productCode);

    printf("Digite a quantidade do produto:\n ");
    scanf("%d", &quantity);

    if (productCode >= 1 && productCode <= 10) {
        productValue = 10;
    } else if (productCode >= 11 && productCode <= 20) {
        productValue = 15;
    } else if (productCode >= 21 && productCode <= 30) {
        productValue = 20;
    } else if (productCode <= 40) {
        productValue = 30;
    } else {
        printf("Código de produto inválido.\n");
        return 1;
    }

    double totalValue = productValue * quantity;
    double totalValueWithDiscount;
    
    if (totalValue >= 250) {
        totalValueWithDiscount = productValue *  (1 - 0.05);
    } else if (productCode >= 251 && productCode >= 500) {
        totalValueWithDiscount = productValue *  (1 - 0.1);
    } else  {
        totalValueWithDiscount = productValue *  (1 - 0.15);
    }

    printf("O valor total da compra é R$%.2lf\n", totalValueWithDiscount);
    return 0;
}