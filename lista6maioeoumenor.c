# include <stdio.h>

/*4. Receber 10 números e, ao final, informar qual é o maior e o menor deles.*/

int main()
{
	int i;
	int numero, menor, maior; 
	
	for( i=0  ; i<9 ; i++ )
	{
		printf("\nDigite um numero: ");
		scanf("%i", &numero);	
	
		if(numero > maior)
		{
			maior = numero;
		}
		else if(numero < menor)
		{
			menor = numero;
		}
	}	
	
	 	printf("\nMaior numero: %i\n", maior);
    	printf("Menor numero: %i\n", menor);
	
	
	return 0;
}
