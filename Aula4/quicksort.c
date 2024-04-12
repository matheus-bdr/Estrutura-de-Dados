#include <stdio.h>

    int particao(int *vetor, int esq,int dir){
        int pivot = vetor[esq];

        int i = esq -1;
        int j = dir +1;
        while(i){
            do{
                i +=1;

            }while(vetor[i]<pivot);
            do{
                j-=1;
            }while(vetor[j]>pivot);

            if(i>=j){
                return j;
            }
        }
    }
void quicksort(int *vetor,int esq, int dir){
    if(){
        int pivot = particao(vetor,esq,dir);
    }

}
int main(){
    int vetor[] = {5, 0 , 1 , 2 , 10 , 8 , 7 , 6 , 3 , 9 , 4};
}