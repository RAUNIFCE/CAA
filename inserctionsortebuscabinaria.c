#include <stdio.h>
int buscabinaria(int vetor[],int chave, int inicio,int fim){
    int meio;
    while(inicio<=fim){
        meio=(inicio+fim)/2;
        if(chave<vetor[meio]){
            fim=meio-1;
        }else{
            inicio=meio+1;
        }
    }
    return inicio;
}
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
    //inserction sort com busca binaria
    int chave,pos;
    int vetor[5]={5,4,3,2,1};
    for(int i=1;i<5;i++){
        chave=vetor[i];
        pos=buscabinaria(vetor,chave,0,i-1);
        printf("\n %d",pos);
        for(int j=i-1;j>=pos;j--){
            vetor[j+1]=vetor[j];
        }
        vetor[pos]=chave;
    }
    for(int i=0;i<5;i++){
            printf("[%d]",vetor[i]);
        }
        
    return 0;
}
