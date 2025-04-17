/*
 * D - Time
 *
 * Um dia, três melhores amigos, Petya, Vasya e Tonya, decidiram formar um time
 * e participar de competições de programação. Os participantes geralmente
 * recebem vários problemas durante as competições. Muito antes do início, os
 * amigos decidiram que implementarão um problema se pelo menos dois deles
 * tiverem certeza sobre a solução. Caso contrário, os amigos não escreverão a
 * solução do problema.
 *
 * Esta competição oferece n problemas aos participantes. Para cada problema,
 * sabemos qual amigo tem certeza sobre a solução. Ajude os amigos a encontrar
 * o número de problemas para os quais eles escreverão uma solução.
 *
 * Entrada
 * A primeira linha de entrada contém um único inteiro n (1 <= n <= 1000) — o
 * número de problemas na competição.
 * Em seguida, n linhas contêm três inteiros cada, cada inteiro é 0 ou 1. Se o
 * primeiro número na linha for igual a 1, então Petya tem certeza sobre a
 * solução do problema, caso contrário, ele não tem certeza. O segundo número
 * mostra a visão de Vasya sobre a solução, o terceiro número mostra a visão de
 * Tonya. Os números nas linhas são separados por espaços.
 *
 * Saída
 * Imprima um único inteiro — o número de problemas que os amigos implementarão
 * na competição.
 *
 * Exemplos
 *
 * Entrada:
 * 3
 * 1 1 0
 * 1 1 1
 * 1 0 0
 * Saída:
 * 2
 *
 * Entrada:
 * 2
 * 1 0 0
 * 0 1 1
 * Saída:
 * 1
 *
 * Nota
 * No primeiro exemplo, Petya e Vasya têm certeza de que sabem como resolver o
 * primeiro problema e todos os três sabem como resolver o segundo problema.
 * Isso significa que eles escreverão soluções para esses problemas. Apenas Petya
 * tem certeza sobre a solução para o terceiro problema, mas isso não é suficiente,
 * então os amigos não o resolverão.
 *
 * No segundo exemplo, os amigos implementarão apenas o segundo problema, pois
 * Vasya e Tonya têm certeza sobre a solução.
 */