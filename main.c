#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void merge(int arr[], int inicio, int meio, int fim) {
    int tamanho=fim-inicio+1;
    int i = inicio;
    int j = meio + 1;
    int k=0;
    int aux[tamanho];// por causa disso pq ele não é in place,ele fica criando vetores e vetores de acordo com seu tamanho,ele é obrigado a criar memória só pra isso
    while (i<=meio && j<=fim) {
        if (arr[i] <= arr[j]) {//se esq é menor adicionar no vetor auxiliar se não o começo da direita vai começar
            aux[k++] = arr[i++];
        } else {
            aux[k++] = arr[j++];
        }
    }
    while (i <= meio) {//se um acabar joga o resto pro outro lado
        aux[k++] = arr[i++];
    }
    while (j <= fim) {
        aux[k++] = arr[j++];
    }
    for (int x = 0; x < tamanho; x++) {//preenche de verdade no array original
        arr[inicio + x] = aux[x];
    }

}
void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio=inicio+(fim-inicio)/2;
        mergeSort(arr, inicio, meio);//dividindo a primeira metade
        mergeSort(arr, (meio+1), fim);//dividindo a terceira metade
        merge(arr,inicio,meio,fim);//juntando as metades
    }
}
int main() {
    setlocale(LC_ALL,"portuguese" );
    int arr[4]={4,3,2,1};
    mergeSort(arr,0,3);
    for(int x=0;x<4;x++) {
        printf(" %d ",arr[x]);
    }



    return 0;
}