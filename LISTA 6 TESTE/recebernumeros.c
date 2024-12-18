#include <stdio.h>
#define QUANT 5
#include <locale.h>

/*Receber 10 números e mostrar a média aritmética no final*/

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
	
	printf("\nA média aritmética dos numeros somados é: %.2f", media_aritmetica);
	

	return 0;
}
