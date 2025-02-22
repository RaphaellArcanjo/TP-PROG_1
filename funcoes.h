#ifndef FUNCOES_H
#define FUNCOES_H

#define MAX_FIGURAS 10
#define TAM_NOME 11

//Operações - Area e Perimetro
float areaCirculo(float raio);
float perimetroCirculo(float raio);
float areaRetangulo(float largura, float altura);
float perimetroRetangulo(float largura, float altura);
float areaTriangulo(float largura, float altura);
float perimetroTriangulo(float lado1, float lado2, float lado3);

//Ler dados
float lerRaio();
float lerLargura();
float lerAltura();
float lerBase();
void lerLados();

//Armazena dados
void armazenarDados(float matriz[MAX_FIGURAS][5], char nomes[MAX_FIGURAS][TAM_NOME], int num, float dim1, float dim2, float dim3, float area, float perimetro, int operacao);
void gerarNomeFigura(char nomes[MAX_FIGURAS][TAM_NOME], int num);

//Cabeçalhos
void linha();
void header();
void circulo();
void retangulo();
void triangulo();

//Tabela com dados
void exibirDadosTabela(float matriz[MAX_FIGURAS][5], char nomes[MAX_FIGURAS][TAM_NOME], int numFiguras);


#endif
