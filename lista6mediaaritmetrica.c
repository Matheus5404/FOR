# include <stdio.h>

/*1. Receber 10 n�meros e mostrar a m�dia aritm�tica no final.*/

int main ()
{
	int i;
	float numero, media, soma;
	
	for( i=0  ; i<10 ; i++  )
	{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		soma += numero;	
	}
	media = soma/10;
	printf("\nA media aritmetrica sera de %.1f", media);
	
	
	return 0;
}
