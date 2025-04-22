/*
 * E - Array Mais Instável
 *
 * São dados dois inteiros n e m. Você precisa construir um array 'a' de comprimento n
 * consistindo de inteiros não negativos (i.e., inteiros maiores ou iguais a zero)
 * tal que a soma dos elementos deste array seja exatamente m e o valor
 * Σ_{i=1}^{n-1} |a_i - a_{i+1}| seja o máximo possível. Lembre-se que |x| é o valor
 * absoluto de x.
 *
 * Em outras palavras, você precisa maximizar a soma das diferenças absolutas entre
 * elementos adjacentes (consecutivos). Por exemplo, se o array a = [1, 3, 2, 5, 5, 0],
 * então o valor acima para este array é |1 - 3| + |3 - 2| + |2 - 5| + |5 - 5| + |5 - 0|
 * = 2 + 1 + 3 + 0 + 5 = 11. Note que este exemplo não mostra a resposta ótima,
 * mas mostra como o valor necessário para um array é calculado.
 *
 * Você precisa responder a t casos de teste independentes.
 *
 * Entrada
 * A primeira linha da entrada contém um inteiro t (1 <= t <= 10^4) — o número de casos
 * de teste. Em seguida, t casos de teste seguem.
 *
 * A única linha do caso de teste contém dois inteiros n e m (1 <= n, m <= 10^9) —
 * o comprimento do array e sua soma, respectivamente.
 *
 * Saída
 * Para cada caso de teste, imprima a resposta — o valor máximo possível de
 * Σ_{i=1}^{n-1} |a_i - a_{i+1}| para o array 'a' consistindo de n inteiros não
 * negativos com a soma m.
 *
 * Exemplos
 *
 * Entrada:
 * 5
 * 1 100
 * 2 2
 * 5 5
 * 2 1000000000
 * 1000000000 1000000000
 *
 * Saída:
 * 0
 * 2
 * 10
 * 1000000000
 * 2000000000
 *
 * Nota
 * No primeiro caso de teste do exemplo, o único array possível é [100] e a resposta
 * é obviamente 0.
 *
 * No segundo caso de teste do exemplo, um dos arrays possíveis é [2, 0] e a resposta é
 * |2 - 0| = 2.
 *
 * No terceiro caso de teste do exemplo, um dos arrays possíveis é [0, 2, 0, 3, 0] e a
 * resposta é |0 - 2| + |2 - 0| + |0 - 3| + |3 - 0| = 10.
 * (Nota do tradutor: A explicação da nota para o terceiro exemplo parece descrever
 * um array como [0, m, 0, 0, 0] ou similar para n=5, m=5. O array [0, 5, 0, 0, 0]
 * tem soma 5 e valor |0-5| + |5-0| + |0-0| + |0-0| = 5 + 5 = 10. Este arranjo
 * [0, m, 0, ..., 0] maximiza a soma das diferenças para n > 2, resultando em 2m).
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

