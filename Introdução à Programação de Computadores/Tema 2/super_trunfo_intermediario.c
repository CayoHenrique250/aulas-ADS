#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Nova variável
    float pibPerCapita1;          // Nova variável

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Nova variável
    float pibPerCapita2;          // Nova variável

    // --- LEITURA DOS DADOS DA CARTA 1 ---
    printf("=-=-=-=-=-=-= Cadastro da Carta 1 =-=-=-=-=-=-=\n");
    
    printf("Digite uma letra de 'A' a 'H' (Estado): ");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- CÁLCULOS DA CARTA 1 ---
    // Densidade = População / Área
    densidadePopulacional1 = (float)populacao1 / area1; 
    
    // PIB per Capita = PIB / População
    // IMPORTANTE: Como o PIB foi digitado em bilhões (ex: 699.28), precisamos
    // multiplicar por 1 bilhão para ter o valor em reais antes de dividir.
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;


    // --- LEITURA DOS DADOS DA CARTA 2 ---
    printf("\n=-=-=-=-=-=-= Cadastro da Carta 2 =-=-=-=-=-=-=\n");

    printf("Digite uma letra de 'A' a 'H' (Estado): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- CÁLCULOS DA CARTA 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;


    // --- EXIBIÇÃO DOS DADOS (OUTPUT) ---
    printf("\n=============================\n");
    printf("DADOS CALCULADOS\n");
    printf("=============================\n");

    // Exibindo Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // Novos Outputs
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // Novos Outputs
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}