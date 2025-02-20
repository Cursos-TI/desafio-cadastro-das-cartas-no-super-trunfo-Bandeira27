#include <stdio.h>

/*
    Explicando passo à passo:

    1 - Declarando as variaveis para armazenar os valores fornecidos pelo usuário da carta 1 e carta 2, respectivamente.
    2 - Utilizando a função prinf() para exibir uma mensagem no terminal instruíndo quais dados o usuário deve preencher.
    3 - Utilizando a função scanf() para efetuar a leitura de dados formatados através do teclado.
    4 - Em seguida exibindo os valores repassados pelo usuário da carta 1 e carta 2.
*/

int main() {
    char estado1, codigoCarta1[5], cidade1[20], estado2, codigoCarta2[5], cidade2[20];
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;

    printf("Digite as informações da primeira carta:\n\n");
    printf("Digite a letra do seu estado (entre 'A' e 'H'):\n");
    scanf(" %c", &estado1); // O espaço antes do formato é para que ignore o \n

    printf("Digite a letra do estado seguido de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome de sua cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%i", &pontosTuristicos1);



    printf("\n\nDigite as informações da segunda carta:\n\n");
    printf("Digite a letra do seu estado (entre 'A' e 'H'):\n");
    scanf(" %c", &estado2); // O espaço antes do formato é para que ignore o \n

    printf("Digite a letra do estado seguido de um número de 01 a 04 (ex: A01, B03):\n\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome de sua cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%i", &pontosTuristicos2);

    printf("Carta 1\nEstado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigoCarta1, cidade1);
    printf("População: %i\nÁrea: %.2f km²\nPib: %.2f bilhões de reais\nNúmero de pontos turísticos: %i", populacao1, area1, pib1, pontosTuristicos1);

    printf("Carta 2\nEstado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigoCarta2, cidade2);
    printf("População: %i\nÁrea: %.2f km²\nPib: %.2f bilhões de reais\nNúmero de pontos turísticos: %i", populacao2, area2, pib2, pontosTuristicos2);

/*
    Separei o printf() em dois para cada exibição da carta para que a linha única de exibição não fique grande, facilitando a leitura.
*/

    return 0;
}