/*
 * Descrição do Problema: E - Maps-STL
 *
 * Contexto:
 * Você foi nomeado assistente de uma professora em uma escola. Ela está corrigindo
 * as folhas de respostas dos alunos. Cada aluno pode ter múltiplas folhas de respostas,
 * o que significa que as notas podem ser adicionadas cumulativamente.
 * A professora tem Q consultas para gerenciar as notas dos alunos usando um sistema
 * baseado em mapas, onde o nome do aluno é a chave e o total de notas é o valor.
 *
 * Consultas:
 * Existem 3 tipos de consultas que a professora pode fazer:
 *
 * 1. Tipo 1: `1 X Y`
 *    - Adiciona as notas `Y` ao total de notas do aluno de nome `X`.
 *    - Se o aluno `X` já possui notas registradas, as novas notas `Y` são SOMADAS
 *      às notas existentes.
 *    - Se o aluno `X` não existe no registro, ele é criado com `Y` notas.
 *
 * 2. Tipo 2: `2 X`
 *    - Apaga o registro de notas do aluno de nome `X`.
 *    - Após esta operação, é como se o aluno `X` não tivesse mais nenhuma nota (efetivamente 0).
 *
 * 3. Tipo 3: `3 X`
 *    - Imprime o total de notas acumuladas do aluno de nome `X`.
 *    - Se o aluno `X` não tiver notas registradas (seja porque nunca teve notas adicionadas
 *      ou porque suas notas foram apagadas pela consulta tipo 2), imprima 0.
 *
 * Formato de Entrada:
 * - A primeira linha contém um inteiro Q, representando o número total de consultas.
 * - As próximas Q linhas contêm uma consulta cada.
 * - Cada linha de consulta começa com um inteiro `type` (1, 2 ou 3), indicando o tipo da consulta.
 *   - Se `type` for 1, a linha conterá a string `X` (nome do aluno) e o inteiro `Y` (notas a adicionar),
 *     separados por espaços. Ex: `1 Jesse 20`
 *   - Se `type` for 2 ou 3, a linha conterá apenas a string `X` (nome do aluno).
 *     Ex: `2 Jess` ou `3 Jesse`
 *
 * Formato de Saída:
 * - Para cada consulta do tipo 3, imprima o total de notas atual do aluno `X` solicitado,
 *   seguido por uma nova linha.
 *
 * Restrições:
 * - 1 <= Q <= 10^5 (Número de consultas)
 * - 1 <= type <= 3 (Tipo de consulta)
 * - 1 <= |X| <= 6   (Comprimento do nome do aluno X)
 * - 1 <= Y <= 10^3  (Valor das notas em uma consulta tipo 1)
 * - Os nomes dos alunos (`X`) consistem apenas em letras inglesas (maiúsculas e minúsculas).
 *
 * Exemplo:
 *
 * Entrada:
 * 7
 * 1 Jesse 20   // Adiciona 20 para Jesse. Jesse: 20
 * 1 Jess 12    // Adiciona 12 para Jess. Jess: 12
 * 1 Jess 18    // Adiciona 18 para Jess. Jess: 12 + 18 = 30
 * 3 Jess       // Imprime as notas de Jess. Saída: 30
 * 3 Jesse      // Imprime as notas de Jesse. Saída: 20
 * 2 Jess       // Apaga as notas de Jess. Jess: 0
 * 3 Jess       // Imprime as notas de Jess. Saída: 0
 *
 * Saída:
 * 30
 * 20
 * 0
 *
 * Dica de Implementação (Baseado nas imagens):
 * Use `std::map<string, int>` da STL do C++ para armazenar as notas.
 * - `map<string, int> m;` para declarar o mapa.
 * - `m[X] += Y;` para a consulta tipo 1 (o operador [] cria a chave se não existir com valor 0).
 * - `m.erase(X);` para a consulta tipo 2.
 * - Para a consulta tipo 3:
 *   - Verifique se a chave `X` existe no mapa (usando `m.find(X)`).
 *   - Se existir (`m.find(X) != m.end()`), imprima o valor associado (`m[X]` ou `it->second`).
 *   - Se não existir, imprima 0.
 */

