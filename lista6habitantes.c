# include <stdio.h>

/*5. A prefeitura de uma cidade de 6 habitantes fez uma pesquisa coletando salário e número de filhos de
cada um. A prefeitura deseja saber:
- média do salário da população;
- média do número de filhos;
- maior salário;
- percentual de pessoas com salário até R$ 1.000,00.*/

int main()
{
	int i, num_habitantes = 6, numero_filhos, pessoas=0;
	float salario, media_salario_populacao, media_numero_filhos, soma_salario, soma_filho, maior_salario;
	float maior=0, percentual_pessoas, percentual_salario, cont_salario=0;
	
	
	for (i = 0; i < num_habitantes; i++) 
	{
        printf("\nDigite o salario do habitante %i: ", i + 1);
        scanf("%f", &salario);
        printf("\nDigite o numero de filhos do habitante %d: ", i + 1);
        scanf("%i", &numero_filhos);
        
        soma_salario = soma_salario + salario;
        soma_filho = soma_filho + numero_filhos;
        
        if(salario > maior)
        {
        	maior = salario;
		}
		if(salario <= 1000)
		{
			percentual_salario += salario;
			cont_salario++;
		}   
	}
		media_salario_populacao = soma_salario/num_habitantes;
		printf("\nA media e: %.0f", media_salario_populacao);
		
		media_numero_filhos = soma_filho/num_habitantes;
		printf("\nA media dos filhos e: %.1f ", media_numero_filhos);
		
		printf("\nO maior salario sera : %.1f", maior);
		
		percentual_pessoas = (percentual_salario / num_habitantes)* 0.1;
		printf("\nA porcentagem do salario das pessoas sera: %.2f", percentual_pessoas);
		
	return 0;
}
