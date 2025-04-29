// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: Sorvete - Contagem de sorvetes restantes e crianças angustiadas após distribuição.
// ======================================================================

// Após sua aventura com o espelho mágico, Kay e Gerda voltaram para casa e, às vezes, dão sorvete de graça para as crianças no verão.
// No início do dia, eles têm x pacotes de sorvete. Como o sorvete é gratuito, as pessoas começam a formar fila em frente à casa de Kay e Gerda ainda durante a noite. Cada pessoa na fila quer pegar vários pacotes de sorvete para si e seus amigos ou dar vários pacotes de sorvete para Kay e Gerda (transportadores que trazem sorvete têm que ficar na mesma fila).
// Se um transportador com d pacotes de sorvete chega à casa, Kay e Gerda pegam todos os seus pacotes. Se uma criança que quer pegar d pacotes de sorvete chega à casa, Kay e Gerda darão a ela d pacotes se tiverem sorvete suficiente; caso contrário, a criança não receberá nenhum sorvete e irá embora angustiada.
// Kay quer descobrir a quantidade de sorvete que eles terão depois que todas as pessoas saírem da fila, e Gerda quer descobrir o número de crianças angustiadas.

// Entrada
// A primeira linha contém dois inteiros separados por espaço n e x (1 <= n <= 1000, 0 <= x <= 10^9).
// Cada uma das próximas n linhas contém um caractere '+' ou '-', e um inteiro di, separados por um espaço (1 <= di <= 10^9). O registro "+ di" na i-ésima linha significa que um transportador com di pacotes de sorvete ocupa o i-ésimo lugar desde o início da fila, e o registro "- di" significa que uma criança que quer pegar di pacotes está no i-ésimo lugar.

// Saída
// Imprima dois inteiros separados por espaço — o número de pacotes de sorvete restantes após todas as operações e o número de crianças que saíram da casa angustiadas.

// Exemplos
// Entrada
// 5 7
// + 5
// - 10
// - 20
// + 40
// - 20
// Saída
// 22 1

// Entrada
// 5 17
// - 16
// - 2
// - 98
// + 100
// - 98
// Saída
// 3 2

// Nota
// Considere o primeiro exemplo.

// Inicialmente, Kay e Gerda têm 7 pacotes de sorvete.
// Um transportador traz mais 5, então agora eles têm 12 pacotes.
// Uma criança pede 10 pacotes e os recebe. Restam apenas 2 pacotes.
// Outra criança pede 20 pacotes. Kay e Gerda não têm, então a criança vai embora angustiada.
// Um transportador traz 40 pacotes, agora Kay e Gerda têm 42 pacotes.
// Uma criança pede 20 pacotes e os recebe. Restam 22 pacotes.

