#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vetor;
    int tamanho, i;
    scanf("%d", &tamanho);
    
    vetor = (int*)malloc(tamanho * sizeoff(int));
    
    if (tamanho == 0){
        printf("[vazio]");
        }else{
        for(i = 0; i < tamanho; i++){ 
            scanf("%d", &vetor[i]);
        }
        printf("[");
        for(i = 0; i < tamanho; i++){
            printf("%d ", &vetor[i]);
            if(i<tamanho-1){
                printf(", ");
                }
            }
            printf("]");
    
      free(vetor);
    }

    return 0;
}
