#include <stdio.h>
#define QUANT 5
#include <locale.h>

/*Receber 10 n�meros e mostrar a m�dia aritm�tica no final*/

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	float numero, media_aritmetica, soma_numero;
	
	for(i = 0 ; i < QUANT ; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		numero++;
		
		soma_numero += numero;
		
		media_aritmetica = soma_numero / numero;
		
	}
	
	printf("\nA m�dia aritm�tica dos numeros somados �: %.2f", media_aritmetica);
	

	return 0;
}
