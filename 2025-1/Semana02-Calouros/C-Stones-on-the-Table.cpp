/*
 * C - Pedras na Mesa
 *
 * Existem n pedras sobre a mesa em uma fileira, cada uma delas pode ser
 * vermelha, verde ou azul. Conte o número mínimo de pedras a serem retiradas
 * da mesa para que quaisquer duas pedras vizinhas tenham cores diferentes.
 * Pedras em uma fileira são consideradas vizinhas se não houver outras pedras
 * entre elas.
 *
 * Entrada
 * A primeira linha contém um inteiro n (1 <= n <= 50) — o número de pedras
 * na mesa.
 *
 * A próxima linha contém a string s, que representa as cores das pedras.
 * Consideraremos as pedras na fileira numeradas de 1 a n da esquerda para a
 * direita. Então, o i-ésimo caractere s é igual a "R", se a i-ésima pedra for
 * vermelha, "G", se for verde e "B", se for azul.
 *
 * Saída
 * Imprima um único inteiro — a resposta para o problema.
 *
 * Exemplos
 *
 * Entrada:
 * 3
 * RRG
 * Saída:
 * 1
 *
 * Entrada:
 * 5
 * RRRRR
 * Saída:
 * 4
 *
 * Entrada:
 * 4
 * BRBG
 * Saída:
 * 0
 */