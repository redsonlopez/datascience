#include<stdio.h>
int calcularMDC(int a, int b) {
    int r = a % b;
    if (r == 0) {
        return b;
    } else {
        return calcularMDC(b,r);
    }
}
int main(){
    int n1, n2, resultado;
    printf("\nDigite dois números inteiros positivos: ");
    scanf("%d %d", &n1, &n2);
    resultado = calcularMDC(n1,n2);
    printf("\nMDC = %d",resultado);
    return 0;
}