// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: Custo Mínimo de Corte de Vara
// ======================================================================
// Você precisa cortar uma vara de madeira em pedaços. A empresa mais acessível, The Analog Cutting Machinery,
// Inc. (ACM), cobra dinheiro de acordo com o comprimento da vara que está sendo cortada. O procedimento de trabalho
// deles exige que façam apenas um corte por vez.
// É fácil notar que diferentes seleções na ordem dos cortes podem levar a preços diferentes. Por
// exemplo, considere uma vara de 10 metros que tem que ser cortada em 2, 4 e 7 metros a partir de uma extremidade.
// Existem várias escolhas. Uma pode ser cortar primeiro em 2, depois em 4, depois em 7. Isso leva a um preço
// de 10 + 8 + 6 = 24 porque a primeira vara tinha 10 metros, a resultante tinha 8 e a última tinha 6.
// Outra escolha poderia ser cortar em 4, depois em 2, depois em 7. Isso levaria a um preço de 10 + 4 + 6 =
// 20, que é um preço melhor.
// Seu chefe confia em suas habilidades computacionais para descobrir o custo mínimo para cortar uma vara
// dada.
// Entrada
// A entrada consistirá de vários casos de teste. A primeira linha de cada caso de teste conterá um número positivo
// l que representa o comprimento da vara a ser cortada. Você pode assumir l < 1000. A próxima linha conterá
// o número n (n < 50) de cortes a serem feitos.
// A próxima linha consiste em n números positivos ci (0 < ci < l) representando os locais onde os cortes
// devem ser feitos, dados em ordem estritamente crescente.
// Um caso de entrada com l = 0 representará o fim da entrada.
// Saída
// Você deve imprimir o custo da solução ótima para o problema de corte, ou seja, o custo mínimo de
// cortar a vara dada. Formate a saída como mostrado abaixo.
// Exemplo de Entrada
// 100
// 3
// 25 50 75
// 10
// 4
// 4 5 7 8
// 0
// Exemplo de Saída
// The minimum cutting is 200.
// The minimum cutting is 22.

// Comandos úteis para trabalhar com vetores e matrizes:
// Vetor unidimensional:
//   Declarar: vector<int> v;
//   Inicializar com tamanho n e valor inicial: vector<int> v(n, 0);
//   Redimensionar: v.resize(n);
//   Atribuir valores: v.assign(n, 0);
//   Inserir elemento no final: v.push_back(valor);
//   Acessar elemento: v[i];
//   Obter tamanho: v.size();
//   Iterar (índices): for (int i = 0; i < v.size(); ++i) { /*...*/ }e;
//   Iterar (range-based): for (auto &elem : v) { /*...*/ }
// Matriz (vetor de vetores):
//   Declarar: vector<vector<int>> dp;
//   Inicializar n x m com valor inicial: dp.assign(n, vector<int>(m, 0));
//   Acessar elemento: dp[i][j];
//   Obter dimensões: dp.size() (linhas), dp[i].size() (colunas);
//   Iterar dupla: for (int i = 0; i < dp.size(); ++i) {
//       for (int j = 0; j < dp[i].size(); ++j) {
//           /*...*/
//       }
//   }

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main () 