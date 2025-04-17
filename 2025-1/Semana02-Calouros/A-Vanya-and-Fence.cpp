/*
 * A - Vanya e a Cerca
 *
 * Vanya e seus amigos estão caminhando ao longo de uma cerca de altura h e não querem
 * que o guarda os note. Para conseguir isso, a altura de cada um dos amigos
 * não deve exceder h. Se a altura de alguma pessoa for maior que h, ela pode
 * se abaixar e então certamente não será notada pelo guarda. A altura da
 * i-ésima pessoa é igual a a[i].
 *
 * Considere que a largura da pessoa andando normalmente é igual a 1, enquanto
 * a largura da pessoa abaixada é igual a 2. Os amigos querem conversar entre si
 * enquanto caminham, então eles gostariam de andar em uma única fila. Qual é a
 * largura mínima da estrada necessária para que os amigos possam caminhar em
 * fila e permanecerem despercebidos pelo guarda?
 *
 * Entrada
 * A primeira linha da entrada contém dois inteiros n e h (1 <= n <= 1000, 1 <= h <= 1000)
 * — o número de amigos e a altura da cerca, respectivamente.
 *
 * A segunda linha contém n inteiros a[i] (1 <= a[i] <= 2h), onde o i-ésimo inteiro
 * é igual à altura da i-ésima pessoa.
 *
 * Saída
 * Imprima um único inteiro — a largura mínima possível válida da estrada.
 *
 * Exemplos
 *
 * Entrada:
 * 3 7
 * 4 5 14
 * Saída:
 * 4
 *
 * Entrada:
 * 6 1
 * 1 1 1 1 1 1
 * Saída:
 * 6
 *
 * Entrada:
 * 6 5
 * 7 6 8 9 10 5
 * Saída:
 * 11
 *
 * Nota
 * No primeiro exemplo, apenas a pessoa número 3 precisa se abaixar, então a
 * largura necessária é igual a 1 + 1 + 2 = 4.
 *
 * No segundo exemplo, todos os amigos são baixos o suficiente e ninguém precisa
 * se abaixar, então a largura 1 + 1 + 1 + 1 + 1 + 1 = 6 é suficiente.
 *
 * No terceiro exemplo, todas as pessoas precisam se abaixar, exceto a última.
 * A largura mínima necessária da estrada é igual a 2 + 2 + 2 + 2 + 2 + 1 = 11.
 */