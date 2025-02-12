
#include <stdio.h>

int main(void) {
    int escolha = -1;
    int raio, largura, altura, base; // Variáveis para dimensões específicas
    int lado1, lado2, lado3; // Variáveis para os lados do triângulo

    // Loop principal que continua até o usuário escolher a opção de sair (0)
    while (escolha != 0) {
        // Exibe o menu principal
        printf("AREAS DAS FIGURAS GEOMETRICAS\n");
        printf("1- CIRCULO\n"
               "2- RETANGULO\n"
               "3- TRIANGULO\n"
               "0- PARA TERMINAR O PROGRAMA\n");
        printf("----------------------------\n");

        // Lê a escolha do usuário
        printf("Digite sua escolha: ");
        scanf("%d", &escolha); // Armazena a entrada na variável "escolha"
        printf("----------------------------\n");

        int escolha2; // Variável para armazenar a escolha entre área ou perímetro

        // Estrutura de decisão para tratar cada figura geométrica
        switch (escolha) {
            case 1: // Caso o usuário escolha círculo
                printf("VOCE ESCOLHEU O CIRCULO\n");
                printf("----------------------------\n");
                printf("1- AREA\n"
                       "2- PERIMETRO\n"
                       "Digite sua escolha: ");
                scanf("%d", &escolha2); // Lê a escolha para área ou perímetro
                printf("----------------------------\n");

                if (escolha2 == 1) {
                    do {
                        printf("Digite o raio (positivo): ");
                        scanf("%d", &raio); // Lê o raio
                    } while (raio <= 0); // Garante que o raio seja positivo
                    float areaCirculo = 3.1415 * (raio * raio);
                    printf("Area Circulo: %.2f\n", areaCirculo);
                    printf("----------------------------\n");
                } else if (escolha2 == 2) {
                    do {
                        printf("Digite o raio (positivo): ");
                        scanf("%d", &raio);
                    } while (raio <= 0); // Garante que o raio seja positivo
                    float perimetroCirculo = 2 * 3.1415 * raio;
                    printf("Perimetro Circulo: %.2f\n", perimetroCirculo);
                    printf("----------------------------\n");
                }
                break;

            case 2: // Caso o usuário escolha retângulo
                printf("VOCE ESCOLHEU O RETANGULO\n");
                printf("----------------------------\n");
                printf("1- AREA\n"
                       "2- PERIMETRO\n"
                       "Digite sua escolha: ");
                scanf("%d", &escolha2);
                printf("----------------------------\n");

                if (escolha2 == 1) {
                    do {
                        printf("Digite a largura (positiva): ");
                        scanf("%d", &largura);
                    } while (largura <= 0);
                    do {
                        printf("Digite a altura (positiva): ");
                        scanf("%d", &altura);
                    } while (altura <= 0);
                    int areaRetangulo = largura * altura;
                    printf("Area Retangulo: %d\n", areaRetangulo);
                    printf("----------------------------\n");
                } else if (escolha2 == 2) {
                    do {
                        printf("Digite a largura (positiva): ");
                        scanf("%d", &largura);
                    } while (largura <= 0);
                    do {
                        printf("Digite a altura (positiva): ");
                        scanf("%d", &altura);
                    } while (altura <= 0);
                    int perimetroRetangulo = 2 * (largura + altura);
                    printf("Perimetro Retangulo: %d\n", perimetroRetangulo);
                    printf("----------------------------\n");
                }
                break;

            case 3: // Caso o usuário escolha triângulo
                printf("VOCE ESCOLHEU O TRIANGULO\n");
                printf("----------------------------\n");
                printf("1- AREA\n"
                       "2- PERIMETRO\n"
                       "Digite sua escolha: ");
                scanf("%d", &escolha2);
                printf("----------------------------\n");

                if (escolha2 == 1) {
                    do {
                        printf("Digite a altura (positiva): ");
                        scanf("%d", &altura);
                    } while (altura <= 0);
                    do {
                        printf("Digite a base (positiva): ");
                        scanf("%d", &base);
                    } while (base <= 0);
                    int areaTriangulo = (base * altura) / 2;
                    printf("Area Triangulo: %d\n", areaTriangulo);
                    printf("----------------------------\n");
                } else if (escolha2 == 2) {
                    do {
                        printf("Digite o lado 1 (positivo): ");
                        scanf("%d", &lado1);
                    } while (lado1 <= 0);
                    do {
                        printf("Digite o lado 2 (positivo): ");
                        scanf("%d", &lado2);
                    } while (lado2 <= 0);
                    do {
                        printf("Digite o lado 3 (positivo): ");
                        scanf("%d", &lado3);
                    } while (lado3 <= 0);
                    int perimetroTriangulo = lado1 + lado2 + lado3;
                    printf("Perimetro Triangulo: %d\n", perimetroTriangulo);
                    printf("----------------------------\n");
                }
                break;

            case 0:
                printf("FIM DO PROGRAMA\n");
                printf("----------------------------\n");
                break;

            default:
                printf("Opcao invalida\n");
                printf("----------------------------\n");
                break;
        }
    }
    return 0;
}
