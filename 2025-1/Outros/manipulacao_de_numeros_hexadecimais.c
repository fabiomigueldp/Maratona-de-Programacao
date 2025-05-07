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

#include <stdio.h>

int main() {
    int numero_hexadecimal, opcao_escolhida, limite_potencia, contador_loop, resultado_calculo, valor_potencia, divisor_impressao, numero_copiado, digito_hexadecimal, valor_caractere;
    char caractere_entrada;

    numero_hexadecimal = 0;

    do {
        if (scanf("%c", &caractere_entrada) != 1) return 1;
    } while (caractere_entrada == ' ' || caractere_entrada == '\n' || caractere_entrada == '\t');

    while (1) {
        if (caractere_entrada >= '0' && caractere_entrada <= '9') valor_caractere = caractere_entrada - '0';
        else if (caractere_entrada >= 'A' && caractere_entrada <= 'F') valor_caractere = caractere_entrada - 'A' + 10;
        else if (caractere_entrada >= 'a' && caractere_entrada <= 'f') valor_caractere = caractere_entrada - 'a' + 10;
        else break;
        numero_hexadecimal = numero_hexadecimal * 16 + valor_caractere;
        if (scanf("%c", &caractere_entrada) != 1) break;
    }

    if (scanf("%d", &opcao_escolhida) != 1) {
        printf("%c", 'O'); printf("%c", 'p'); printf("%c", 'c'); printf("%c", 'a');
        printf("%c", 'o'); printf("%c", ' '); printf("%c", 'i'); printf("%c", 'n');
        printf("%c", 'v'); printf("%c", 'a'); printf("%c", 'l'); printf("%c", 'i');
        printf("%c", 'd'); printf("%c", 'a'); printf("%c", '\n');
        return 1;
    }

    if (opcao_escolhida == 1) {
        contador_loop = 1;
        while (contador_loop <= 16) {
            resultado_calculo = numero_hexadecimal * contador_loop;

            if (numero_hexadecimal == 0) {
                printf("%c", '0');
            } else {
                numero_copiado = numero_hexadecimal;
                divisor_impressao = 1;
                while (divisor_impressao <= numero_copiado / 16) divisor_impressao *= 16;
                while (divisor_impressao > 0) {
                    digito_hexadecimal = numero_copiado / divisor_impressao;
                    printf("%c", digito_hexadecimal < 10 ? '0' + digito_hexadecimal : 'A' + digito_hexadecimal - 10);
                    numero_copiado -= digito_hexadecimal * divisor_impressao;
                    divisor_impressao /= 16;
                }
            }

            printf("%c", ' '); printf("%c", 'x'); printf("%c", ' ');

            if (contador_loop == 0) {
                printf("%c", '0');
            } else {
                numero_copiado = contador_loop;
                divisor_impressao = 1;
                while (divisor_impressao <= numero_copiado / 16) divisor_impressao *= 16;
                while (divisor_impressao > 0) {
                    digito_hexadecimal = numero_copiado / divisor_impressao;
                    printf("%c", digito_hexadecimal < 10 ? '0' + digito_hexadecimal : 'A' + digito_hexadecimal - 10);
                    numero_copiado -= digito_hexadecimal * divisor_impressao;
                    divisor_impressao /= 16;
                }
            }

            printf("%c", ' '); printf("%c", '='); printf("%c", ' ');

            if (resultado_calculo == 0) {
                printf("%c", '0');
            } else {
                numero_copiado = resultado_calculo;
                divisor_impressao = 1;
                while (divisor_impressao <= numero_copiado / 16) divisor_impressao *= 16;
                while (divisor_impressao > 0) {
                    digito_hexadecimal = numero_copiado / divisor_impressao;
                    printf("%c", digito_hexadecimal < 10 ? '0' + digito_hexadecimal : 'A' + digito_hexadecimal - 10);
                    numero_copiado -= digito_hexadecimal * divisor_impressao;
                    divisor_impressao /= 16;
                }
            }
            printf("%c", '\n');
            ++contador_loop;
        }
    } else if (opcao_escolhida == 2) {
        if (scanf("%d", &limite_potencia) != 1) {
            printf("%c", 'E'); printf("%c", 'r'); printf("%c", 'r'); printf("%c", 'o');
            printf("%c", ' '); printf("%c", 'a'); printf("%c", 'o'); printf("%c", ' ');
            printf("%c", 'l'); printf("%c", 'e'); printf("%c", 'r'); printf("%c", ' ');
            printf("%c", 'l'); printf("%c", 'i'); printf("%c", 'm'); printf("%c", 'i');
            printf("%c", 't'); printf("%c", 'e'); printf("%c", '.'); printf("%c", '\n');
            return 1;
        }
        
        contador_loop = 1;
        if (limite_potencia >= 1) {
            valor_potencia = numero_hexadecimal;
            while (contador_loop <= limite_potencia) {
                if (numero_hexadecimal == 0) {
                    printf("%c", '0');
                } else {
                    numero_copiado = numero_hexadecimal;
                    divisor_impressao = 1;
                    while (divisor_impressao <= numero_copiado / 16) divisor_impressao *= 16;
                    while (divisor_impressao > 0) {
                        digito_hexadecimal = numero_copiado / divisor_impressao;
                        printf("%c", digito_hexadecimal < 10 ? '0' + digito_hexadecimal : 'A' + digito_hexadecimal - 10);
                        numero_copiado -= digito_hexadecimal * divisor_impressao;
                        divisor_impressao /= 16;
                    }
                }

                printf("%c", ' '); printf("%c", 'e'); printf("%c", 'l'); printf("%c", 'e');
                printf("%c", 'v'); printf("%c", 'a'); printf("%c", 'd'); printf("%c", 'o');
                printf("%c", ' '); printf("%c", 'a'); printf("%c", ' ');

                printf("%d", contador_loop);

                printf("%c", ' '); printf("%c", '='); printf("%c", ' ');
                
                if (contador_loop == 1) valor_potencia = numero_hexadecimal;
                else if (numero_hexadecimal == 0) valor_potencia = 0;
                else if (numero_hexadecimal == 1) valor_potencia = 1;
                else valor_potencia *= numero_hexadecimal;


                if (valor_potencia == 0) {
                    printf("%c", '0');
                } else {
                    numero_copiado = valor_potencia;
                    divisor_impressao = 1;
                    while (divisor_impressao <= numero_copiado / 16) divisor_impressao *= 16;
                    while (divisor_impressao > 0) {
                        digito_hexadecimal = numero_copiado / divisor_impressao;
                        printf("%c", digito_hexadecimal < 10 ? '0' + digito_hexadecimal : 'A' + digito_hexadecimal - 10);
                        numero_copiado -= digito_hexadecimal * divisor_impressao;
                        divisor_impressao /= 16;
                    }
                }
                printf("%c", '\n');
                ++contador_loop;
            }
        }
    } else if (opcao_escolhida == 3) {
        if (numero_hexadecimal == 0) {
            printf("%c", '0');
        } else {
            numero_copiado = numero_hexadecimal;
            divisor_impressao = 1;
            while (divisor_impressao <= numero_copiado / 16) divisor_impressao *= 16;
            while (divisor_impressao > 0) {
                digito_hexadecimal = numero_copiado / divisor_impressao;
                printf("%c", digito_hexadecimal < 10 ? '0' + digito_hexadecimal : 'A' + digito_hexadecimal - 10);
                numero_copiado -= digito_hexadecimal * divisor_impressao;
                divisor_impressao /= 16;
            }
        }

        printf("%c", ' '); printf("%c", 'e'); printf("%c", 'm'); printf("%c", ' ');
        printf("%c", 'b'); printf("%c", 'i'); printf("%c", 'n'); printf("%c", 'a');
        printf("%c", 'r'); printf("%c", 'i'); printf("%c", 'o'); printf("%c", ' ');
        printf("%c", 'e'); printf("%c", ':'); printf("%c", ' ');

        if (numero_hexadecimal == 0) {
            printf("%c", '0');
        } else {
            numero_copiado = numero_hexadecimal;
            divisor_impressao = 1;
            if (numero_hexadecimal > 1) {
                 while(divisor_impressao <= numero_hexadecimal / 2) divisor_impressao *= 2;
            }
            
            while (divisor_impressao > 0) {
                digito_hexadecimal = numero_copiado / divisor_impressao;
                printf("%d", digito_hexadecimal);
                numero_copiado -= digito_hexadecimal * divisor_impressao;
                divisor_impressao /= 2;
            }
        }
        printf("%c", '\n');
    } else {
        printf("%c", 'O'); printf("%c", 'p'); printf("%c", 'c'); printf("%c", 'a');
        printf("%c", 'o'); printf("%c", ' '); printf("%c", 'i'); printf("%c", 'n');
        printf("%c", 'v'); printf("%c", 'a'); printf("%c", 'l'); printf("%c", 'i');
        printf("%c", 'd'); printf("%c", 'a'); printf("%c", '\n');
        return 1;
    }

    return 0;
}
