#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados de uma carta
    struct Carta {
        char estado;
        char codigo[4];
        char nomeCidade[50];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
    };

    struct Carta carta1, carta2;

    // Leitura dos dados da Carta 1

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta : ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer do teclado
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);

    // remove o '\n' da string lida por fgets
    for (int i = 0; carta1.nomeCidade[i] != '\0'; i++) {
        if (carta1.nomeCidade[i] == '\n') {
            carta1.nomeCidade[i] = '\0';
            break;
        }
    }

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);


    // Leitura dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    getchar();
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);

    for (int i = 0; carta2.nomeCidade[i] != '\0'; i++) {
        if (carta2.nomeCidade[i] == '\n') {
            carta2.nomeCidade[i] = '\0';
            break;
        }
    }

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // Exibição dos dados cadastrados
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    printf("=============================\n");

    return 0;
}
