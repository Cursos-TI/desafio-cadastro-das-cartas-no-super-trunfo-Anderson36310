#include <stdio.h>

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main(){
   
   int codcidade;
   int pontosturisticos;
   int populacao;
   float pib;
   float area;
   char nome[20];

    printf("Digite o Código da Cidade:\n");
    scanf("%d", &codcidade);

    printf("Digite a quantidade de pontos Turisticos:\n");
    scanf("%d", &pontosturisticos);

    printf("Digite a quantidade da população: \n ");
    scanf("%d", &populacao);

    printf("Digite o Pib da Cidade: \n");
    scanf("%f", &pib);

    printf("Digite a área em KM: \n");
    scanf("%f", &area);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nome);

    printf("Código da Cidade: %d - Quantiade de Pontos Turisticos: %d\n", codcidade, pontosturisticos);
    printf("População: %d - Pib: %f\n", populacao, pib);
    printf("Area em KM: %f\n", area);
    printf("Nome da Cidade: %s\n", nome);

    return 0;


}