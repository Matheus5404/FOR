
# include <stdio.h>

/*2. Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos.*/

int main ()
{
	int i;
	int numero; 
	int nulo;
	int num_positivo = 0; 
	int num_negativo = 0;
	
	for( i=0  ; i<10 ; i++  )
	{
		printf("\nDigite um numero: ");
		scanf("%i", &numero);
		
		if(numero > 0)
		{
			num_positivo ++;
		}
		else if(numero < 0)
		{
			num_negativo ++;
		}
		else if(numero == 0)
		{
			numero = nulo++;
		}
			
	}
	
		printf("\n %i numeros positivos", num_positivo);
		printf("\n %i numeros negativos", num_negativo);
		printf("\n %i numeros nulos", nulo);
	
	return 0;
}
