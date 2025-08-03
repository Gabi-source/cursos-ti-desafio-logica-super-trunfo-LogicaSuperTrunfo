#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular dados derivados
void calcularDadosDerivados(Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib * 1000000000 / carta->populacao;
}

// Função para mostrar dados da carta
void mostrarCarta(Carta c) {
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidadePopulacional);
    printf("PIB per capita: R$ %.2f\n\n", c.pibPerCapita);
}

// Função para comparar por população
void compararCartas(Carta c1, Carta c2) {
    printf("\n=== Comparação de cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s: %d habitantes\n", c1.cidade, c1.populacao);
    printf("Carta 2 - %s: %d habitantes\n", c2.cidade, c2.populacao);

    if (c1.populacao > c2.populacao) {
        printf("➡ A carta vencedora é: %s (Maior população)\n", c1.cidade);
    } else if (c2.populacao > c1.populacao) {
        printf("➡ A carta vencedora é: %s (Maior população)\n", c2.cidade);
    } else {
        printf("Empate! Ambas as cidades têm a mesma população.\n");
    }
}

int main() {
    // Cidades alteradas: Salvador e Belo Horizonte
    Carta carta1 = {
        "Bahia",
        "BA01",
        "Salvador",
        2886698,
        693.28,
        63.42,
        10
    };

    Carta carta2 = {
        "Minas Gerais",
        "MG01",
        "Belo Horizonte",
        2375252,
        331.40,
        92.51,
        9
    };

    // Calcular dados derivados
    calcularDadosDerivados(&carta1);
    calcularDadosDerivados(&carta2);

    // Exibir cartas
    printf("=== Carta 1 ===\n");
    mostrarCarta(carta1);

    printf("=== Carta 2 ===\n");
    mostrarCarta(carta2);

    // Comparação
    compararCartas(carta1, carta2);

    return 0;
}
