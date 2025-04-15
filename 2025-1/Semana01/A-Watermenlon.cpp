/*
 * Problema: Watermelon
 *
 * A Sociedade Brasileira de Ciência Teórica e Computacional (SBCTC) está organizando um grande
 * congresso, e todos os participantes devem receber bilhetes de entrada.
 *
 * Para garantir que ninguém fique sem ingresso e que a distribuição seja justa, a organização decidiu
 * dividir os bilhetes em exatamente dois grupos, mas não é necessário que eles sejam do mesmo tamanho.
 *
 * No entanto, por razões logísticas, a SBCTC só pode dividir os bilhetes em grupos em que cada grupo
 * tem uma quantidade par de ingressos. Caso contrário, a divisão não será possível.
 *
 * Entrada:
 * A entrada consiste de um único número inteiro b (1 ≤ b ≤ 100), representando a quantidade total
 * de bilhetes disponíveis.
 *
 * Saída:
 * Imprima "YES" se for possível dividir os bilhetes igualmente em dois grupos cada um com uma
 * quantidade par de ingressos. Caso contrário, imprima "NO".
 *
 * Exemplo:
 * Entrada: 8
 * Saída: YES
 *
 * Nota:
 * Por exemplo, a SBCTC pode dividir 8 bilhetes em um grupo de 2 e outro de 6
 * (outra variação: dois grupos de 4 bilhetes cada).
 */

#include <iostream>
using namespace std;

int main() {
    int entradas;
    cin >> entradas;

    if (entradas %2 == 0 && entradas > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}