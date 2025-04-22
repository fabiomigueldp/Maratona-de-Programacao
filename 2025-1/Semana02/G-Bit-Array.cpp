/*
G – Bit Array

Você recebe quatro inteiros N, S, P e Q. Com eles é criada a sequência a:

    a[0] = S          (mod 2³¹)
    para i = 1 … N‑1
        a[i] = (a[i‑1] * P + Q) mod 2³¹

Sua tarefa é imprimir quantos valores distintos aparecem nos primeiros N termos de a.
Como N pode chegar a 10⁸, devemos detectar o ciclo sem armazenar todos os valores,
usando o algoritmo “tartaruga e lebre” (Floyd) para encontrar pré-período μ e período λ.
A resposta é μ + λ.

Entrada  
N S P Q

Saída  
Quantidade de valores distintos.

Exemplo  
Entrada: 3 1 1 1  
Saída:   3
*/

#include <iostream>
#include <cstdint>
using namespace std;
using u64 = uint64_t;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    u64 N, S, P, Q;
    if(!(cin >> N >> S >> P >> Q)) return 0;

    const u64 MASK = (1ull << 31) - 1;

    if (P & 1) {
        cout << N;
        return 0;
    }

    auto f = [&](u64 x){
        return (x * P + Q) & MASK;
    };

    u64 tortoise = f(S);
    u64 hare = f(f(S));
    while (tortoise != hare) {
        tortoise = f(tortoise);
        hare = f(f(hare));
    }

    u64 mu = 0;
    tortoise = S;
    while (tortoise != hare) {
        tortoise = f(tortoise);
        hare = f(hare);
        ++mu;
    }

    u64 lam = 1;
    hare = f(tortoise);
    while (tortoise != hare) {
        hare = f(hare);
        ++lam;
    }

    u64 distinct = mu + lam;
    if (distinct > N) distinct = N;
    cout << distinct;
    return 0;
}
