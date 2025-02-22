#include <stdio.h>
#include "funcoes.h"

#define MAX_FIGURAS 10

//Operações - Area e Perimetro
float areaCirculo(float raio) {
    return 3.14 * raio * raio;
}

float perimetroCirculo(float raio) {
    return 2 * 3.1415 * raio;
}

float areaRetangulo(float largura, float altura) {

    return largura * altura;
}

float perimetroRetangulo(float largura, float altura) {
    return 2 * (largura + altura);
}

float areaTriangulo(float altura, float base) {
    return (altura * base) / 2;
}

float perimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

//Ler dados
float lerRaio() {
    float raio;
    do {
        printf("Digite o raio(positivo): ");
        scanf("%f", &raio);
    } while (raio <= 0);
    return raio;
}

float lerLargura() {
    float largura;
    do {
        printf("Digite a largura (positiva): ");
        scanf("%f", &largura);
    } while (largura <= 0);
    return largura;
}

float lerAltura() {
    float altura;
    do {
        printf("Digite a altura (positiva): ");
        scanf("%f", &altura);
    } while (altura <= 0);
    return altura;
}

float lerBase() {
    float base;
    do {
        printf("Digite a base (positiva): ");
        scanf("%f", &base);
    } while (base <= 0);
    return base;
}

void lerLados(float lados[3]) {
    for (int i = 0; i < 3; i++) {
        do {
            printf("Digite o %d° lado (positivo): ", i+1);
            scanf("%f", &lados[i]);
        } while (lados[i] <= 0);
    }
}

//Armazena dados
void armazenarDados(float matriz[MAX_FIGURAS][5], char nomes[MAX_FIGURAS][TAM_NOME], int num, float dim1, float dim2, float dim3, float area, float perimetro, int operacao) {
    matriz[num][0] = dim1;         // Primeira dimensão
    matriz[num][1] = dim2;         // Segunda dimensão
    matriz[num][2] = dim3;         // Terceira dimensão
    matriz[num][3] = (operacao == 1) ? area : perimetro; // Resultado
    matriz[num][4] = operacao;     // Tipo de operação
    gerarNomeFigura(nomes, num);   // Gera o nome (ex.: "Figura 1")
}

void gerarNomeFigura(char nomes[MAX_FIGURAS][TAM_NOME], int num) {
    sprintf(nomes[num], "Figura %d", num + 1);
}

//Cabeçalhos

void linha() {
    printf("----------------------------------\n");
}

void header() {
    printf("\n============== MENU ==============\n");
    printf("1- CIRCULO\n"
           "2- RETANGULO\n"
           "3- TRIANGULO\n"
           "4- VALORES CALCULADOS\n"
           "0- PARA TERMINAR O PROGRAMA\n");
    linha();
    printf("Digite sua escolha: ");
}

void circulo() {
    printf("VOCE ESCOLHEU O CIRCULO\n");
    linha();
    printf("1- AREA\n"
           "2- PERIMETRO\n"
           "Digite sua escolha: ");

}

void retangulo() {
    printf("VOCE ESCOLHEU O RETANGULO\n");
    linha();
    printf("1- AREA\n"
           "2- PERIMETRO\n"
           "Digite sua escolha: ");
}

void triangulo() {
    printf("VOCE ESCOLHEU O TRIANGULO\n");
    linha();
    printf( "1- AREA\n"
           "2- PERIMETRO\n"
           "Digite sua escolha: ");
}

//Tabela com os dados
void exibirDadosTabela(float matriz[MAX_FIGURAS][5], char nomes[MAX_FIGURAS][TAM_NOME], int numFiguras) {
    printf("\n============== DADOS DAS FIGURAS ==============\n");
    printf("| Figura     |   Dimensões      | Resultado | Operação  |\n");
    printf("|------------|------------------|-----------|-----------|\n");

    for (int i = 0; i < numFiguras; i++) {
        printf("| %-10s |", nomes[i]); // Usa o nome da figura (ex.: "Figura 1")

        // Dimensões
        if (matriz[i][2] == 0) {
            if (matriz[i][1] == 0) {
                printf(" %-6.2f           |", matriz[i][0]);
            } else {
                printf(" %-6.2f, %-6.2f   |", matriz[i][0], matriz[i][1]);
            }
        } else {
            printf(" %-4.2f, %-4.2f, %-4.2f |", matriz[i][0], matriz[i][1], matriz[i][2]);
        }

        // Resultado
        printf(" %-9.2f |", matriz[i][3]);

        // Operação
        if (matriz[i][4] == 1) {
            printf(" Área      |\n");
        } else {
            printf(" Perímetro |\n");
        }
    }
    printf("===============================================\n");
}

