#include <bits/stdc++.h>
#include <malloc.h>
using namespace std;

// --- Fibonacci com memoização recursiva ---
long long fib_memo_rec(int i, vector<long long>& memo) {
    if (i < 2) return 1;
    if (memo[i] != -1) return memo[i];
    return memo[i] = fib_memo_rec(i-1, memo) + fib_memo_rec(i-2, memo);
}

// --- Fibonacci iterativo ---
long long fib_iter(int n, vector<long long>& dp) {
    if (n < 2) return 1;
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}

int main() {
    int n;
    cout << "Digite n: ";
    if (!(cin >> n)) return 0;

    cout << "\nCalculando Fibonacci de ordem " << n << "...\n\n";

    // --- Versão com memoização ---
    {
        // captura memória antes
        struct mallinfo mem_before = mallinfo();

        vector<long long> memo(n+1, -1);
        auto t0 = chrono::high_resolution_clock::now();
        long long res_memo = fib_memo_rec(n, memo);
        auto t1 = chrono::high_resolution_clock::now();

        // captura memória logo após
        struct mallinfo mem_after = mallinfo();

        double ms = chrono::duration<double, milli>(t1 - t0).count();
        long long heap_bytes = mem_after.uordblks - mem_before.uordblks;

        cout << "[Memoização] Resultado: " 
             << res_memo << "\n";
        cout << "[Memoização] Tempo de execução: " 
             << ms << " ms\n";
        cout << "[Memoização] Uso de memória (heap): " 
             << heap_bytes << " bytes\n\n";
    }

    // --- Versão iterativa ---
    {
        struct mallinfo mem_before = mallinfo();

        vector<long long> dp(n+1);
        auto t0 = chrono::high_resolution_clock::now();
        long long res_iter = fib_iter(n, dp);
        auto t1 = chrono::high_resolution_clock::now();

        struct mallinfo mem_after = mallinfo();

        double ms = chrono::duration<double, milli>(t1 - t0).count();
        long long heap_bytes = mem_after.uordblks - mem_before.uordblks;

        cout << "[Iterativo] Resultado: " 
             << res_iter << "\n";
        cout << "[Iterativo] Tempo de execução: " 
             << ms << " ms\n";
        cout << "[Iterativo] Uso de memória (heap): " 
             << heap_bytes << " bytes\n";
    }

    return 0;
}
