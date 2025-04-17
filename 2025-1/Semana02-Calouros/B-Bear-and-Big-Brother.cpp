/*
 * B - Urso e Irmão Mais Velho
 *
 * O urso Limak quer se tornar o maior dos ursos, ou pelo menos ficar maior
 * que seu irmão Bob.
 *
 * No momento, Limak e Bob pesam a e b, respectivamente. É garantido que o
 * peso de Limak é menor ou igual ao peso de seu irmão.
 *
 * Limak come muito e seu peso triplica a cada ano, enquanto o peso de Bob
 * dobra a cada ano.
 *
 * Após quantos anos completos Limak se tornará estritamente maior (estritamente
 * mais pesado) que Bob?
 *
 * Entrada
 * A única linha da entrada contém dois inteiros a e b (1 <= a <= b <= 10) —
 * o peso de Limak e o peso de Bob, respectivamente.
 *
 * Saída
 * Imprima um inteiro, denotando o número inteiro de anos após os quais Limak
 * se tornará estritamente maior que Bob.
 *
 * Exemplos
 *
 * Entrada:
 * 4 7
 * Saída:
 * 2
 *
 * Entrada:
 * 4 9
 * Saída:
 * 3
 *
 * Entrada:
 * 1 1
 * Saída:
 * 1
 *
 * Nota
 * No primeiro exemplo, Limak pesa 4 e Bob pesa 7 inicialmente. Após um ano,
 * seus pesos são 4 * 3 = 12 e 7 * 2 = 14, respectivamente (um peso é triplicado
 * enquanto o outro é dobrado). Limak ainda não é maior que Bob. Após o segundo
 * ano, os pesos são 36 e 28, então o primeiro peso é maior que o segundo.
 * Limak ficou maior que Bob após dois anos, então você deve imprimir 2.
 *
 * No segundo exemplo, os pesos de Limak e Bob nos próximos anos são: 12 e 18,
 * depois 36 e 36, e finalmente 108 e 72 (após três anos). A resposta é 3.
 * Lembre-se que Limak quer ser maior que Bob e ele não ficará satisfeito com
 * pesos iguais.
 *
 * No terceiro exemplo, Limak se torna maior que Bob após o primeiro ano. Seus
 * pesos serão 3 e 2 então.
 */

 #include <iostream>

 using namespace std;

 int main() {
    int a, b, y = 0;

    cin >> a >> b;

    while (a < b) {
        a *= 3;
        b *= 2;
        y ++;
    }

    cout << y << endl;

    return 0;
 }