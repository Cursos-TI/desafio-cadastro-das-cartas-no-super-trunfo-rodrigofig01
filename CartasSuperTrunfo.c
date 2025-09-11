#include <stdio.h> // Biblioteca para funções de entrada e saída (printf, scanf)

// Início da função principal do programa
int main() {
    /* * =======================================================
     * DECLARAÇÃO DE VARIÁVEIS PARA AS CARTAS
     * =======================================================
     * A população agora é 'unsigned long int' para números maiores.
     * Adicionamos a variável 'superPoder' para cada carta.
    */

    // Variáveis para a Carta 1
    char  estado1;
    char  codigo1[10];
    char  nomeCidade1[50];
    unsigned long int populacao1; // ATUALIZADO: para populações maiores
    float area1;
    float pib1;
    int   pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;            // NOVO: Para o Super Poder

    // Variáveis para a Carta 2
    char  estado2;
    char  codigo2[10];
    char  nomeCidade2[50];
    unsigned long int populacao2; // ATUALIZADO: para populações maiores
    float area2;
    float pib2;
    int   pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;            // NOVO: Para o Super Poder


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
    // ATUALIZADO: Usamos "%lu" para ler um unsigned long int
    scanf("%lu", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    // NOVO: Cálculo do Super Poder
    // Somamos todos os atributos, convertendo para float para manter a precisão.
    // Usamos (1.0f / densidade1) para que menor densidade resulte em maior poder.
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);


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
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // NOVO: Cálculo do Super Poder
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);


    /* * =======================================================
     * COMPARAÇÃO E EXIBIÇÃO DOS RESULTADOS
     * =======================================================
     * Comparamos cada atributo e exibimos o vencedor.
     * O resultado da comparação (1 para Carta 1 vence, 0 para Carta 2 vence)
     * é impresso diretamente.
    */

    printf("\n\n============================================\n");
    printf("        COMPARAÇÃO DE CARTAS\n");
    printf("============================================\n");
    
    // Variáveis para armazenar o resultado da vitória (1 ou 0)
    int vitoria_populacao = (populacao1 > populacao2);
    int vitoria_area = (area1 > area2);
    int vitoria_pib = (pib1 > pib2);
    int vitoria_pontos = (pontosTuristicos1 > pontosTuristicos2);
    int vitoria_densidade = (densidade1 < densidade2); // Lógica invertida: menor é melhor
    int vitoria_per_capita = (pibPerCapita1 > pibPerCapita2);
    int vitoria_super_poder = (superPoder1 > superPoder2);

    // Exibição dos resultados da comparação
    // Usamos um operador ternário (condição ? valor_se_verdadeiro : valor_se_falso)
    // para decidir qual número de carta (1 ou 2) será impresso como vencedora.
    printf("População:           Carta %d venceu (%d)\n", (vitoria_populacao ? 1 : 2), vitoria_populacao);
    printf("Área:                Carta %d venceu (%d)\n", (vitoria_area ? 1 : 2), vitoria_area);
    printf("PIB:                 Carta %d venceu (%d)\n", (vitoria_pib ? 1 : 2), vitoria_pib);
    printf("Pontos Turísticos:   Carta %d venceu (%d)\n", (vitoria_pontos ? 1 : 2), vitoria_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (vitoria_densidade ? 1 : 2), vitoria_densidade);
    printf("PIB per Capita:      Carta %d venceu (%d)\n", (vitoria_per_capita ? 1 : 2), vitoria_per_capita);
    printf("Super Poder:         Carta %d venceu (%d)\n", (vitoria_super_poder ? 1 : 2), vitoria_super_poder);

    return 0; 
}