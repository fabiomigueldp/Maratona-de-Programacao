// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: Presentes: Determinar quem deu um presente para cada amigo, dada a 
// informação de quem recebeu o presente de cada amigo.
// ======================================================================

// O Pequeno Petya gosta muito de presentes. Recentemente, ele recebeu um novo 
// laptop como presente de Ano Novo de sua mãe. Ele imediatamente decidiu dá-lo 
// para outra pessoa, pois o que pode ser mais agradável do que dar presentes a alguém?
// E, nesta ocasião, ele organizou uma festa de Ano Novo em sua casa e convidou n amigos.
// Se há uma coisa que Petya gosta mais do que receber presentes, é observar os outros 
// dando presentes para alguém. Assim, ele guardou o laptop em segurança até o próximo 
// Ano Novo e decidiu observar seus amigos trocando presentes enquanto ele não participava 
// do processo. Ele numerou todos os seus amigos com inteiros de 1 a n. Petya lembrou-se que 
// o amigo número i deu um presente para o amigo número pi. Ele também se lembrou que cada um 
// de seus amigos recebeu exatamente um presente.
// Agora Petya quer saber, para cada amigo i, o número do amigo que lhe deu um presente.
//
// Entrada
// A primeira linha contém um inteiro n (1 ≤ n ≤ 100) — a quantidade de amigos que Petya convidou 
// para a festa. A segunda linha contém n inteiros separados por espaço: o i-ésimo número é 
// pi — o número do amigo que recebeu um presente do amigo número i. É garantido que cada amigo recebeu 
// exatamente um presente. É possível que alguns amigos não compartilhem as ideias de Petya de dar 
// presentes para outra pessoa. Esses amigos deram os presentes para si mesmos.
//
// Saída
// Imprima n inteiros separados por espaço: o i-ésimo número deve ser igual ao número do amigo que deu 
// um presente ao amigo número i.
//
// Exemplos
// Entrada
// 4
// 2 3 4 1
// Saída
// 4 1 2 3
//
// Entrada
// 3
// 1 3 2
// Saída
// 1 3 2
//
// Entrada
// 2
// 1 2
// Saída
// 1 2  


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

