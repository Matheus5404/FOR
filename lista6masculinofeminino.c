#include <stdio.h>
#define QUANT 5

/*6. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 5 pessoas.
 Este programa deverá mostrar no final:
- a menor altura do grupo;
- a média de altura das mulheres;
- o número de homens;
- o sexo da pessoa mais alta.*/

int main()
{
	int i, altura, menor_altura=0, sexo, soma_altura_mulheres, media_altura_mulheres,homens=0, mulheres=0;
	int sexo_pessoa_mais_alta, maior_altura, primeira_altura, todas_alturas_iguais;
	
	printf("Digite 1 para Masculino\n");
	printf("Digite 2 para Feminino\n");
	
	for(i=0; i<QUANT; i++)
	{
	
		do
		{
		printf("\nDigite a altura da pessoa %i: ", i + 1);
		scanf("%i", &altura);
		
			if(altura <= 50)
			{
				printf("\nAltura invalida, Digite novamente\n");
			}
			
		}while(altura <= 50);

		do
		{
			printf("Digite a opcao de sexo da pessoa %i: ", i + 1);
			scanf("%i", &sexo);
		
			if(sexo == 1)
			{
				homens++;
				printf("Masculino\n");
			}
			
			else
			{
				if(sexo == 2)
				{
					soma_altura_mulheres += altura;
					mulheres++;
					media_altura_mulheres = soma_altura_mulheres / mulheres;
					printf("Feminino\n");	
				}
			
				else
				{
					if(sexo != 1 && sexo != 2)
					{
						printf("Sexo Invalido\n");	
					}
				}
			}
		}while(sexo != 1 && sexo != 2);
		
		if(i == 0 || altura < menor_altura )  
		{
        	menor_altura = altura;
		}
		
		if(i == 0 || altura > maior_altura)
		{
			maior_altura = altura;
			sexo_pessoa_mais_alta = sexo;
		}
		
		if(i == 0)
		{
			primeira_altura = altura;
		}
		
		else
		{
			if(altura != primeira_altura)
			{
				todas_alturas_iguais = 0;
			}
		}		       
   	}
	
	printf("\nA menor altura de ambos os sexos: %i", menor_altura);
	printf("\nA media de altura das mulheres: %i", media_altura_mulheres);
	printf("\nO numero de homens e: %i", homens);

	if(todas_alturas_iguais)
	{
		printf("\nAmbos os sexos tem a mesma altura");
	}
	else
	{
		printf("\nO sexo da pessoa mais alta e: %s", (sexo_pessoa_mais_alta) ? "Masculino" : "Feminino");
	}
	
	return 0;
}
