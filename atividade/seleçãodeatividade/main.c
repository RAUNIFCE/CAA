#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    int in;
    int f;
} horario;
void troca(horario* a, horario* b){
    horario temp = *a;
    *a = *b;
    *b = temp;
}


int particiona(horario A[], int inicio, int fim){
    int pivo = A[fim].f;
    int i = inicio - 1;

    for(int j = inicio; j < fim; j++){
        if(A[j].f <= pivo){
            i++;
            troca(&A[i], &A[j]);
        }
    }
    troca(&A[i + 1], &A[fim]);
    return i + 1;
}

void quickSort(horario A[], int inicio, int fim){
    if(inicio < fim){
        int p = particiona(A, inicio, fim);
        quickSort(A, inicio, p - 1);
        quickSort(A, p + 1, fim);
    }
}

int main() {
    setlocale(LC_ALL,"portuguese" );
    /*horario a={1,3};      conferir acesso!!
    printf("i: %d f: %d\n",a.in,a.f);*/
    int n;
    printf("Digite o número de horários a serem colocados\n");
    scanf("%d",&n);
    horario horarios[n];
     for(int i = 0; i < n; i++){
        printf("Digite o %d inicio:", i+1);
        scanf("%d", &horarios[i].in);
        printf("Digite o %d fim:", i+1);
        scanf("%d", &horarios[i].f);
    }
    quickSort(horarios, 0, n - 1);
    printf("\nordenação dos horários\n");
    for (int i = 0; i < n; i++) {
        printf("horario %d: inicio = %d, fim = %d\n", i + 1, horarios[i].in, horarios[i].f);
    }
    int var = horarios[0].f;//já considera o primeiro a se completar como primeiro


    printf("\n melhores horários\n");
     printf("horario %d: inicio = %d, fim = %d\n", 1,horarios[0].in, horarios[0].f);

     for(int i = 1; i < n; i++){//começa a partir do segundo
        if(horarios[i].in >= var){
            printf("horario %d: inicio = %d, fim = %d\n", i + 1, horarios[i].in, horarios[i].f);
            var = horarios[i].f
            ;
        }
    }

    return 0;
}
