#include <stdio.h>
#include <stdlib.h>
int main() {
	char cpf_entrada[15];
	char cpf_corrigido[15];
    int n = 0;

	printf("\nInforme seu CPF (XXX.XXX.XXX-XX):");
	scanf("%s", cpf_entrada);

	for(int i = 0; i < 14; i++) {
		if(cpf_entrada[i] == '.' || cpf_entrada[i] == '-'){
			continue;
		}
 		cpf_corrigido[n] = cpf_entrada[i];
		n++;
	}
	cpf_corrigido[n] = '\0'; // caractere terminador da string

	printf("\nCPF corrigido = %s", cpf_corrigido);
	return 0;
}