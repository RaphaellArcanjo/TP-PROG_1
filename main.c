#include <stdio.h>
#include "funcoes.h"

int main(void) {
    int escolha = -1;
    float raio, largura, altura, base;
    float matriz[MAX_FIGURAS][5];
    char nomes[MAX_FIGURAS][TAM_NOME];
    int numFiguras = 0;

    while (escolha != 0) {
        int escolha2;
        header();
        scanf("%d", &escolha);
        linha();

        switch (escolha) {
            case 1:
                circulo();
                scanf("%d", &escolha2);
                while (escolha2 != 1 && escolha2 != 2) {
                    printf("Opção inválida! Digite sua escolha: ");
                    scanf("%d", &escolha2);
                }
                linha();
                if (escolha2 == 1) {
                    raio = lerRaio();
                    float area = areaCirculo(raio);
                    armazenarDados(matriz,nomes, numFiguras, raio, 0, 0, area, 0, 1);
                    printf("Área: %.2f\n", area);
                    linha();
                } else if (escolha2 == 2) {
                    raio = lerRaio();
                    float perimetro = perimetroCirculo(raio);
                    armazenarDados(matriz, nomes, numFiguras, raio, 0, 0, 0, perimetro, 2);
                    printf("Perímetro: %.2f\n", perimetro);
                    linha();
                }
                numFiguras++;
                break;
            case 2:
                retangulo();
                scanf("%d", &escolha2);
                while (escolha2 != 1 && escolha2 != 2) {
                    printf("Opção inválida! Digite sua escolha: ");
                    scanf("%d", &escolha2);
                }
                linha();
                if (escolha2 == 1) {
                    largura = lerLargura();
                    altura = lerAltura();
                    float area = areaRetangulo(largura, altura);
                    armazenarDados(matriz, nomes, numFiguras, largura, altura, 0, area, 0, 1);
                    printf("Área Retângulo: %.2f\n", area);
                    linha();
                } else if (escolha2 == 2) {
                    largura = lerLargura();
                    altura = lerAltura();
                    float perimetro = perimetroRetangulo(largura, altura);
                    armazenarDados(matriz, nomes, numFiguras, largura, altura, 0, 0, perimetro, 2);
                    printf("Perímetro Retângulo: %.2f\n", perimetro);
                    linha();
                }
                numFiguras++;
                break;
            case 3:
                triangulo();
                scanf("%d", &escolha2);
                while (escolha2 != 1 && escolha2 != 2) {
                    printf("Opção inválida! Digite sua escolha: ");
                    scanf("%d", &escolha2);
                }
                linha();
                if (escolha2 == 1) {
                    altura = lerAltura();
                    base = lerBase();
                    float area = areaTriangulo(altura, base);
                    armazenarDados(matriz, nomes, numFiguras, base, altura, 0, area, 0, 1);
                    printf("Área Triângulo: %.2f\n", area);
                    linha();;
                } else if (escolha2 == 2) {
                    float lados[3];
                    lerLados(lados);
                    float perimetro = perimetroTriangulo(lados[0], lados[1], lados[2]);
                    armazenarDados(matriz, nomes, numFiguras, lados[0], lados[1], lados[2], 0, perimetro, 2);
                    printf("Perímetro Triângulo: %.2f\n", perimetro);
                    linha();
                }
                numFiguras++;
                break;
            case 4:
                if (numFiguras > 0) {
                    exibirDadosTabela(matriz, nomes, numFiguras);
                } else {
                    printf("Nenhum dado para ser exibido!");
                }
                break;
            case 0:
                printf("FIM DO PROGRAMA\n");
                break;
            default:
                printf("Opcao invalida\n");
                linha();
                break;
        }
    }
    return 0;
}
