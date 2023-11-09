#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matrix_print(int matrix[], int size){
    int n = 1;
    for (int i = 0; i < size; i++){
        if (n != 3){
            printf("%d ", matrix[i]);
        n += 1;
        }else{
            printf("%d\n", matrix[i]);
            n = 1;
        }
    }
    printf("\n");
}

int main(){

    int size = 9;
    int* matrix1 = malloc(sizeof(int) * size);
    int* matrix2 = malloc(sizeof(int) * size);
    int* matrixitog = malloc(sizeof(int) * size);

    srand(time(NULL));
    for (int i = 0; i < size; i++){
        matrix1[i] = rand() % 10;
        matrix2[i] = rand() % 100;
    }

    for (int i = 0; i < size; i++){
        matrixitog[i] = matrix1[i] + matrix2[i];
    }
    matrix_print(matrix1, 9);
    matrix_print(matrix2, 9);
    matrix_print(matrixitog, 9);
    
    return 0;
}