#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados da segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada da Carta 1
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

    // Entrada da Carta 2
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


    // Exibicao das cartas cadastradas
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

    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$%.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("=========================\n");

    return 0;
}