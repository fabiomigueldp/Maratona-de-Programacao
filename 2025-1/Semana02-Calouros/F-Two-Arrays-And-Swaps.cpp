/*
 * F - Dois Arrays e Trocas
 *
 * São dados dois arrays 'a' e 'b', ambos consistindo de n inteiros positivos
 * (maiores que zero). Você também recebe um inteiro k.
 *
 * Em um movimento, você pode escolher dois índices i e j (1 <= i, j <= n) e
 * trocar a[i] e b[j] (ou seja, a[i] se torna b[j] e vice-versa). Note que i e j
 * podem ser iguais ou diferentes (em particular, trocar a[2] com b[2] ou
 * trocar a[3] e b[9] são movimentos aceitáveis).
 *
 * Sua tarefa é encontrar a soma máxima possível que você pode obter no array 'a'
 * se você puder fazer no máximo k desses movimentos (trocas).
 *
 * Você precisa responder a t casos de teste independentes.
 *
 * Entrada
 * A primeira linha da entrada contém um inteiro t (1 <= t <= 200) — o número
 * de casos de teste. Em seguida, t casos de teste seguem.
 *
 * A primeira linha do caso de teste contém dois inteiros n e k
 * (1 <= n <= 30; 0 <= k <= n) — o número de elementos em 'a' e 'b' e o
 * número máximo de movimentos que você pode fazer.
 * A segunda linha do caso de teste contém n inteiros a_1, a_2, ..., a_n
 * (1 <= a_i <= 30), onde a_i é o i-ésimo elemento de 'a'.
 * A terceira linha do caso de teste contém n inteiros b_1, b_2, ..., b_n
 * (1 <= b_i <= 30), onde b_i é o i-ésimo elemento de 'b'.
 *
 * Saída
 * Para cada caso de teste, imprima a resposta — a soma máxima possível que você
 * pode obter no array 'a' se você puder fazer no máximo k trocas.
 *
 * Exemplos
 *
 * Entrada:
 * 5
 * 2 1
 * 1 2
 * 3 4
 * 5 5
 * 5 5 6 6 5
 * 1 2 5 4 3
 * 5 3
 * 1 2 3 4 5
 * 10 9 10 10 9
 * 4 0
 * 2 2 4 3
 * 2 4 2 3
 * 4 4
 * 1 2 2 1
 * 4 4 5 4
 *
 * Saída:
 * 6
 * 27
 * 39
 * 11
 * 17
 *
 * Nota
 * No primeiro caso de teste do exemplo, você pode trocar a_1 = 1 e b_2 = 4,
 * então a = [4, 2] e b = [3, 1]. A soma de 'a' é 4 + 2 = 6.
 *
 * No segundo caso de teste do exemplo, você não precisa trocar nada. A soma
 * inicial de 'a' é 5 + 5 + 6 + 6 + 5 = 27.
 *
 * No terceiro caso de teste do exemplo, você pode trocar a_1 = 1 e b_1 = 10,
 * a_3 = 3 e b_3 = 10, e a_2 = 2 e b_4 = 10 (3 trocas), então
 * a = [10, 10, 10, 4, 5] e b = [1, 9, 3, 2, 9]. A soma de 'a' é
 * 10 + 10 + 10 + 4 + 5 = 39.
 *
 * No quarto caso de teste do exemplo, você não pode trocar nada (k=0). A soma
 * de 'a' é 2 + 2 + 4 + 3 = 11.
 *
 * No quinto caso de teste do exemplo, você pode fazer até 4 trocas. Trocar
 * a_1=1 com b_3=5, a_2=2 com b_2=4, a_3=2 com b_1=4, a_4=1 com b_4=4 resulta em
 * a = [5, 4, 4, 4] e b = [2, 2, 1, 1]. A soma de 'a' é 5 + 4 + 4 + 4 = 17.
 * (Nota do tradutor: A explicação da nota original sugere trocar os arrays inteiros,
 * o que não é a operação permitida. A explicação aqui segue a operação permitida
 * de trocar elementos individuais a[i] com b[j] para maximizar a soma de 'a'
 * usando no máximo k trocas. A estratégia ótima é trocar os menores elementos de 'a'
 * pelos maiores elementos de 'b', repetido k vezes).
 */