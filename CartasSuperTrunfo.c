#include <stdio.h>

// Definição da estrutura da carta, Variáveis
struct Carta {
    char estado;
    char cidade[10],codCarta[10];
    int  pontosTuriscos;
    float areaKm, pib, populacao;
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1;
    struct Carta carta2;

    //Entrada dos dados solicitados ao usuário
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado: ( Use uma letra de A a H, simbolizando um estado).\n");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta: (ex. A1) \n");
    scanf("%s", &carta1.codCarta);

    printf("Digite a Cidade: \n");
    scanf("%s", &carta1.cidade);

    printf("Digite a População: \n");
    scanf("%f", &carta1.populacao);

    printf("Digite a Área em km²: \n");
    scanf("%f", &carta1.areaKm);

    printf("Digite o PIB: \n");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &carta1.pontosTuriscos);
    printf("\n");

    printf("Cadastro da Carta 2:\n");

    printf("Digite o Estado: ( Use uma letra de A a H, simbolizando um estado).\n");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta: (ex. A1) \n");
    scanf("%s", &carta2.codCarta);

    printf("Digite a Cidade: \n");
    scanf("%s", &carta2.cidade);

    printf("Digite a População: \n");
    scanf("%f", &carta2.populacao);

    printf("Digite a Área em km²: \n");
    scanf("%f", &carta2.areaKm);

    printf("Digite o PIB: \n");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &carta2.pontosTuriscos);

    //Exibição dos dados recebidos e formatados
    printf("\n--- Dados das Cartas ---\n");
   
    printf("\nCarta 01 \n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da Carta: %s\n", carta1.codCarta);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %f\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.areaKm);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuriscos);

    printf("\nCarta 02 \n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Carta: %s\n", carta2.codCarta);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %f\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.areaKm);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuriscos);
    printf("\n");
    
    return 0;
}