// ======================================================================
// Universidade Federal de São Carlos (UFSCar) – Campus Sorocaba
// Bacharelado em Ciência da Computação (BCC)
// Maratona de Programação
//
// Autor: Fábio Miguel Denda Pacheco
// Repositório: https://github.com/fabiomigueldp/Maratona-de-Programacao
// Descrição: Simulação de UNO - Contabilização de cartas e aplicação de regras especiais.
// ======================================================================

// Alfredo e Wellington são dois bons amigos que adoram jogar UNO, mas em algum momento Alfredo
// começou a desconfiar que seu amigo estava sumindo com algumas cartas durante as suas jogatinas.
// Para conseguir confirmar o número de cartas que ainda estão no jogo, ele decidiu fazer um
// programa onde ele vai digitar quais jogadas estão acontecendo e vai receber o número de cartas
// que ambos têm no momento.

// O programa que ele imaginou funciona com base nas seguintes regras e representações:

// 'N' para representar as cartas normais.
// '2' para representar a carta de comprar duas, onde o adversário precisa comprar duas cartas
// e perde a vez.
// '4' para representar a carta de comprar quatro, onde o adversário precisa comprar quatro cartas
// e perde a vez.
// 'R' para representar a carta de reverter. Como apenas duas pessoas estão jogando, essa carta
// vai fazer a pessoa poder jogar de novo.
// 'B' para representar a carta de bloqueio. Como apenas duas pessoas estão jogando, a pessoa que
// jogar essa carta vai poder jogar mais uma vez.
// 'U' para representar a pessoa falando UNO. Se o jogador que tiver 1 carta esquecer de falar UNO
// antes de fazer a sua jogada, ele vai perder a vez e comprar mais uma carta. Além disso, se ele
// falar UNO quando tiver mais que uma carta, perderá sua vez.
// Ambos os jogadores começam com 5 cartas. O jogador que fará a primeira jogada sempre será o
// jogador 1.

// Quando a última carta jogada for uma de comprar duas ou comprar quatro, o número de cartas do
// oponente não deve aumentar, já que o jogo acabou.

// ENTRADA

// Seu programa deverá receber uma sequência de caracteres que representam as jogadas de Alfredo e
// Wellington.

// SAÍDA

// Cada vez que uma jogada for finalizada, o programa deverá imprimir em uma linha a quantidade de
// cartas que o jogador 1 possui, seguido da quantidade de cartas que o jogador 2 possui, usando
// o seguinte padrão "Jogador x: n cartas!".

// Caso o jogador tenha apenas uma carta e esqueça de falar UNO, deverá ser impressa a mensagem
// "ESQUECEU DE FALAR UNO!!", seguida pelo número de cartas dos dois jogadores.

// Por fim, quando um dos jogadores ficar sem cartas, o programa deverá imprimir "Jogador X VENCEU!!"
// onde X poderá ser 1 ou 2. Na próxima linha, deverá ser impresso o número de cartas que o
// jogador perdedor ainda tinha em sua mão, no seguinte formato "Jogador x tinha n cartas!".
// Por exemplo:

// Exemplo 1:
// Entrada:
// N
// N
// N
// N
// N
// N
// N
// N
// U
// N
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 4 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 3 cartas
// Jogador 1: 2 cartas
// Jogador 2: 3 cartas
// Jogador 1: 2 cartas
// Jogador 2: 2 cartas
// Jogador 1: 1 cartas
// Jogador 2: 2 cartas
// Jogador 1: 1 cartas
// Jogador 2: 1 cartas
// Jogador 1 VENCEU!!
// Jogador 2 tinha 1 cartas!

// Exemplo 2:
// Entrada:
// R
// N
// N
// B
// 2
// U
// 4
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 3 cartas
// Jogador 2: 5 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 2 cartas
// Jogador 2: 4 cartas
// Jogador 1: 1 cartas
// Jogador 2: 6 cartas
// Jogador 1 VENCEU!!
// Jogador 2 tinha 6 cartas!

// Exemplo 3:
// Entrada:
// N
// R
// N
// N
// 2
// 4
// U
// N
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 4 cartas
// Jogador 2: 4 cartas
// Jogador 1: 4 cartas
// Jogador 2: 3 cartas
// Jogador 1: 3 cartas
// Jogador 2: 3 cartas
// Jogador 1: 5 cartas
// Jogador 2: 2 cartas
// Jogador 1: 9 cartas
// Jogador 2: 1 cartas
// Jogador 2 VENCEU!!
// Jogador 1 tinha 9 cartas!

