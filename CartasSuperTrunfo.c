#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("--Super Trunfo--\n");

    // Dados da Carta 1
    unsigned long int populacao1;
    int pontosTuristicos1;
    char estado1[50], cod1[10], nomeCidade1[50];
    double area1, pib1;

    // Dados da Carta 2
    unsigned long int populacao2;
    int pontosTuristicos2;
    char estado2[50], cod2[10], nomeCidade2[50];
    double area2, pib2;

    char buffer[100]; // Buffer para leitura segura

    // === CARTA 1 ===
    printf("\n--- Carta 1 ---\n");

    printf("Estado:\n");
    fgets(estado1, sizeof(estado1), stdin);

    printf("Codigo:\n");
    fgets(cod1, sizeof(cod1), stdin);

    printf("Nome da cidade:\n");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Populacao:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &populacao1);

    printf("Area total:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf", &area1);

    printf("PIB:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf", &pib1);

    printf("Pontos turisticos:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos1);

    // === CARTA 2 ===
    printf("\n--- Carta 2 ---\n");

    printf("Estado:\n");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Codigo:\n");
    fgets(cod2, sizeof(cod2), stdin);

    printf("Nome da cidade:\n");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Populacao:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &populacao2);

    printf("Area total:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf", &area2);

    printf("PIB:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf", &pib2);

    printf("Pontos turisticos:\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos2);

    // === CÁLCULOS ===
    float dp1 = populacao1 / area1;
    float pc1 = pib1 / populacao1;
    float sp1 = (float)(populacao1 + area1 + pib1 + pontosTuristicos1 + pc1 + (1.0 / dp1));

    float dp2 = populacao2 / area2;
    float pc2 = pib2 / populacao2;
    float sp2 = (float)(populacao2 + area2 + pib2 + pontosTuristicos2 + pc2 + (1.0 / dp2));

    // === RESULTADOS ===
    printf("\n--- Comparação de Cartas ---\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dp1 < dp2); // menor ganha
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pc1 > pc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", sp1 > sp2);

    return 0;
}