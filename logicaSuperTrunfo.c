#include <stdio.h>
#include <string.h>

#define TAM 100

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[TAM];
    char codigo[TAM];
    char nome_cidade[TAM];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função que calcula a densidade populacional e PIB per capita
void calcularDados(Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = (c->pib * 1e9) / c->populacao;  // PIB estava em bilhões
}

// Função que imprime os dados da carta
void imprimirCarta(Carta c, int numero) {
    printf("\n--- Carta %d ---\n", numero);
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nome_cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", c.pib_per_capita);
}

// Função que compara as duas cartas com base na POPULAÇÃO
void compararCartasPorPopulacao(Carta c1, Carta c2) {
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", c1.nome_cidade, c1.estado, c1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", c2.nome_cidade, c2.estado, c2.populacao);

    if (c1.populacao > c2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", c1.nome_cidade);
    } else if (c2.populacao > c1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", c2.nome_cidade);
    } else {
        printf("\nResultado: Empate! Ambas têm a mesma população.\n");
    }
}

int main() {
    // Carta 1 - Recife
    Carta carta1 = {
        "PE", "PE01", "Recife", 1661017, 218.4, 52.15, 18
    };

    // Carta 2 - Porto Alegre
    Carta carta2 = {
        "RS", "RS01", "Porto Alegre", 1332570, 496.8, 71.09, 22
    };

    // Cálculo dos dados derivados
    calcularDados(&carta1);
    calcularDados(&carta2);

    // Impressão das cartas
    imprimirCarta(carta1, 1);
    imprimirCarta(carta2, 2);

    // Comparação com base na População
    compararCartasPorPopulacao(carta1, carta2);

    return 0;
}