// Exemplo 4:
// Entrada:
// C
// N
// N
// N
// C
// C
// R
// B
// N
// N
// 2
// N
// R
// B
// N
// U
// N
//
// Saída correspondente:
// Jogador 1: 6 cartas
// Jogador 2: 5 cartas
// Jogador 1: 6 cartas
// Jogador 2: 4 cartas
// Jogador 1: 5 cartas
// Jogador 2: 4 cartas
// Jogador 1: 5 cartas
// Jogador 2: 3 cartas
// Jogador 1: 6 cartas
// Jogador 2: 3 cartas
// Jogador 1: 6 cartas
// Jogador 2: 4 cartas
// Jogador 1: 5 cartas
// Jogador 2: 4 cartas
// Jogador 1: 4 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 3 cartas
// Jogador 1: 2 cartas
// Jogador 2: 5 cartas
// Jogador 1: 1 cartas
// Jogador 2: 5 cartas
// Jogador 1: 1 cartas
// Jogador 2: 4 cartas
// Jogador 1: 1 cartas
// Jogador 2: 3 cartas
// Jogador 1: 1 cartas
// Jogador 2: 2 cartas
// Jogador 1 VENCEU!!
// Jogador 2 tinha 2 cartas!

// Exemplo 5:
// Entrada:
// B
// B
// N
// C
// N
// C
// U
// N
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 3 cartas
// Jogador 2: 5 cartas
// Jogador 1: 2 cartas
// Jogador 2: 5 cartas
// Jogador 1: 2 cartas
// Jogador 2: 6 cartas
// Jogador 1: 1 cartas
// Jogador 2: 6 cartas
// Jogador 1: 1 cartas
// Jogador 2: 7 cartas
// Jogador 1 VENCEU!!
// Jogador 2 tinha 7 cartas!

// Exemplo 6:
// Entrada:
// 2
// N
// R
// B
// N
// N
// 2
// 4
// N
// N
// R
// N
// 2
// U
// N
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 7 cartas
// Jogador 1: 3 cartas
// Jogador 2: 7 cartas
// Jogador 1: 3 cartas
// Jogador 2: 6 cartas
// Jogador 1: 3 cartas
// Jogador 2: 5 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 2 cartas
// Jogador 2: 4 cartas
// Jogador 1: 4 cartas
// Jogador 2: 3 cartas
// Jogador 1: 8 cartas
// Jogador 2: 2 cartas
// Jogador 1: 8 cartas
// Jogador 2: 1 cartas
// Jogador 1: 7 cartas
// Jogador 2: 1 cartas
// ESQUECEU DE FALAR UNO!!
// Jogador 1: 7 cartas
// Jogador 2: 2 cartas
// Jogador 1: 6 cartas
// Jogador 2: 2 cartas
// Jogador 1: 8 cartas
// Jogador 2: 1 cartas
// Jogador 2 VENCEU!!
// Jogador 1 tinha 8 cartas!

// Exemplo 7:
// Entrada:
// N
// N
// N
// R
// N
// 2
// N
// B
// N
// U
// N
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 4 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 3 cartas
// Jogador 1: 3 cartas
// Jogador 2: 2 cartas
// Jogador 1: 2 cartas
// Jogador 2: 4 cartas
// Jogador 1: 1 cartas
// Jogador 2: 4 cartas
// Jogador 1: 1 cartas
// Jogador 2: 3 cartas
// Jogador 1: 1 cartas
// Jogador 2: 2 cartas
// Jogador 1 VENCEU!!
// Jogador 2 tinha 2 cartas!

// Exemplo 8:
// Entrada:
// N
// N
// C
// N
// C
// N
// 2
// R
// N
// R
// N
// C
// B
// U
// N
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 4 cartas
// Jogador 2: 4 cartas
// Jogador 1: 5 cartas
// Jogador 2: 4 cartas
// Jogador 1: 5 cartas
// Jogador 2: 3 cartas
// Jogador 1: 6 cartas
// Jogador 2: 3 cartas
// Jogador 1: 6 cartas
// Jogador 2: 2 cartas
// Jogador 1: 5 cartas
// Jogador 2: 4 cartas
// Jogador 1: 4 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 3 cartas
// Jogador 1: 3 cartas
// Jogador 2: 2 cartas
// Jogador 1: 4 cartas
// Jogador 2: 2 cartas
// Jogador 1: 4 cartas
// Jogador 2: 1 cartas
// Jogador 2 VENCEU!!
// Jogador 1 tinha 4 cartas!

