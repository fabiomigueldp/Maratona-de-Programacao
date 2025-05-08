// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: Simulador de Batalha Espacial: Krestel vs Drone. Simulação de combate tático
//            entre a nave Krestel e um Drone inimigo, com foco no gerenciamento de
//            energia e recursos.
// ======================================================================

// DESCRIÇÃO
//
// Depois de uma penosa batalha contra os Mantis, a nave Krestel, a número um da Federação,
// escapa por um triz em território desconhecido. Com apenas oito núcleos de energia
// restantes, vazando oxigênio e sem saber aonde estão, a equipe de Krestel avançou por
// uma galáxia hostil, alertando um drone de reconhecimento inimigo e iniciando um
// combate inoportuno.
//
// Nessas circunstâncias, Bariadne, a comandante da nave deve liderar sua equipe contra o
// drone antes que ele escape e alerte a nação inimiga!
//
// Tanto a nave Krestel quanto o drone possuem um Nível de Casco (NC), que representa a
// quantidade de ataques que pode receber sem ser destruída, e uma Contagem de Energia (CE),
// que é a quantidade de núcleos de energia a serem distribuídos.
//
// Para redirecionar pontos para cada um de seus recursos, as naves reorganizam sua CE,
// alocando os núcleos de energia entre os recursos. Ao final de cada turno, um núcleo que
// estava sendo utilizado pode ser aproveitado para outro recurso, como trocar baterias
// entre controles remotos.
//
// Os recursos de ambas naves funcionam como especificado abaixo:
//
// KRESTEL (Nível de Casco: 5 / Contagem de Energia: 8)
//
// ARMAS: Cada ponto redirecionado à Armas reduz o Nível de Casco do Drone em 1;
// ESCUDOS: Cada ponto nega 1 ponto de Combate do Drone naquele turno;
// OXIGÊNIO: Krestel possui 4 pontos iniciais de O2 e perde 1 a cada turno. Alocar um
//            ponto à Oxigênio aumenta seu nível de O2 em 1;
// PROPULSÃO: Para cada ponto acumulado em propulsão, Krestel aumenta sua velocidade.
//            Se seus pontos de Propulsão chegarem a 5, Krestel escapa;
//
// DRONE (Nível de Casco: 4 / Contagem de Energia: 5)
//
// COMBATE: Cada ponto redirecionado para Combate reduz o Nível de Casco de Krestel em 1
//          e nega um ponto de Armas de Krestel neste turno;
// PROPULSÃO: Para cada ponto atribuído à Propulsão, o Drone aumenta sua velocidade.
//            Se seus pontos de Propulsão chegarem a 5, o Drone escapa;
//
// O Drone toma suas decisões baseado no seu Nível de Casco (NC) atual. Para cada ponto de NC
// faltante do seu total, o Drone redireciona uma Contagem de Energia (CE) para propulsão,
// e o resto é dado à Combate, para aquele turno.
//
// Infelizmente, não é possível dar vários pontos de Contagem de Energia (CE) de uma só vez
// a um recurso usando energia constante. Para cada ponto a ser distribuído no mesmo turno,
// o custo de CE para o recurso em questão aumenta em um. Então, se Bariadne quiser alocar
// 3 pontos em Armas em um só turno, ela precisa alocar 1 CE para o primeiro ponto,
// 2 para o segundo e 3 para o terceiro (soma: 1+2+3), distribuindo 6 pontos de CE no total.
// Essa regra não se aplica quando os pontos são distribuídos em turnos diferentes.
//
// A batalha só acaba quando uma das cinco condições abaixo forem atendidas, em ordem de
// prioridade:
// 1. Krestel ser destruída;
// 2. O oxigênio de Krestel acabar;
// 3. O Drone ser destruído;
// 4. O Drone escapar;
// 5. Krestel escapar.
//
// Crie um programa que simule as ordens de Bariadne, redirecionando os recursos restantes de
// Krestel para os diferentes setores do sistema. O programa também deve simular o
// comportamento do Drone durante a batalha, sem parar até que a situação seja resolvida.
//
// ENTRADAS
//
// Cada linha de entrada representa uma ordem de Bariadne, e é composta por dois valores
// numéricos. O primeiro valor representa o número do setor que receberá energia
// (1: Armas, 2: Escudos, 3: Oxigênio, 4: Propulsão), e o segundo indica a quantidade de
// Contagem de Energia (CE) distribuída àquele setor. A cada turno, Bariadne sempre
// distribui toda a CE disponível (8 CE) entre seus recursos através de uma ou mais ordens.
// Após toda a Contagem de Energia ser alocada, o Drone deve então tomar suas ações,
// baseadas em seu Nível de Casco (NC) e sem a entrada do usuário.
//
// SAÍDAS
//
// O programa deve imprimir "Turno encerrado!" ao final de cada turno de ações em que o jogo
// não terminar. Quando uma das condições de resolução for atendida, o programa deve
// encerrar e imprimir na tela o final obtido, usando as frases pré-definidas (conforme
// a condição atingida):
//   "Krestel foi destruida!"
//   "Oxigenio de Krestel acabou!"
//   "Drone foi destruido!"
//   "Drone escapou!"
//   "Krestel escapou!"
//
// EXEMPLO DE E/S
// (os comentários entre parênteses não deverão ser exibidos):
//
// Entrada:
// 1 6 (3 pontos em Armas)
// 2 1 (1 ponto em Escudo)
// 3 1 (+1 ponto emO2)
// Saída:
// Turno encerrado!
//
// Entrada:
// 1 6 (3 pontos em Armas)
// 2 1 (1 ponto em Escudo)
// 4 1 (+1 ponto em Propulsão)
// Saída:
// Turno encerrado!
//
// Entrada:
// 4 6 (+3 pontos em Propulsão)
// 2 1 (1 ponto em Escudo)
// 3 1 (+1 ponto emO2)
// Saída:
// Turno encerrado!
//
// Entrada:
// 2 3 (2 pontos em Escudo)
// 4 1 (+1 ponto em Propulsão)
// 3 1 (+1 ponto emO2)
// 2 3 (+1 ponto em Escudo)
// Saída:
// Turno encerrado!
// Krestel escapou!

