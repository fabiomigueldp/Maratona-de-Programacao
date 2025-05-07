// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: A - Presents: Encontrar quem deu presente para cada amigo
// ======================================================================

// O pequeno Petya gosta muito de presentes. Recentemente, ele recebeu um laptop novo como
// presente de Ano Novo de sua mãe. Ele imediatamente decidiu dá-lo a outra pessoa, pois o que
// pode ser mais agradável do que dar presentes a alguém? E nesta ocasião, ele organizou uma
// festa de Ano Novo em sua casa e convidou n amigos.
//
// Se há uma coisa que Petya gosta mais do que receber presentes, é observar os outros dando
// presentes a alguém. Assim, ele escondeu o laptop em segurança até o próximo Ano Novo e
// decidiu observar seus amigos trocando presentes enquanto ele não participa do processo.
// Ele numerou todos os seus amigos com inteiros de 1 a n. Petya lembrou que um amigo número i
// deu um presente a um amigo número pi. Ele também lembrou que cada um de seus amigos recebeu
// exatamente um presente.
//
// Agora Petya quer saber para cada amigo i o número do amigo que lhe deu um presente.
//
// Entrada
// A primeira linha contém um inteiro n (1 <= n <= 100) — a quantidade de amigos que Petya
// convidou para a festa. A segunda linha contém n inteiros separados por espaço: o i-ésimo
// número é pi — o número do amigo que recebeu o presente do amigo i (ou seja, amigo i deu para pi).
// É garantido que cada amigo recebeu exatamente um presente. É possível que alguns amigos não
// compartilhem as ideias de Petya de dar presentes a outra pessoa. Esses amigos deram os presentes
// a si mesmos.
//
// Saída
// Imprima n inteiros separados por espaço: o i-ésimo número deve ser igual ao número do amigo
// que deu um presente ao amigo número i.
//
// Exemplos
// Entrada
// 4
// 2 3 4 1
// Saída
// 4 1 2 3
// // Explicação: Amigo 1 deu para 2, 2 deu para 3, 3 deu para 4, 4 deu para 1.
// // Logo, quem deu para 1? Foi o 4. Quem deu para 2? Foi o 1. Quem deu para 3? Foi o 2. Quem deu para 4? Foi o 3.
//
// Entrada
// 3
// 1 3 2
// Saída
// 1 3 2
// // Explicação: Amigo 1 deu para 1, 2 deu para 3, 3 deu para 2.
// // Logo, quem deu para 1? Foi o 1. Quem deu para 2? Foi o 3. Quem deu para 3? Foi o 2.
//
// Entrada
// 2
// 1 2
// Saída
// 1 2
// // Explicação: Amigo 1 deu para 1, Amigo 2 deu para 2.
// // Logo, quem deu para 1? Foi o 1. Quem deu para 2? Foi o 2.

/*
 * Dica de Bibliotecas e Comandos C++:
 *
 * Bibliotecas comuns:
 * #include <iostream> // Para entrada (cin) e saída (cout)
 * #include <vector>   // Para usar vetores (arrays dinâmicos) se preferir em vez de arrays estáticos
 * #include <map>      // Pode ser útil para mapear quem deu para quem, embora um array simples seja suficiente
 * // dado o limite de n <= 100 e a numeração de 1 a n.
 *
 * Estrutura de Dados:
 * Você precisará ler n.
 * Depois, leia os n números pi. A informação dada é: "o amigo i deu um presente para o amigo pi".
 * Você precisa encontrar, para cada amigo j (de 1 a n), qual amigo i deu o presente para ele.
 * Um array (ou vetor) de tamanho n+1 (para indexar de 1 a n) pode ser usado para armazenar a resposta.
 * Por exemplo, `int quem_deu[n+1];`
 * Ao ler que o amigo `i` deu para `pi`, você sabe que `quem_deu[pi] = i;`
 * Após ler todas as entradas, imprima os valores de `quem_deu[1]`, `quem_deu[2]`, ..., `quem_deu[n]`.
 *
 * Exemplo de Leitura e Processamento:
 *
 * int n;
 * std::cin >> n;
 * int quem_recebeu[101]; // quem_recebeu[i] guarda para quem o amigo i deu o presente
 * int quem_deu[101];     // quem_deu[j] guarda quem deu o presente para o amigo j
 *
 * for (int i = 1; i <= n; ++i) {
 * std::cin >> quem_recebeu[i];
 * int presenteado = quem_recebeu[i];
 * quem_deu[presenteado] = i; // Guarda que o amigo 'i' deu para o amigo 'presenteado'
 * }
 *
 * // Impressão da resposta
 * for (int i = 1; i <= n; ++i) {
 * std::cout << quem_deu[i] << (i == n ? "" : " "); // Imprime com espaço, exceto o último
 * }
 * std::cout << std::endl;
 *
 * Comando de Compilação (exemplo usando g++):
 * g++ seu_codigo.cpp -o seu_programa -std=c++17 -Wall -Wextra
 */


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[p[i] - 1] = i + 1;
    }
    
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}

