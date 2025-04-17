/*
 * H - Palavra
 *
 * Vasya está muito chateado porque muitas pessoas na Net misturam letras maiúsculas
 * e minúsculas em uma única palavra. É por isso que ele decidiu inventar uma
 * extensão para seu navegador favorito que mudaria o registro (maiúsculas/minúsculas)
 * das letras em cada palavra, de modo que ela consistisse apenas de letras minúsculas
 * ou, vice-versa, apenas de letras maiúsculas. Ao mesmo tempo, o menor número
 * possível de letras deve ser alterado na palavra. Por exemplo, a palavra HoUse
 * deve ser substituída por house, e a palavra ViP — por VIP. Se uma palavra
 * contiver um número igual de letras maiúsculas e minúsculas, você deve
 * substituir todas as letras por minúsculas. Por exemplo, maTRIx deve ser
 * substituída por matrix. Sua tarefa é usar o método fornecido em uma determinada
 * palavra.
 *
 * Entrada
 * A primeira linha contém uma palavra s — ela consiste em letras latinas maiúsculas
 * e minúsculas e possui comprimento de 1 a 100.
 *
 * Saída
 * Imprima a palavra corrigida s. Se a palavra dada s tiver estritamente mais
 * letras maiúsculas, transforme a palavra para ser escrita em registro maiúsculo,
 * caso contrário - em registro minúsculo.
 *
 * Exemplos
 *
 * Entrada:
 * HoUse
 * Saída:
 * house
 *
 * Entrada:
 * ViP
 * Saída:
 * VIP
 *
 * Entrada:
 * maTRIx
 * Saída:
 * matrix
 *
 * Nota do Tradutor: A regra de desempate (número igual de maiúsculas e minúsculas
 * resulta em minúsculas) e a regra geral (mais maiúsculas -> maiúsculas, caso
 * contrário -> minúsculas) cobrem todos os casos. O exemplo maTRIx (4 maiúsculas,
 * 2 minúsculas) parece contradizer a regra geral estrita na descrição da Saída se
 * interpretada isoladamente, mas segue a lógica combinada: 4 > 2, então deveria ser
 * MAIUSCULAS. No entanto, o exemplo mostra 'matrix'. A regra que parece ser seguida
 * nos exemplos é: Se count(maiusculas) > count(minusculas), converta para maiusculas.
 * Senão (count(maiusculas) <= count(minusculas)), converta para minusculas.
 */