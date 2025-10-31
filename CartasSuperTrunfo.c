// Luiz Fellipe Rodrigues da Silva
// Desafio Super Trunfo - Nivel Mestre

#include <stdio.h>

int main() {
    // Variaveis para guardar os dados da primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[40];
    unsigned long int populacao1; // MUDANÇA: Nivel Mestre (de int para unsigned long int)
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;            // NOVO: Nivel Mestre

    // Variaveis para guardar os dados da segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[40];
    unsigned long int populacao2; // MUDANÇA: Nivel Mestre (de int para unsigned long int)
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;            // NOVO: Nivel Mestre

    // Pedindo os dados da primeira carta para o usuario
    printf("Cadastro da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1); // MUDANÇA: %lu para unsigned long int

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Agora, tudo de novo para a segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2); // MUDANÇA: %lu para unsigned long int

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ----------------------------------------------------
    // CÁLCULOS (Nível Aventureiro e Mestre)
    // ----------------------------------------------------
    
    // Nivel Aventureiro: Calculando Densidade e PIB per Capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // Nivel Mestre: Calculando o Super Poder
    // Super Poder = Pop + Area + PIB + Pontos + PIB per Capita + (1 / Densidade)
    // Usamos (float) para converter os inteiros antes de somar
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0 / densidade2);


    // Imprimindo as duas cartas cadastradas na tela (com todos os dados)
    printf("\n=========================\n");
    printf("CARTAS CADASTRADAS\n");
    printf("=========================\n");

    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu habitantes\n", populacao1); // MUDANÇA: %lu
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$%.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita1);
    printf("SUPER PODER: %.2f\n", superPoder1); // NOVO

    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu habitantes\n", populacao2); // MUDANÇA: %lu
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$%.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita2);
    printf("SUPER PODER: %.2f\n", superPoder2); // NOVO
    
    printf("\n=========================\n");
    printf("RESULTADOS DA BATALHA\n");
    printf("=========================\n");

    // ----------------------------------------------------
    // NÍVEL MESTRE: Comparações com if/else
    // (1 = Carta 1 venceu | 0 = Carta 1 perdeu ou empatou)
    // ----------------------------------------------------

    // Populacao (Maior vence)
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else if (populacao2 > populacao1) {
        printf("Populacao: Carta 2 venceu (0)\n");
    } else {
        printf("Populacao: Empate (0)\n");
    }

    // Area (Maior vence)
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else if (area2 > area1) {
        printf("Area: Carta 2 venceu (0)\n");
    } else {
        printf("Area: Empate (0)\n");
    }

    // PIB (Maior vence)
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else if (pib2 > pib1) {
        printf("PIB: Carta 2 venceu (0)\n");
    } else {
        printf("PIB: Empate (0)\n");
    }

    // Pontos Turisticos (Maior vence)
    if (pontos1 > pontos2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else if (pontos2 > pontos1) {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    } else {
        printf("Pontos Turisticos: Empate (0)\n");
    }

    // Densidade Populacional (REGRA ESPECIAL: Menor vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else if (densidade2 < densidade1) {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    } else {
        printf("Densidade Populacional: Empate (0)\n");
    }

    // PIB per Capita (Maior vence)
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    } else {
        printf("PIB per Capita: Empate (0)\n");
    }

    // Super Poder (Maior vence)
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else if (superPoder2 > superPoder1) {
        printf("Super Poder: Carta 2 venceu (0)\n");
    } else {
        printf("Super Poder: Empate (0)\n");
    }
    printf("=========================\n");

    return 0;
}