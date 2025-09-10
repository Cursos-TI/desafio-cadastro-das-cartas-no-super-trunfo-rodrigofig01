#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Início da função principal do programa
int main()
{
    /* * =======================================================
     * DECLARAÇÃO DE VARIÁVEIS PARA AS CARTAS
     * =======================================================
     * Para cada carta, criamos um conjunto de variáveis para
     * armazenar suas informações específicas.
     */

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[10];     // Um array para a string, ex: "A01"
    char nomeCidade1[50]; // Array com espaço para nomes de cidades
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    /* * =======================================================
     * ENTRADA DE DADOS - CARTA 1
     * =======================================================
     * O programa irá solicitar ao usuário que insira cada
     * informação da primeira carta.
     */

    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    // O espaço antes de "%c" é importante para consumir qualquer 'enter'
    // ou espaço que tenha ficado no buffer de entrada.
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    /* * =======================================================
     * ENTRADA DE DADOS - CARTA 2
     * =======================================================
     * Agora, o programa solicita as informações da segunda carta.
     */

    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    /* * =======================================================
     * EXIBIÇÃO DOS DADOS FINAIS
     * =======================================================
     * Após o cadastro, o programa exibe um resumo organizado
     * com todas as informações das duas cartas.
     */

    printf("\n\n============================================\n");
    printf("  INFORMAÇÕES DAS CARTAS CADASTRADAS\n");
    printf("============================================\n");

    // Exibindo dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // "%.2f" formata para 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibindo dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("\n"); // Adiciona uma linha em branco no final para melhor formatação

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}