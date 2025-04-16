/*
 * Problema: B - Vector-Sort (Ordenação com Vetor)
 *
 * Descrição:
 * Você receberá N números inteiros. Sua tarefa é ordenar esses N inteiros
 * em ordem crescente e imprimir o resultado ordenado.
 *
 * Requisito:
 * Armazene os N inteiros em um `std::vector`. Vetores são contêineres sequenciais
 * que representam arrays cujo tamanho pode mudar dinamicamente.
 *
 * Funções Úteis de Vector (mencionadas no enunciado original):
 * - Declaração: `vector<int> v;` (Cria um vetor vazio de inteiros)
 * - Tamanho: `int size = v.size();` (Retorna o número de elementos no vetor)
 * - Adicionar ao final: `v.push_back(x);` (Adiciona o inteiro x no final do vetor, aumentando o tamanho em 1)
 * - Remover do final: `v.pop_back();` (Remove o último elemento, diminuindo o tamanho em 1) - Não necessário para este problema específico.
 * - Ordenar: `sort(v.begin(), v.end());` (Ordena os elementos do vetor. Requer #include <algorithm>)
 *
 * Formato de Entrada:
 * - A primeira linha contém um único inteiro N, representando o número de inteiros a serem lidos.
 * - A segunda linha contém N números inteiros separados por espaços.
 *
 * Restrições:
 * - 1 <= N <= 10^5
 * - 1 <= Vi <= 10^9, onde Vi é o i-ésimo inteiro na entrada.
 *
 * Formato de Saída:
 * - Imprima os N inteiros em ordem crescente, separados por um único espaço,
 *   em uma única linha.
 *
 * Exemplo:
 *
 * Entrada:
 * 5
 * 1 6 10 8 4
 *
 * Saída:
 * 1 4 6 8 10
 *
 * Dica de Implementação:
 * 1. Leia o valor de N.
 * 2. Crie um `std::vector<int>`.
 * 3. Use um loop para ler os N inteiros e use `push_back()` para adicioná-los ao vetor.
 * 4. Use a função `std::sort()` para ordenar o vetor.
 * 5. Use outro loop para percorrer o vetor ordenado e imprimir cada elemento seguido por um espaço.
 * 6. Lembre-se de incluir os cabeçalhos necessários (`<vector>`, `<iostream>`, `<algorithm>`).
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> numeros;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        numeros.push_back(num);
    }

    sort(numeros.begin(), numeros.end());

    for (int i = 0; i < N; ++i) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}