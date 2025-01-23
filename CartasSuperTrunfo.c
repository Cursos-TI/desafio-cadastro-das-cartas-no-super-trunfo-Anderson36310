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
   
    char estado[10];
    char cidade[10];
    char cod_carta[10];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;

    printf("Olá! Seja Bem vindo ao jogo de cartas Super Trunfo! Vamos começar...\n");
    
    printf("Digite o Estado: ");
    scanf("%s", estado);
    
    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade);

    printf("Digite o Código da carta: ");
    scanf("%s", cod_carta);

    printf("Digite o número da população: ");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite o tamanho da área em KM: ");
    scanf("%f", &area);

    printf("Digite o Pib da Cidade: ");
    scanf("%f", &pib);

    // Dados a serem mostrados para o usuário Carta 1
    printf("Estes são os dados da primeira carta \n");
    printf("Estado:%s\n", estado);
    printf("Cidade:%s\n", cidade);
    printf("Cód.Carta:%s\n", cod_carta);
    printf("População:%d\n", populacao);
    printf("Pontos Turisticos:%d\n", pontos_turisticos);
    printf("Aréa em KM:%f\n", area);
    printf("Pib:%f\n", pib);

    return 0;

}