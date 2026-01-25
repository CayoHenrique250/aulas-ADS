#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Variável para o menu
    int opcao;

    // --- LEITURA CARTA 1 ---
    printf("=-=-=-=-=-=-= Cadastro da Carta 1 =-=-=-=-=-=-=\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    // --- LEITURA CARTA 2 ---
    printf("\n=-=-=-=-=-=-= Cadastro da Carta 2 =-=-=-=-=-=-=\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- MENU INTERATIVO ---
    printf("\n=============================\n");
    printf("ESCOLHA O ATRIBUTO PARA COMPARAR\n");
    printf("=============================\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n-----------------------------\n");
    printf("RESULTADO DA COMPARAÇÃO\n");
    printf("-----------------------------\n");

    // --- LÓGICA DO SWITCH E COMPARAÇÃO ---
    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            
            if (area1 > area2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (A LÓGICA INVERTE AQUI!)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);

            // Regra: Menor valor vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (Carta 1) - Menor densidade vence!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Carta 2) - Menor densidade vence!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}