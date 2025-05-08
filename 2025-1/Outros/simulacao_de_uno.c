#include <stdio.h>

int main()
{
 short c1=5,c2=5,vez=1,uno1=0,uno2=0,manter;
 char j;
 while(scanf(" %c",&j)==1)
 {
  if(j!='U')
  {
   if(vez==1&&c1==1&&uno1==0)
   {
    printf("ESQUECEU DE FALAR UNO!!\n");
    c1+=1;
    vez=2;
    uno1=0;
    printf("Jogador 1: %hd cartas\n",c1);
    printf("Jogador 2: %hd cartas\n",c2);
    continue;
   }
   if(vez==2&&c2==1&&uno2==0)
   {
    printf("ESQUECEU DE FALAR UNO!!\n");
    c2+=1;
    vez=1;
    uno2=0;
    printf("Jogador 1: %hd cartas\n",c1);
    printf("Jogador 2: %hd cartas\n",c2);
    continue;
   }
  }

  if(j=='U')
  {
   if(vez==1)
   {
    if(c1==1&&uno1==0){uno1=1;continue;}
    vez=2;uno1=0;
   }
   else
   {
    if(c2==1&&uno2==0){uno2=1;continue;}
    vez=1;uno2=0;
   }
   printf("Jogador 1: %hd cartas\n",c1);
   printf("Jogador 2: %hd cartas\n",c2);
   continue;
  }

  manter=0;

  if(vez==1)
  {
   c1-=1;
   if(j=='2'){if(c1)c2+=2;manter=1;}
   else if(j=='4'){if(c1)c2+=4;manter=1;}
   else if(j=='R'||j=='B')manter=1;
   if(c1==0)
   {
    printf("Jogador 1 VENCEU!!\n");
    printf("Jogador 2 tinha %hd cartas!\n",c2);
    return 0;
   }
  }
  else
  {
   c2-=1;
   if(j=='2'){if(c2)c1+=2;manter=1;}
   else if(j=='4'){if(c2)c1+=4;manter=1;}
   else if(j=='R'||j=='B')manter=1;
   if(c2==0)
   {
    printf("Jogador 2 VENCEU!!\n");
    printf("Jogador 1 tinha %hd cartas!\n",c1);
    return 0;
   }
  }

  printf("Jogador 1: %hd cartas\n",c1);
  printf("Jogador 2: %hd cartas\n",c2);

  if(!manter)
  {
   if(vez==1){vez=2;uno1=0;}
   else      {vez=1;uno2=0;}
  }
 }
 return 0;
}
