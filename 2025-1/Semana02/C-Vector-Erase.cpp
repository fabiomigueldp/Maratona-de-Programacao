/*
 * Problema: C - Vector-Erase (Remoção em Vetor)
 *
 * Descrição:
 * Você recebe um vetor inicial com N inteiros. Em seguida, são fornecidas
 * duas "consultas" que, na verdade, são operações de remoção.
 *
 * Primeira Operação:
 * - Você recebe um inteiro `x`, que denota uma posição (base 1) no vetor.
 * - O valor nesta posição `x` precisa ser removido do vetor.
 *
 * Segunda Operação:
 * - Você recebe dois inteiros, `a` e `b`, que denotam um intervalo de posições (base 1)
 *   no vetor.
 * - Os elementos que estão dentro deste intervalo devem ser removidos.
 * - O intervalo é inclusivo para `a` e exclusivo para `b`. Ou seja, remove
 *   elementos das posições `a`, `a+1`, ..., `b-1`.
 * - Importante: Esta segunda operação é realizada no vetor que resultou *após*
 *   a execução da primeira operação de remoção.
 *
 * Funções Úteis de Vector (mencionadas no enunciado original):
 *
 * - `erase(iterator position)`:
 *   - Remove o elemento presente na posição apontada pelo iterador.
 *   - Ex: `v.erase(v.begin() + 4);` (remove o quinto elemento do vetor v, pois os índices dos iteradores começam em 0).
 *   - Para remover o elemento na posição `p` (base 1), você usaria `v.erase(v.begin() + p - 1);`
 *
 * - `erase(iterator start, iterator end)`:
 *   - Remove os elementos no intervalo [start, end). Ou seja, começa em `start` (inclusivo)
 *     e vai até `end` (exclusivo).
 *   - Ex: `v.erase(v.begin() + 2, v.begin() + 5);` (remove os elementos do terceiro ao quinto, ou seja, índices 2, 3 e 4).
 *   - Para remover o intervalo de posições base 1 de `a` (inclusivo) até `b` (exclusivo),
 *     você usaria `v.erase(v.begin() + a - 1, v.begin() + b - 1);`
 *
 * Formato de Entrada:
 * - A primeira linha contém um inteiro N (o número inicial de inteiros no vetor).
 * - A segunda linha contém N inteiros separados por espaços (os elementos do vetor).
 * - A terceira linha contém um único inteiro `x` (a posição base 1 do elemento a ser removido na primeira operação).
 * - A quarta linha contém dois inteiros `a` e `b` (as posições base 1 que definem o intervalo [a, b) a ser removido na segunda operação).
 *
 * Restrições:
 * - 1 <= N <= 10^5
 * - 1 <= x <= N (posição válida no vetor *original*)
 * - 1 <= a < b <= N (posições válidas relativas ao tamanho *original*, mas a operação atua no vetor *modificado*)
 * - Os valores dos inteiros no vetor não foram explicitamente restringidos, mas geralmente cabem em um `int`.
 *
 * Formato de Saída:
 * - Na primeira linha, imprima o tamanho final do vetor após as duas operações de remoção.
 * - Na segunda linha, imprima os elementos restantes no vetor, separados por um espaço.
 *
 * Exemplo:
 *
 * Entrada:
 * 6
 * 1 4 6 2 8 9
 * 2
 * 2 4
 *
 * Saída:
 * 3
 * 1 8 9
 *
 * Explicação do Exemplo:
 * 1. Vetor inicial: {1, 4, 6, 2, 8, 9}
 * 2. Primeira consulta/operação: remover o elemento na posição x=2 (base 1). O elemento é 4.
 *    O índice correspondente (base 0) é 2 - 1 = 1.
 *    Após `v.erase(v.begin() + 1);`, o vetor modificado é: {1, 6, 2, 8, 9} (Tamanho 5)
 * 3. Segunda consulta/operação: remover o intervalo de posições [a, b) = [2, 4) (base 1) do *vetor modificado*.
 *    Isso significa remover os elementos nas posições 2 e 3 (base 1) do vetor atual.
 *    Os elementos são 6 e 2.
 *    Os índices correspondentes (base 0) são a-1 = 1 e b-1 = 3.
 *    Após `v.erase(v.begin() + 1, v.begin() + 3);`, o vetor final é: {1, 8, 9}
 * 4. O tamanho final é 3.
 * 5. Os elementos finais são 1, 8, 9.
 */

 #include <iostream>
 #include <vector>
 using namespace std;
 
 int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
 
     int N;
     cin >> N;
     vector<int> v(N);
     for (int i = 0; i < N; i++) {
         cin >> v[i];
     }
 
     int x;
     cin >> x;
     int a, b;
     cin >> a >> b;
 
     v.erase(v.begin() + x - 1);
     v.erase(v.begin() + a - 1, v.begin() + b - 1);
 
     cout << v.size() << "\n";
     for (int i = 0; i < (int)v.size(); i++) {
         cout << v[i] << (i + 1 < (int)v.size() ? ' ' : '\n');
     }
 
     return 0;
 }
 
