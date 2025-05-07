// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: D - Football: Determinar o time vencedor pela contagem de gols
// ======================================================================

// Um dia, Vasya decidiu dar uma olhada nos resultados das finais do Campeonato de Futebol
// de Berland de 1910. Infelizmente, ele não encontrou o placar geral da partida; no entanto,
// ele conseguiu uma descrição detalhada do processo da partida. Ao todo, há n linhas nessa
// descrição, cada uma descrevendo um gol. Cada gol foi marcado com o nome do time que o
// marcou. Ajude Vasya a descobrir o nome do time que venceu as finais. É garantido que a
// partida não terminou em empate.
//
// Entrada
// A primeira linha contém um inteiro n (1 <= n <= 100) — o número de linhas na descrição.
// Em seguida, seguem n linhas — para cada gol, os nomes dos times que o marcaram. Os nomes
// são linhas não vazias consistindo de letras latinas maiúsculas cujos comprimentos não
// excedem 10 símbolos. É garantido que a partida não terminou em empate e a descrição
// contém no máximo dois times diferentes.
//
// Saída
// Imprima o nome do time vencedor. Lembramos que no futebol o time que marca mais gols é
// considerado o vencedor.
//
// Exemplos
// Entrada
// 1
// ABC
// Saída
// ABC
//
// Entrada
// 5
// A
// ABA
// ABA
// A
// A
// Saída
// A

/*
 * Dica de Bibliotecas e Comandos C++:
 *
 * Bibliotecas comuns:
 * #include <iostream> // Para entrada (cin) e saída (cout)
 * #include <string>   // Para ler e manipular os nomes dos times (std::string)
 * #include <map>      // Útil para contar gols por time (mapeia string para int)
 *
 * Estrutura de Dados e Lógica:
 * 1. Leia o número de gols, n.
 * 2. Use um mapa `std::map<std::string, int>` para armazenar a contagem de gols para cada time.
 * Ou, como são no máximo 2 times, pode usar duas variáveis string para os nomes e dois
 * contadores int.
 * 3. Faça um loop n vezes:
 * a. Leia o nome do time que marcou o gol.
 * b. Incremente a contagem para esse time no mapa (ou na variável correspondente).
 * 4. Após o loop, compare as contagens dos times. Como é garantido que não há empate e no
 * máximo dois times, basta encontrar o time com a maior contagem.
 * 5. Imprima o nome do time vencedor.
 *
 * Exemplo de Leitura e Contagem (usando variáveis simples):
 *
 * int n;
 * std::cin >> n;
 * std::string time1 = "", time2 = "";
 * int gols1 = 0, gols2 = 0;
 *
 * for (int i = 0; i < n; ++i) {
 * std::string time_marcou;
 * std::cin >> time_marcou;
 *
 * if (i == 0) { // Primeiro gol define o time1
 * time1 = time_marcou;
 * gols1++;
 * } else {
 * if (time_marcou == time1) {
 * gols1++;
 * } else {
 * if (time2 == "") { // Primeiro gol do outro time define time2
 * time2 = time_marcou;
 * }
 * gols2++;
 * }
 * }
 * }
 *
 * // Determina e imprime o vencedor
 * if (gols1 > gols2) {
 * std::cout << time1 << std::endl;
 * } else {
 * // Se n=1, time2 nunca será definido, mas gols2 será 0, então time1 vence.
 * // Se n>1 e houver segundo time, time2 será definido.
 * // Como não há empate, um será maior que o outro.
 * if (gols2 > gols1) {
 * std::cout << time2 << std::endl;
 * } else if (n==1) { // Caso especial n=1
 * std::cout << time1 << std::endl;
 * }
 *
 * }
 *
 * Comando de Compilação (exemplo usando g++):
 * g++ seu_codigo.cpp -o seu_programa -std=c++17 -Wall -Wextra
 */

 