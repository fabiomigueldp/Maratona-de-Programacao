/*
I – Find Maximum Index Product

Para cada elemento a[i] (1‑based) de uma lista com N inteiros:  
Left(i)  = índice mais próximo j < i com a[j] > a[i] (ou 0 se não existir)  
Right(i) = índice mais próximo k > i com a[k] > a[i] (ou 0 se não existir)

Defina IndexProduct(i) = Left(i) × Right(i).  
Imprima o maior IndexProduct dentre todos os i.

Entrada  
N  
N inteiros a[1..N]

Saída  
Maior IndexProduct.

Restrições  
1 ≤ N ≤ 10⁵  
1 ≤ a[i] ≤ 10⁹

Exemplo  
Entrada:  
5  
5 4 3 4 5  
Saída: 8
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> L(n), R(n);
    stack<int> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        L[i] = st.empty() ? 0 : st.top() + 1;
        st.push(i);
    }

    while (!st.empty()) st.pop();

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        R[i] = st.empty() ? 0 : st.top() + 1;
        st.push(i);
    }

    long long best = 0;
    for (int i = 0; i < n; ++i) {
        long long prod = 1LL * L[i] * R[i];
        if (prod > best) best = prod;
    }

    cout << best << '\n';
    return 0;
}
