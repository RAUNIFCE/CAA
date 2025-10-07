
#include <stdio.h>

int main()
{
   /*int chave;
   int vetor[5]={5,4,3,2,1};
   for(int i=1;i<5;i++){
       chave=vetor[i];
       int j=i-1;
       while(j>-1 && vetor[j]>chave){
           vetor[j+1]=vetor[j];
           j=j-1;
       }
       vetor[j+1]=chave;
   }
   
    for(int i=0;i<5;i++){
        
        printf("%d ",vetor[i]);
    }
    */
    int chave;
    int vetor[5]={5,4,3,2,1};
    for(int i=1;i<5;i++){
        chave=vetor[i];
        pos=buscabinaria(vetor,chave,1,i-1);
        for(int j=i-1;j>pos2    )
        
    }
    return 0;
}
