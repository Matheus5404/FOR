# include <stdio.h>

/*3. Perguntar quantos números o usuário deseja informar, receber cada um deles e mostrar a 
média aritmética dos valores positivos no final.*/

int main()
{
	int i, quant, quant_pos=0;
	float numero, somapos=0, mediapos;
	
	printf("\nDigite a quantidade de numeros recebidos: ");
	scanf("%i", &quant);
	
	for( i=0; i<quant; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);
		
		if(numero > 0){
			somapos = somapos + numero;
			quant_pos++;
		}
	}	
	mediapos = somapos / quant_pos;
	printf("\nSoma dos valores positivos %.1f", somapos);
	printf("\nQuantidade de positivos %i", quant_pos);
	printf("\nMedia dos positivos %.1f", mediapos);
	
	
	return 0;
}
