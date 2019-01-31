#include<stdio.h>
#define N 5
int correct[N];

void corre(int ara[]);

int main()
{
      int ara1[N];
      int i;
      int ara2[N];
      int ck;

      while(scanf("%d",&ara1[0])==1){
            for(i=1;i<N;i++){
            scanf("%d",&ara1[i]);
            }
                  corre(ara1);
                  ck=0;

            for(i=0;i<N;i++){
            scanf("%d",&ara2[i]);

            if(ara2[i]==correct[i])
            ck++;
            else
            ck=0;
            }


      if(ck==5)
      printf("Y\n");
      else
      printf("N\n");
      }
      return 0;
}

void corre(int ara[])
{
      int i;
            for(i=0;i<5;i++){
                  if(ara[i]==1)
                  correct[i]=0;
                  else
                  correct[i]=1;
            }
}
