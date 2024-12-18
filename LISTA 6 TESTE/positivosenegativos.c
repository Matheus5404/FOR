# include <stdio.h>
# include <locale.h>
# define QUANT 5

/*Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos.*/

int main ()
{
	int i;
	float numero, positivo, negativo, nulo;
	
	for(i == 0 ; i < QUANT ; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		if(numero > 0)
		{
			printf("Positivo\n");
			positivo++;
		}
		else
		{
			if(numero < 0)
			{
				printf("Negativo\n");
				negativo++;
			}
			else
			{
				printf("Nulo\n");
				nulo++;
			}
		}	
	}
	
	printf("\nAo todo sao %.0f numeros positivos", positivo);
	printf("\nAo todo sao %.0f numeros negativos", negativo);
	printf("\nAo todo sao %.0f numeros nulos", nulo);
	
	return 0;
}

