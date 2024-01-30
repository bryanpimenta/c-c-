#include <stdio.h>

int main()
{
    typedef enum
    {
        Poupanca = 1,
        FundosDeRendaFixa = 2
    } Type;

    Type type;
    int investment;
    float result;

    printf("Digite 1 para Poupança ou 2 para Fundos de renda fixa: ");
    scanf("%u", &type);

    printf("Digite o valor do investimento: ");
    scanf("%d", &investment);

    if (type == Poupanca) {
        result = investment * (1 + 0.03);
    } else if (type == FundosDeRendaFixa) {
        result = investment * (1 + 0.04);
    } else {
        printf("Tipo de investimento inválido.\n");
        return 1;
    }

    printf("Saldo ao realizar o investimento apos 1 mês: R$%.2f\n", result);
    return 0;
}