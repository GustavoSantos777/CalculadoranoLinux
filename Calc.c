#include <stdio.h>
#include <stdlib.h>

int main (int arc, char *argv[]){
	int operacao;
	int opcao;

	float numero1;
	float numero2;
	float total;

    opcao=1;
    while(opcao==1){
    printf("Digite 1 para Adicao\n");
    printf("Digite 2 para Subtracao\n");
    printf ("Digite 3 para Multiplicacao\n");
    printf("Digite 4 para Divisao\n");
    scanf("%d", &operacao);
    
    printf("Escolha um numero:");
    scanf("%f", &numero1);
    printf("Escolha outro numero:");
    scanf("%f", &numero2);
    
    switch(operacao) {
    case 1:
    total = numero1 + numero2;
    break;

    case 2:
    total = numero1 - numero2;
    break;
    
    case 3:
    total = numero1 * numero2;
    break;

    case 4:
    total = numero1 / numero2;
    break;

 }     
    printf("O resultado da sua operacao e:%.2f\n",total);
    printf("Digite 1 para continuar ou Digite 0 para sair");
    scanf("%d", &opcao);
  }

    return 0;
}
