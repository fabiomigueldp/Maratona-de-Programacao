/*
 * ============================================================================
 * Pointers em C++
 * ============================================================================
 *
 * Um ponteiro (pointer) em C++ é usado para compartilhar um endereço de memória
 * entre diferentes contextos (principalmente funções). Eles são usados quando
 * uma função precisa modificar o conteúdo de uma variável, mas não tem
 * posse (ownership) dela.
 *
 * Para acessar o endereço de memória de uma variável, `val`, preceda-a com o
 * sinal &. Por exemplo, `&val` retorna o endereço de memória de `val`.
 *
 * Este endereço de memória é atribuído a um ponteiro e pode ser compartilhado
 * entre funções. Por exemplo, `int* p = &val;` atribui o endereço de memória
 * de `val` ao ponteiro `p`. Para acessar o conteúdo da memória apontada,
 * preceda o nome da variável do ponteiro com um *. Por exemplo, `*p` retornará
 * o valor armazenado em `val` e qualquer modificação nele será realizada em `val`.
 *
 * Exemplo de Código:
 *
 * 1 void increment(int *v) {
 * 2     (*v)++;
 * 3 }
 * 4
 * 5 int main() {
 * 6     int a;
 * 7     scanf("%d", &a);
 * 8     increment(&a);
 * 9     printf("%d", a);
 * 10     return 0;
 * 11 }
 *
 * ============================================================================
 * Descrição da Função
 * ============================================================================
 *
 * Complete a função `update` no editor abaixo.
 *
 * update possui os seguintes parâmetros:
 * - int* a: um inteiro
 * - int* b: um inteiro
 *
 * Retornos:
 * - A função é declarada com tipo de retorno `void`, então não há valor a retornar.
 * - Modifique os valores na memória de forma que `a` contenha sua soma e `b`
 * contenha sua diferença absoluta.
 * - a' = a + b
 * - b' = |a - b|
 *
 * ============================================================================
 * Formato de Entrada
 * ============================================================================
 *
 * A entrada conterá dois inteiros, `a` e `b`, separados por uma nova linha.
 *
 * ============================================================================
 * Exemplo
 * ============================================================================
 *
 * Entrada:
 * 4
 * 5
 *
 * Saída:
 * 9
 * 1
 *
 * ============================================================================
 * Explicação
 * ============================================================================
 *
 * a' = 4 + 5 = 9
 * b' = |4 - 5| = 1
 *
 */

#include <iostream>

void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