#include <stdio.h>

int main(){
    short cascoK = 5, cascoD = 4, oxigenio = 4;
    short propulsaoK = 0, propulsaoD = 0;
    short energiaK, energiaD;
    short pArmas, pEscudos, pOxigenio, pPropKTurno;
    short pPropDTurno, pCombate;
    short setor, quantidade;
    short restante, custo;
    short faltaCasco, efetivo, armasEfetivas, cePropD;

    while(1){
        energiaK = 8;
        pArmas = 0;
        pEscudos = 0;
        pOxigenio = 0;
        pPropKTurno = 0;

        while(energiaK > 0){
            if (scanf("%hd %hd", &setor, &quantidade) != 2) return 0;
            if (quantidade > energiaK || quantidade <= 0) return 0;
            energiaK -= quantidade;

            restante = quantidade;

            if (setor == 1) {
                custo = pArmas + 1;
                while (restante >= custo) {
                    restante -= custo;
                    pArmas++;
                    custo++;
                }

            } else if (setor == 2) {
                custo = pEscudos + 1;
                while (restante >= custo) {
                    restante -= custo;
                    pEscudos++;
                    custo++;
                }

            } else if (setor == 3) {
                custo = pOxigenio + 1;
                while (restante >= custo) {
                    restante -= custo;
                    pOxigenio++;
                    custo++;
                }

            } else if (setor == 4) {
                custo = pPropKTurno + 1;
                while (restante >= custo) {
                    restante -= custo;
                    pPropKTurno++;
                    custo++;
                }

            } else {
                return 0;
            }

            if (restante != 0) return 0;
        }

        oxigenio += pOxigenio;

        energiaD = 5;
        faltaCasco = 4 - cascoD;
        if (faltaCasco < 0) faltaCasco = 0;

        cePropD = faltaCasco;
        if (cePropD > energiaD) cePropD = energiaD;
        energiaD -= cePropD;

        pPropDTurno = 0;
        restante = cePropD;
        custo = 1;
        while (restante >= custo) {
            restante -= custo;
            pPropDTurno++;
            custo++;
        }

        pCombate = 0;
        restante = energiaD;
        custo = 1;
        while (restante >= custo) {
            restante -= custo;
            pCombate++;
            custo++;
        }

        efetivo = pCombate - pEscudos;
        if (efetivo < 0) efetivo = 0;

        armasEfetivas = pArmas - efetivo;
        if (armasEfetivas < 0) armasEfetivas = 0;

        cascoD -= armasEfetivas;
        cascoK -= efetivo;
        propulsaoK += pPropKTurno;
        propulsaoD += pPropDTurno;
        oxigenio--;

        if (cascoK <= 0) {
            printf("Krestel foi destruida!\n");
            return 0;
        }

        if (oxigenio <= 0) {
            printf("Oxigenio de Krestel acabou!\n");
            return 0;
        }

        if (cascoD <= 0) {
            printf("Drone foi destruido!\n");
            return 0;
        }

        if (propulsaoD >= 5) {
            printf("Drone escapou!\n");
            return 0;
        }

        if (propulsaoK >= 5) {
            printf("Krestel escapou!\n");
            return 0;
        }

        printf("Turno encerrado!\n");
    }

    return 0;
}
