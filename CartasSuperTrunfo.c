// Luiz Fellipe Rodrigues da Silva
// Desafio Super Trunfo - Nivel Aventureiro

#include <stdio.h>

int main() {
    // Variaveis para guardar os dados da primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;     // NOVO: Nivel Aventureiro
    float pibPerCapita1;  // NOVO: Nivel Aventureiro

    // Variaveis para guardar os dados da segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;     // NOVO: Nivel Aventureiro
    float pibPerCapita2;  // NOVO: Nivel Aventureiro

    // Pedindo os dados da primeira carta para o usuario
    printf("Cadastro da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ----------------------------------------------------
    // INÍCIO DO NÍVEL AVENTUREIRO
    // ----------------------------------------------------
    // Calculando os novos dados
    
    // Densidade = Populacao / Area
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // PIB per Capita = (PIB * 1.000.000.000) / Populacao
    // (Multiplicamos por 1 bilhao para converter "bilhoes" para "reais")
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;


    // Imprimindo as duas cartas cadastradas na tela
    printf("\n=========================\n");
    printf("CARTAS CADASTRADAS\n");
    printf("=========================\n");

    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$%.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    // NOVAS LINHAS:
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita1);


    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$%.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    // NOVAS LINHAS:
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita2);
    
    printf("=========================\n");

    return 0;
}