// Exemplo 9:
// Entrada:
// 4
// 4
// 4
// 4
// U
// 4
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 9 cartas
// Jogador 1: 3 cartas
// Jogador 2: 13 cartas
// Jogador 1: 2 cartas
// Jogador 2: 17 cartas
// Jogador 1: 1 cartas
// Jogador 2: 21 cartas
// Jogador 1 VENCEU!!
// Jogador 2 tinha 21 cartas!

// Exemplo 10:
// Entrada:
// N
// N
// C
// C
// R
// N
// N
// 2
// N
// 2
// R
// N
// B
// N
// 4
// R
// U
// N
//
// Saída correspondente:
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 4 cartas
// Jogador 2: 4 cartas
// Jogador 1: 5 cartas
// Jogador 2: 4 cartas
// Jogador 1: 5 cartas
// Jogador 2: 5 cartas
// Jogador 1: 4 cartas
// Jogador 2: 5 cartas
// Jogador 1: 3 cartas
// Jogador 2: 5 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 2 cartas
// Jogador 2: 6 cartas
// Jogador 1: 1 cartas
// Jogador 2: 6 cartas
// Jogador 1: 3 cartas
// Jogador 2: 5 cartas
// Jogador 1: 3 cartas
// Jogador 2: 4 cartas
// Jogador 1: 3 cartas
// Jogador 2: 3 cartas
// Jogador 1: 2 cartas
// Jogador 2: 3 cartas
// Jogador 1: 1 cartas
// Jogador 2: 3 cartas
// Jogador 1: 5 cartas
// Jogador 2: 2 cartas
// Jogador 1: 5 cartas
// Jogador 2: 1 cartas
// Jogador 2 VENCEU!!
// Jogador 1 tinha 5 cartas!

#include <stdio.h>

int main()
{
 short cartas1=5,cartas2=5,vez=1,uno1=0,uno2=0,manter=0;
 char jogada;

 while(scanf(" %c",&jogada)==1)
 {
  if(jogada=='U')
  {
   if(vez==1)
   {
    if(cartas1==1&&uno1==0)
     uno1=1;
    else
     vez=2;
   }
   else
   {
    if(cartas2==1&&uno2==0)
     uno2=1;
    else
     vez=1;
   }

   printf("Jogador 1: %hd cartas\n",cartas1);
   printf("Jogador 2: %hd cartas\n",cartas2);
   continue;
  }

  if(vez==1&&cartas1==1&&uno1==0)
  {
   printf("ESQUECEU DE FALAR UNO!!\n");
   cartas1+=1;
   vez=2;
   printf("Jogador 1: %hd cartas\n",cartas1);
   printf("Jogador 2: %hd cartas\n",cartas2);
   continue;
  }

  if(vez==2&&cartas2==1&&uno2==0)
  {
   printf("ESQUECEU DE FALAR UNO!!\n");
   cartas2+=1;
   vez=1;
   printf("Jogador 1: %hd cartas\n",cartas1);
   printf("Jogador 2: %hd cartas\n",cartas2);
   continue;
  }

  manter=0;

  if(vez==1)
  {
   cartas1-=1;

   if(jogada=='2')
   {
    if(cartas1!=0) cartas2+=2;
    manter=1;
   }
   else if(jogada=='4')
   {
    if(cartas1!=0) cartas2+=4;
    manter=1;
   }
   else if(jogada=='R'||jogada=='B')
    manter=1;

   if(cartas1==0)
   {
    printf("Jogador 1 VENCEU!!\n");
    printf("Jogador 2 tinha %hd cartas!\n",cartas2);
    return 0;
   }

   if(cartas1!=1) uno1=0;
  }
  else
  {
   cartas2-=1;

   if(jogada=='2')
   {
    if(cartas2!=0) cartas1+=2;
    manter=1;
   }
   else if(jogada=='4')
   {
    if(cartas2!=0) cartas1+=4;
    manter=1;
   }
   else if(jogada=='R'||jogada=='B')
    manter=1;

   if(cartas2==0)
   {
    printf("Jogador 2 VENCEU!!\n");
    printf("Jogador 1 tinha %hd cartas!\n",cartas1);
    return 0;
   }

   if(cartas2!=1) uno2=0;
  }

  printf("Jogador 1: %hd cartas\n",cartas1);
  printf("Jogador 2: %hd cartas\n",cartas2);

  if(!manter)
   vez=(vez==1)?2:1;
 }

 return 0;
}
