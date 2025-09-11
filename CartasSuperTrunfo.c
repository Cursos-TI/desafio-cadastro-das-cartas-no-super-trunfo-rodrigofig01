#include <stdio.h> // Biblioteca para funções de entrada e saída (printf, scanf)

// Início da função principal do programa
int main()
{
    /* * =======================================================
     * DECLARAÇÃO DE VARIÁVEIS PARA AS CARTAS
     * =======================================================
     * Além das variáveis básicas, adicionamos variáveis para
     * armazenar os resultados dos novos cálculos.
     */

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1; // PIB em bilhões de reais
    int pontosTuristicos1;
    float densidade1;    // NOVO: Para armazenar a densidade populacional
    float pibPerCapita1; // NOVO: Para armazenar o PIB per capita

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2; // PIB em bilhões de reais
    int pontosTuristicos2;
    float densidade2;    // NOVO: Para armazenar a densidade populacional
    float pibPerCapita2; // NOVO: Para armazenar o PIB per capita

    /* * =======================================================
     * ENTRADA DE DADOS E CÁLCULOS - CARTA 1
     * =======================================================
     */

    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // NOVO: Realizando os cálculos para a Carta 1
    // Para garantir a precisão, convertemos a população para float antes da divisão.
    densidade1 = (float)populacao1 / area1;
    // Multiplicamos o PIB por 1 bilhão para ter o valor real antes de dividir pela população.
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    /* * =======================================================
     * ENTRADA DE DADOS E CÁLCULOS - CARTA 2
     * =======================================================
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

    printf("Digite o PIB (em bilhões, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // NOVO: Realizando os cálculos para a Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    /* * =======================================================
     * EXIBIÇÃO DOS DADOS FINAIS
     * =======================================================
     * O resumo agora inclui os novos campos calculados.
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
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // NOVO: Exibindo os valores calculados formatados com 2 casas decimais
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // NOVO: Exibindo os valores calculados formatados com 2 casas decimais
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n");

    return 0;
}