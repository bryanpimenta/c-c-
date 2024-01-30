#include <stdio.h>

int main() {
    int salary;
    printf("Digite o seu salário: ");
    scanf("%d", &salary);

    int baseSalary = salary;
    float discount = 0.07;
    int tax = salary * discount;
    int bonus = 0;

    switch (baseSalary) {
        case 1 ... 350:
            bonus += 100;
            break;
        case 351 ... 600:
            bonus += 75;
            break;
        case 601 ... 900:
            bonus += 50;
            break;
        default:
            bonus += 35;
            break;
    }

    float totalSalary = baseSalary + bonus - tax;
    printf("Salário base: R$%d\n", baseSalary);
    printf("Bônus: R$%d\n", bonus);
    printf("Imposto sobre o salário base: R$%d\n", tax);
    printf("Salário total: R$%.2f\n", totalSalary);

    return 0; 
}