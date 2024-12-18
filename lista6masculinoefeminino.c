#include <stdio.h>

/*6. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas.
 Este programa deverá mostrar no final:
- a menor altura do grupo;
- a média de altura das mulheres;
- o número de homens;
- o sexo da pessoa mais alta.*/

int main() {
    int i, sexo, homens = 0, mulheres = 0, pessoas = 4;
    float altura, menor_altura = 0, maior_altura = 0, soma_altura_mulheres = 0, media_mulheres = 0;
    int sexo_maior_altura;

    printf("Escolha 1 - para sexo Masculino\n");
    printf("Escolha 2 - para sexo Feminino\n");

    for (i = 0; i < pessoas; i++) {
        printf("\nDigite o sexo da pessoa: ");
        scanf("%i", &sexo);
        printf("Digite a altura da pessoa: ");
        scanf("%f", &altura);

        if (i == 0 || altura < menor_altura) {
            menor_altura = altura;
        }

        if (altura > maior_altura) {
            maior_altura = altura;
            sexo_maior_altura = sexo;
        }

        if (sexo == 1) {
            homens++;
        } else if (sexo == 2) {
            mulheres++;
            soma_altura_mulheres += altura;
        } else {
            printf("\nSexo Invalido, Escolha 1 para Masculino ou 2 para Feminino\n");
        }
    }

    if (mulheres > 0) { /*se nao existir mulher*/
        media_mulheres = soma_altura_mulheres / mulheres;
    } else {
        media_mulheres = 0; /*se nao existir mulher, media = 0*/
    }

    printf("\nA menor altura do grupo: %.2f", menor_altura);
    printf("\nA media da altura das mulheres: %.2f", media_mulheres);
    printf("\nO numero de homens: %i", homens);
    printf("\nO sexo da pessoa mais alta: %s\n", (sexo_maior_altura == 1) ? "Masculino" : "Feminino");

    return 0;
}    
