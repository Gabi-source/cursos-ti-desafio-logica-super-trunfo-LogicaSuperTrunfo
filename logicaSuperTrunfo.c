#include <stdio.h>

int main() {
    // ==== Cadastro das cartas ====
    // Carta 1 - Curitiba
    char estado1[] = "PR";
    char codigo1[] = "C03";
    char nomeCidade1[] = "Curitiba";
    int populacao1 = 1963726;
    float area1 = 434.89;
    float pib1 = 93.40; // em bilhões de reais
    int pontosTuristicos1 = 25;

    // Carta 2 - Salvador
    char estado2[] = "BA";
    char codigo2[] = "D02";
    char nomeCidade2[] = "Salvador";
    int populacao2 = 2886698;
    float area2 = 693.83;
    float pib2 = 63.60; // em bilhões de reais
    int pontosTuristicos2 = 40;

    // ==== Cálculo de densidade populacional e PIB per capita ====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais por habitante
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ==== Exibir informações das cartas ====
    printf("=== Dados das Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // ==== Comparação (atributo escolhido: PIB per capita) ====
    printf("\n=== Comparação de Cartas (Atributo: PIB per capita) ===\n");
    printf("%s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
    printf("%s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } 
    else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } 
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}


