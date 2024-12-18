#include <stdio.h>
#define QUANT 4
#include <locale.h>

/*6. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas.
 Este programa deverá mostrar no final:
- a menor altura do grupo;
- a média de altura das mulheres;
- o número de homens;
- o sexo da pessoa mais alta.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, sexo, quant_homens=0, quant_mulheres=0, sexo_maior_altura;
	float altura, menor_altura=10, maior_altura=0; 
	float media_altura_feminino=0, soma_altura_mulheres=0; 
	
	printf("Digite 1 para Masculino\n");
	printf("Digite 2 para Feminino\n");
		
	
	for(i=0; i<QUANT; i++)
	{
		printf("\nDigite a opcao de sexo da pessoa: ");
		scanf("%i", &sexo);
		
		printf("\nDigite a altura da pessoa: ");
		scanf("%i", &altura);
		
		if(sexo == 1)
		{
			quant_homens++;
		}
		else 
		{
			if(sexo == 2)
			{
				soma_altura_mulheres += altura;
				quant_mulheres++;
			}
		}
		
		if(altura < menor_altura)
		{
			menor_altura = altura;
		}
		
		if(altura > maior_altura)
		{
			maior_altura = altura;
			sexo_maior_altura = sexo;
		}
	}
	
	media_altura_feminino = soma_altura_mulheres / quant_mulheres;
	
	printf("\nA menor altura de ambos os sexos: %.2f", menor_altura);
	printf("\nA media da altura das mulheres e: %i", media_altura_feminino);
	printf("\nO numero de Homens e: %i", quant_homens);
	printf("\nO sexo da pessoa mais alta e: %i", sexo_maior_altura);
	
	return 0;
}
