# Xadrez
# Simulador de Movimentos de Peças de Xadrez em C

Este programa foi desenvolvido como parte dos desafios de programação propostos na disciplina, evoluindo passo a passo desde o nível novato até o nível mestre. A proposta foi simular os movimentos básicos das principais peças do xadrez utilizando estruturas de repetição, loops aninhados e, por fim, recursividade e controle de fluxo avançado.

## 🔢 Etapas do desenvolvimento

### 🔹 Nível Novato
Implementei os movimentos de três peças:
- **Torre**: movimenta-se cinco casas para a direita.
- **Bispo**: movimenta-se cinco casas na diagonal (cima + direita).
- **Rainha**: movimenta-se oito casas para a esquerda.

Cada peça foi inicialmente controlada com uma estrutura de repetição diferente (`for`, `while` ou `do-while`).

### 🔸 Nível Aventureiro
Adicionei o movimento do **Cavalo**, que simula um "L":
- Duas casas para baixo
- Uma casa para a esquerda

Esse movimento foi feito com **loops aninhados**, utilizando `for` e `while` juntos.

### 🔺 Nível Mestre
Aprimorei todo o programa com:
- **Recursividade** nas funções da Torre, Bispo e Rainha, substituindo os laços.
- **Cavalo com lógica mais avançada**, utilizando `continue`, `break` e múltiplas variáveis.
- **Bispo com loops aninhados** extra, simulando coordenadas diagonais (linhas e colunas).

---

## ✅ Como compilar e executar

### 1. Compilar o código
Use o GCC no terminal:

```bash
gcc xadrez_movimentos.c -o xadrez# Xadrez
