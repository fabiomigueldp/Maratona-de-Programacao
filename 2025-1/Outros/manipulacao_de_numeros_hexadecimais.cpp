// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: Manipulação de Números Hexadecimais
// ======================================================================

// DESCRIÇÃO
// Numa universidade de prestígio, a professora Yeda é reconhecida
// por sua dedicação e profundo conhecimento em circuitos digitais. A sua capacidade de simplificar
// conceitos complexos é amplamente admirada por seus alunos.
// Durante uma aula específica, a Profª Yeda abordou a representação de números em diferentes
// bases – binário, decimal e hexadecimal – e demonstrou como essas representações são
// utilizadas em operações matemáticas nos circuitos digitais.
//
// Para reforçar o entendimento do conceito e torná-lo mais interessante, ela propôs um desafio
// aos alunos: um exercício de programação que envolve a manipulação de números hexadecimais.
// O exercício foi estruturado para realizar três operações distintas – tabuada, potência e
// conversão para binário – a depender da opção selecionada pelo usuário.
//
// ENTRADA
// O programa deve receber um número hexadecimal e um número que representa a operação escolhida:
//
// * 1: o programa executa uma tabuada do número hexadecimal fornecido, multiplicando-o por
// todos os números de 1 a 16 (em hexadecimal) e imprimindo os resultados.
// * 2: o programa solicita um número inteiro n. Em seguida, calcula a potência do número
// hexadecimal fornecido para todos os números de 1 até n e imprime os resultados.
// * 3: o programa imprime o hexadecimal recebido em formato binário.
//
// SAÍDA
// A saída do programa vai variar conforme a opção escolhida na entrada:
//
// * 1: para cada número de 1 a 16 (em hexadecimal), o programa imprimirá uma linha com o
// formato H x X = R, onde H é o número hexadecimal fornecido, X é o número atual na sequência
// de 1 a 16, e R é o produto entre H e X.
// * 2: para cada número de 1 até o número inteiro fornecido n, o programa imprimirá uma linha
// com o formato H elevado a Y = R, onde H é o número hexadecimal fornecido, Y é o número atual
// na sequência de 1 até o número inteiro fornecido, e R é o número H elevado à potência Y.
// * 3: a saída será no formato H em binário é: B, onde H é o número hexadecimal fornecido e B é
// a representação binária do número H.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string numeroHex;
    int opcao;
    
    // Leitura dos dados de entrada
    cin >> numeroHex >> opcao;
    
    // Converter o número hexadecimal para decimal
    int valorDecimal = 0;
    for (char c : numeroHex) {
        valorDecimal *= 16;
        if (c >= '0' && c <= '9') {
            valorDecimal += (c - '0');
        } else if (c >= 'A' && c <= 'F') {
            valorDecimal += (c - 'A' + 10);
        } else if (c >= 'a' && c <= 'f') {
            valorDecimal += (c - 'a' + 10);
        }
    }
    
    // Função para converter decimal para hexadecimal
    auto decimalParaHexadecimal = [](int valor) -> string {
        if (valor == 0) return "0";
        
        string resultado = "";
        while (valor > 0) {
            int resto = valor % 16;
            if (resto < 10) {
                resultado = char(resto + '0') + resultado;
            } else {
                resultado = char(resto - 10 + 'A') + resultado;
            }
            valor /= 16;
        }
        return resultado;
    };
    
    // Função para converter decimal para binário
    auto decimalParaBinario = [](int valor) -> string {
        if (valor == 0) return "0";
        
        string resultado = "";
        while (valor > 0) {
            resultado = char((valor % 2) + '0') + resultado;
            valor /= 2;
        }
        return resultado;
    };

    // Executar a operação escolhida
    switch (opcao) {
        case 1: {
            // Tabuada em hexadecimal (1 a 16)
            for (int i = 1; i <= 16; i++) {
                int produto = valorDecimal * i;
                string iHex = decimalParaHexadecimal(i);
                string produtoHex = decimalParaHexadecimal(produto);
                
                cout << numeroHex << " x " << iHex << " = " << produtoHex << endl;
            }
            break;
        }
        
        case 2: {
            // Potências
            int n;
            cin >> n;
            
            for (int i = 1; i <= n; i++) {
                // Calcular potência manualmente
                int potencia = 1;
                for (int j = 0; j < i; j++) {
                    potencia *= valorDecimal;
                }
                
                string potenciaHex = decimalParaHexadecimal(potencia);
                
                cout << numeroHex << " elevado a " << i << " = " << potenciaHex << endl;
            }
            break;
        }
        
        case 3: {
            // Conversão para binário
            string binario = decimalParaBinario(valorDecimal);
            
            cout << numeroHex << " em binário é: " << binario << endl;
            break;
        }
        
        default:
            cout << "Opção inválida!" << endl;
    }
    
    return 0;
}