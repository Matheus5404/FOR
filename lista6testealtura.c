#include <stdio.h>

/*6. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas.
 Este programa deverá mostrar no final:
- a menor altura do grupo;
- a média de altura das mulheres;
- o número de homens;
- o sexo da pessoa mais alta.*/

int main()
{
	int i, sexo, homens=0, mulheres=0, pessoas=4;
	float altura_homem, altura_mulher, media_mulheres, soma_altura;
	
	printf("Escolha 1 - para sexo Masculino\n");
	printf("Escolha 2 - para sexo Feminino\n");
	
	for( i=0; i < pessoas; i++)
	{
		printf("\nDigite o sexo da pessoa: ");
		scanf("%i", &sexo);
		
		if(sexo == 1) {
			
			printf("\nDigite a altura da pessoa: ");
			scanf("%f", &altura_homem);
			homens++;
			
		} else if(sexo == 2) {
			printf("\nDigite a altura da pessoa: ");
			scanf("%f", &altura_mulher);
			mulheres++;
			soma_altura = (soma_altura + altura_mulher);
			media_mulheres = soma_altura / mulheres;
			
		} else {
			printf("\nSexo Invalido, Escolha 1 para Masculino ou 2 para Feminino");
		}	
	}
	
	if(altura_homem < altura_mulher) {
		printf("\nEssa e a menor altura do grupo: %.2f", altura_homem);
	} else {
		printf("\nEssa e a menor altura do grupo: %.2f", altura_mulher);
	}
	
	if(altura_homem > altura_mulher) {
		printf("\nO sexo da pessoa mais alta e masculino %.2f", altura_homem);
	} else {
		printf("\nO sexo da pessoa mais alta e feminino %.2f", altura_mulher);
	}
	
	printf("\nMedia da altura das mulheres %.2f", media_mulheres);
	printf("\nO numero de homens %i", homens);
	
	return 0;
}
