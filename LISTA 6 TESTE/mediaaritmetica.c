# include <stdio.h>
# include <locale.h>

/*Perguntar quantos números o usuário deseja informar, receber cada um deles e mostrar 
a média aritmética dos valores positivos no final*/

int main()
{
	int i, quantidade, quantidade_numeros=0;
	float numero, soma=0, media_aritmetica=0;
	
	printf("Quantos numeros deseja informar ? ");
	scanf("%i", &quantidade);
	
	for(i == 0; i < quantidade; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		if(numero > 0)
		{
			soma += numero;
			quantidade_numeros++;
		}
	}
	
		media_aritmetica = soma / quantidade_numeros;
		;
	
	printf("\nA soma dos valores digitados sao: %.2f", soma);
	printf("\nA media dos valores digitados sao: %.2f", media_aritmetica);
	
	return 0;
}
