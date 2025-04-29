// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: D - Lower Bound-STL - Procurando elementos em array ordenado usando lower_bound
// ======================================================================
// Você recebe N números inteiros em ordem crescente. Além disso, você recebe Q consultas.
// Em cada consulta, você receberá um número inteiro e terá que dizer se esse número
// está presente no array. Se sim, você deve dizer em qual índice ele está presente e
// se não estiver presente, você deve dizer o índice em que o menor número inteiro
// que é imediatamente maior que o número dado está presente.
// Lower bound é uma função que pode ser usada com um vetor ordenado.
// Aprenda como usar lower bound para resolver este problema clicando aqui.
//
// Formato de Entrada
// A primeira linha da entrada contém o número de inteiros N.
// A próxima linha contém N inteiros em ordem crescente.
// A próxima linha contém Q, o número de consultas.
// Em seguida, Q linhas seguem, cada uma contendo um único inteiro Y.
//
// Nota: Se o mesmo número estiver presente várias vezes, você deve imprimir
// o primeiro índice em que ele ocorre. Além disso, a entrada é tal que
// você sempre tem uma resposta para cada consulta.
//
// Restrições
// 1 <= N <= 10^5
// 1 <= Xi <= 10^9, onde Xi é o i-ésimo elemento no array.
// 1 <= Q <= 10^5
// 1 <= Y <= 10^9
//
// Formato de Saída
// Para cada consulta, você deve imprimir "Yes" (sem as aspas) se o número
// estiver presente e em qual índice (base 1) ele está presente, separados por um espaço.
// Se o número não estiver presente, você deve imprimir "No" (sem as aspas)
// seguido pelo índice do próximo menor número imediatamente maior que esse número.
// Você deve imprimir a saída de cada consulta em uma nova linha.
//
// Exemplo de Entrada:
// 8
// 1 1 2 2 6 9 9 15
// 4
// 1
// 4
// 9
// 15
//
// Exemplo de Saída:
// Yes 1
// No 5
// Yes 6
// Yes 8

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int N, Q;
    vector<int>arrayOrdenado;
    vector<int>pesquisas;

    cin >> N;

    for (int i = 0; i < N; ++i){
        int num;
        cin >> num;
        arrayOrdenado.push_back(num);
    }

    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int num;
        cin >> num;
        pesquisas.push_back(num);
    }

    for (int i = 0; i < Q; ++i) {

        int valorBuscado = pesquisas[i];

        auto it = lower_bound(arrayOrdenado.begin(), arrayOrdenado.end(), valorBuscado);

        int indice = it - arrayOrdenado.begin() + 1;

        if (*it == valorBuscado) {

            cout << "Yes " << indice << endl;

        } else{

            cout << "No " << indice << endl;
        }
    }

    return 0;
}