/*
H – Sansa and XOR

Dado um array, forme todos os sub‑arrays contíguos, compute o XOR de cada um
e depois faça o XOR de todos esses resultados.  Imprima o valor obtido.

Observação conhecida:  
– Se n (tamanho do array) é par, o resultado é 0.  
– Se n é ímpar, apenas os elementos em posições pares (0‑based) permanecem no XOR final.

Entrada  
t – número de casos de teste  
Para cada caso:  
    n  
    n inteiros

Saída  
Para cada caso uma linha com o resultado.

Restrições  
1 ≤ t ≤ 5  
2 ≤ n ≤ 10⁵  
1 ≤ arr[i] ≤ 10⁸
*/

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = 0;
        for (long long i = 0; i < n; ++i) {
            long long v;
            cin >> v;
            if ((n & 1) && (i & 1) == 0) ans ^= v;
        }
        cout << ans << '\n';
    }
    return 0;
}
