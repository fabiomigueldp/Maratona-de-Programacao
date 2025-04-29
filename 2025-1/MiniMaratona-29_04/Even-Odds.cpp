// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: k-ésimo Número na Permutação: Encontra o k-ésimo número na sequência 
// onde os ímpares de 1 a n vêm primeiro, seguidos pelos pares.
// ======================================================================

// Sendo um inconformista, Volodya está descontente com o estado atual das coisas, 
// particularmente com a ordem dos números naturais (número natural é um número inteiro positivo). 
// Ele está determinado a reorganizá-los. Mas há muitos números naturais, então Volodya decidiu 
// começar com os $n$ primeiros. Ele escreve a seguinte sequência de números: primeiramente todos 
// os inteiros ímpares de $1$ a $n$ (em ordem crescente), depois todos os inteiros pares de $1$ a 
// $n$ (também em ordem crescente). Ajude nosso herói a descobrir qual número estará na posição $k$.
//
// Entrada
// A única linha de entrada contém os inteiros $n$ e $k$ ($1 \le k \le n \le 10^{12}$).
// Por favor, não use o especificador %lld para ler ou escrever inteiros de 64 bits em C++. 
// É preferível usar os streams cin, cout ou o especificador %I64d.
//
// Saída
// Imprima o número que estará na posição $k$ após as manipulações de Volodya.
//
// Exemplos
// Entrada
// 10 3
// Saída
// 5
//
// Entrada
// 7 7
// Saída
// 6
//
// Nota
// No primeiro exemplo, a sequência de Volodya será assim: {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}. 
// O terceiro lugar na sequência é, portanto, ocupado pelo número 5.

#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;


    if (k <= oddCount) {
        cout << 2 * k - 1 << endl;
    } else {

        cout << 2 * (k - oddCount) << endl;
    }

    return 0;
}