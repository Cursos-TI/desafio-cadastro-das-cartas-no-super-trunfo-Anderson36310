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
   
    char estado;
    char nome_cidade[20];
    char cod_carta[20];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;

    printf("Olá! Seja Bem vindo ao jogo de cartas Super Trunfo! Vamos começar...\n");
    printf("Digite o Estado: ");
    scanf("%c\n", &estado);

    printf("Digite o Nome da Cidade: ");
    scanf("%s\n", nome_cidade);

    printf("Digite o Código da carta: ");
    scanf("%s\n", cod_carta);

    printf("Digite o número da população: ");
    scanf("%d\n", &populacao);

    printf("Digite a quantidade de pontos Turísticos: ");
    scanf("%d\n", &pontos_turisticos);

    printf("Digite o tamanho da área em KM: ");
    scanf("%f\n", &area);

    printf("Digite o Pib da Cidade: ");
    scanf("%f\n", &pib);


}