#include <stdio.h>

int main() {
    // --- VARIÁVEIS DE CARTA (Dados) ---
    // Carta 1
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1;
    int pontosTuristicos1;

    // Carta 2
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2;
    int pontosTuristicos2;

    // Variáveis de Controle e Lógica
    int opcao1, opcao2;
    float valor1_c1, valor1_c2; // Armazena o valor do 1º atributo escolhido
    float valor2_c1, valor2_c2; // Armazena o valor do 2º atributo escolhido
    float soma_c1, soma_c2;     // Soma dos dois atributos
    char *nomeAtributo1, *nomeAtributo2; // Para exibir o nome na tela

    // --- CADASTRO (Simplificado para focar na lógica) ---
    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade1 = (float)populacao1 / area1; // Cálculo automático

    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = (float)populacao2 / area2; // Cálculo automático

    // --- MENU 1: ESCOLHA DO PRIMEIRO ATRIBUTO ---
    printf("\n--- Escolha o PRIMEIRO atributo para comparar ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    // Switch para definir valores do atributo 1
    switch (opcao1) {
        case 1:
            nomeAtributo1 = "População";
            valor1_c1 = (float)populacao1;
            valor1_c2 = (float)populacao2;
            break;
        case 2:
            nomeAtributo1 = "Área";
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            nomeAtributo1 = "PIB";
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            nomeAtributo1 = "Pontos Turísticos";
            valor1_c1 = (float)pontosTuristicos1;
            valor1_c2 = (float)pontosTuristicos2;
            break;
        case 5:
            nomeAtributo1 = "Densidade Demográfica";
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
        default:
            printf("Opção inválida! Usando População como padrão.\n");
            nomeAtributo1 = "População";
            valor1_c1 = (float)populacao1;
            valor1_c2 = (float)populacao2;
            opcao1 = 1; // Força opção válida
    }

    // --- MENU 2: ESCOLHA DO SEGUNDO ATRIBUTO (Dinâmico) ---
    printf("\n--- Escolha o SEGUNDO atributo para comparar ---\n");
    // Lógica para não exibir a opção já escolhida
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turísticos\n");
    if (opcao1 != 5) printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    // Validação simples: se escolher igual, encerra ou força erro
    if (opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo! O sistema encerrará por segurança.\n");
        return 1;
    }

    // Switch para definir valores do atributo 2
    switch (opcao2) {
        case 1:
            nomeAtributo2 = "População";
            valor2_c1 = (float)populacao1;
            valor2_c2 = (float)populacao2;
            break;
        case 2:
            nomeAtributo2 = "Área";
            valor2_c1 = area2; // Bug proposital corrigido: deve ser area1 para c1? Não, c1=area1
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            nomeAtributo2 = "PIB";
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            nomeAtributo2 = "Pontos Turísticos";
            valor2_c1 = (float)pontosTuristicos1;
            valor2_c2 = (float)pontosTuristicos2;
            break;
        case 5:
            nomeAtributo2 = "Densidade Demográfica";
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
        default:
            printf("Opção inválida! Consideraremos valor 0 para o segundo atributo.\n");
            valor2_c1 = 0;
            valor2_c2 = 0;
            nomeAtributo2 = "Inválido";
    }

    // --- LÓGICA DE COMPARAÇÃO E SOMA ---
    
    // Soma dos atributos (Regra do Super Trunfo para este nível)
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n========================================\n");
    printf("RESULTADO DA COMPARAÇÃO: %s vs %s\n", nomeCidade1, nomeCidade2);
    printf("========================================\n");

    // Detalhamento
    printf("Atributo 1: %s\n", nomeAtributo1);
    printf("   %s: %.2f | %s: %.2f\n", nomeCidade1, valor1_c1, nomeCidade2, valor1_c2);
    
    printf("Atributo 2: %s\n", nomeAtributo2);
    printf("   %s: %.2f | %s: %.2f\n", nomeCidade1, valor2_c1, nomeCidade2, valor2_c2);

    printf("----------------------------------------\n");
    printf("SOMA DOS ATRIBUTOS:\n");
    printf("%s: %.2f\n", nomeCidade1, soma_c1);
    printf("%s: %.2f\n", nomeCidade2, soma_c2);
    printf("----------------------------------------\n");

    // Lógica do Vencedor usando TERNÁRIO (? :)
    // Nota: Se Densidade for escolhida, a lógica da soma pode parecer estranha (soma densidade + pib),
    // mas seguiremos a regra "Maior soma vence".
    
    if (soma_c1 == soma_c2) {
        printf("RESULTADO FINAL: EMPATE!\n");
    } else {
        // Operador ternário define quem é o vencedor baseado na soma
        char *vencedor = (soma_c1 > soma_c2) ? nomeCidade1 : nomeCidade2;
        printf("RESULTADO FINAL: %s VENCEU!\n", vencedor);
    }
    
    return 0;
}