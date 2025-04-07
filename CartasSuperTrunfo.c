#include <stdio.h>


int main() {
        char Estado[8];
    char Codigo[5];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Pontosturisticos;

    printf("Digite seu estado: \n"); //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). 
    scanf("%s", &Estado);

    printf("Insira o código: \n"); //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). 
    scanf("%s", &Codigo);

    printf("nome da Cidade: \n"); //Nome da Cidade: O nome da cidade.
    scanf("%s", &Cidade);

    printf("Insira o tamanho da População: \n"); //População: O número de habitantes da cidade.
    scanf("%d", &Populacao);

    printf("Insira o tamanho da Área: \n"); //Área (em km²): A área da cidade em quilômetros quadrados.
    scanf("%f", &Area);

    printf("Insira o PIB: \n"); //PIB: O Produto Interno Bruto da cidade. 
    scanf("%f", &PIB);

    printf("Insira o número de Pontos Turísticos: \n"); //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    scanf("%d", &Pontosturisticos);


    printf("Carta: \n");
	printf("Estado: %s\n", Estado);
	printf("Código: %s\n", Codigo);
	printf("Cidade: %s\n", Cidade);
	printf("População: %d\n", Populacao);
	printf("Tamanho da área: %f\n", Area);
	printf("PIB: %f\n", PIB);
	printf("Pontos Turísticos: %d", Pontosturisticos);

    

    return 0;
}
