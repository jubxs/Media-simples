# Problema Beecrowd - Média Simples

Este código resolve o problema de calcular a média simples de uma lista de números inteiros fornecida pelo usuário, com a média sendo exibida com **duas casas decimais**.

## Descrição do Problema

O problema consiste em:

1. Ler um número inteiro `N` que indica quantos números inteiros serão fornecidos.
2. Ler `N` números inteiros.
3. Calcular a média desses números.
4. Exibir a média com **duas casas decimais**.

### Entrada

- A entrada contém um número inteiro `N`, indicando a quantidade de números que serão fornecidos.
- A seguir, serão fornecidos `N` números inteiros.

### Saída

- A saída deve mostrar a média desses `N` números, com **duas casas decimais**.

  O código realiza as seguintes etapas:

1. **Leitura de Dados:**
   - O código começa lendo um número inteiro `N` com o comando `cin >> N;`, que indica quantos números serão inseridos.
   - Em seguida, o código cria um vetor `n[]` para armazenar os números inseridos pelo usuário.
   
2. **Cálculo da Soma:**
   - O laço `for` percorre todos os elementos inseridos, somando-os para obter a soma total.

3. **Cálculo da Média:**
   - A média é calculada pela fórmula:
     ```cpp
     média = soma / N;
     ```
   - Em seguida, a média é impressa com o comando `cout`, utilizando o manipulador `fixed << setprecision(2)` para garantir que a saída tenha exatamente **duas casas decimais**.

### Código

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; 
  int soma = 0;
  cin >> N;
  int n[N];
  
  // Leitura dos N números e cálculo da soma
  for(int i = 0; i < N; i++){
    cin >> n[i];
    soma += n[i];
  }
  
  // Cálculo e exibição da média com duas casas decimais
  cout << fixed << setprecision(2) << (float)soma / N << endl;
  return 0;
}

