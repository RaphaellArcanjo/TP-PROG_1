
# Sistema de Cálculo de Figuras Geométricas

Este repositório contém o desenvolvimento de um sistema em **C** que realiza cálculos de propriedades (área e perímetro) de figuras geométricas como círculo, retângulo e triângulo. O projeto é dividido em módulos incrementais que incorporam novos conceitos de programação à medida que avançamos no semestre.

## Descrição Geral

O objetivo principal é consolidar os conhecimentos adquiridos na disciplina, abrangendo desde os fundamentos de programação até conceitos mais avançados, como ponteiros, estruturas e alocação dinâmica de memória.

### Funcionalidades Gerais
- Entrada e saída de dados para figuras geométricas.
- Cálculo de área e perímetro das figuras.
- Organização dos dados na tela.
- Reutilização e modularidade do código.

---

## Módulo 01: Fundamentos de Programação em C

### Objetivos
- Implementar funcionalidades básicas de entrada e saída para manipular dados de figuras geométricas.
- Aplicar estruturas condicionais e de repetição para realizar cálculos.

### Entregáveis
1. **Entrada e Saída Básica**
    - Solicitar ao usuário:
        - Círculo: Raio.
        - Retângulo: Largura e altura.
        - Triângulo: Base e altura.
    - Exibir os dados organizados na tela.

2. **Estruturas Condicionais**
    - Criar um menu para:
        - Selecionar a figura geométrica.
        - Escolher entre cálculo de **área** ou **perímetro**.
    - Utilizar `if` ou `switch` para executar a operação correspondente.

3. **Comandos de Repetição**
    - Permitir a execução repetida do programa até o usuário decidir encerrar.

4. **Laços Aninhados**
    - Adicionar funcionalidade para calcular e exibir as áreas de várias figuras fornecidas pelo usuário em sequência.

---
## Módulo 02: Funções, Vetores, Strings e Matrizes

### Objetivos
- Modularizar o código utilizando funções para calcular áreas e perímetros.
- Implementar vetores e matrizes para armazenar os dados das figuras geométricas.
- Introduzir manipulação de strings para gerenciar nomes e descrições das figuras.

### Entregáveis
1. **Sub-rotinas (Funções):**
   - Implementar funções específicas para calcular:
      - **Área e perímetro do círculo**.
      - **Área e perímetro do retângulo**.
      - **Área do triângulo** (utilizando a fórmula básica).
   - Criar uma função para exibir o menu de opções.

2. **Vetores e Strings:**
   - Usar vetores para armazenar os valores calculados (áreas e perímetros) de até 10 figuras geométricas.
   - Implementar manipulação de strings para associar nomes (como "Figura 1", "Figura 2") aos cálculos realizados.

3. **Matrizes:**
   - Implementar uma matriz para armazenar dados das figuras (e.g., dimensões de cada figura, áreas e perímetros calculados).
   - Exibir os dados de forma tabular.

4. **Validação de Dados:**
   - Adicionar verificações para garantir que os valores fornecidos pelo usuário sejam válidos (e.g., números positivos).

---

## Atualizações Futuras

Os próximos módulos introduzirão conceitos avançados, como:
- Manipulação de ponteiros.
- Structs
- Alocação dinâmica de memória.
