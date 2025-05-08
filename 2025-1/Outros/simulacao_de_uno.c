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
    {
     uno1=1;
     continue;
    }
    vez=2;
   }
   else
   {
    if(cartas2==1&&uno2==0)
    {
     uno2=1;
     continue;
    }
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
    if(cartas1) cartas2+=2;
    manter=1;
   }
   else if(jogada=='4')
   {
    if(cartas1) cartas2+=4;
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
    if(cartas2) cartas1+=2;
    manter=1;
   }
   else if(jogada=='4')
   {
    if(cartas2) cartas1+=4;
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

  if(!manter) vez=(vez==1)?2:1;
 }

 return 0;
}
