/*
F – Sets‑STL

Conjuntos (sets) fazem parte da STL do C++ e armazenam elementos ÚNICOS em ordem crescente.
Principais operações:

Declaração:
    set<int> s;              // cria um conjunto de inteiros

Tamanho:
    int length = s.size();   // devolve o tamanho do conjunto

Inserção:
    s.insert(x);             // insere o inteiro x em s

Remoção:
    s.erase(val);            // remove val de s (se existir)

Busca:
    set<int>::iterator it = s.find(val); // ponteiro para val ou s.end() se não existir

--------------------------------------------------------------------
Problema

Você receberá Q consultas, cada uma de um dos três tipos:

1 x : adicione o inteiro x ao conjunto.  
2 x : remova o inteiro x do conjunto (se não estiver presente, não faça nada).  
3 x : se x estiver no conjunto, imprima "Yes"; caso contrário, imprima "No".

Entrada  
Q  
Q linhas, cada uma contendo dois inteiros y e x, onde y é o tipo da consulta e x o valor.

Restrições  
1 ≤ Q ≤ 10⁵  
1 ≤ y ≤ 3  
1 ≤ x ≤ 10⁹

Saída  
Para cada consulta do tipo 3 imprima "Yes" ou "No" em sua própria linha.
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    int q;
    cin >> q;

    set<long long> s;
    while (q--) {
        int y;
        long long x;
        cin >> y >> x;

        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else {
            cout << (s.find(x) != s.end() ? "Yes" : "No") << '\n';
        }
    }

    return 0;
}
