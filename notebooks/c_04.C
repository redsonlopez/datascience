#include<stdio.h>

float calcularInvestimento(float valor, char plano, int meses) {
    if ((plano =='A' || plano =='a') && meses >= 24){
        return valor * 0.02 * meses;
    } else {
        printf("\nDados inválidos!");
        return 0;
    }

    if ((plano =='B' || plano =='b') && meses >= 12){
        return valor * 0.008 * meses;
    } else {
        printf("\nDados inválidos!");
        return 0;
    }
}

int main(){
    float valorInv = 0;
    float rendimento = 0;
    char plano;
    int tempo = 0;

    printf("\nDigite o plano: ");
    scanf("%c", &plano);

    printf("\nDigite o valor a ser investido: ");
    scanf("%f", &valorInv);

    printf("\nDigite o tempo para resgate: ");
    scanf("%d", &tempo);

    rendimento = calcularInvestimento(valorInv, plano, tempo);
    printf("\nSeu rendimento será de %.2f", rendimento);

    return 0;
}