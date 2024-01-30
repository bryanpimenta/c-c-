#include <stdio.h>

int main() {
    double altura, pesoIdeal;
    char sexo;

    printf("Digite o sexo da pessoa (M para masculino, F para feminino): ");
    scanf("%c", &sexo);

    printf("Digite a altura da pessoa em metros: ");
    scanf("%lf", &altura);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido.\n");
        return 1;
    }
    
    printf("O peso ideal para um homem com %.2lf metros de altura é %.2lf kg.\n", altura, pesoIdeal);
    return 0;
}
