#include <stdio.h>
#include <stdlib.h>

int main(){

    int size_array = 10;
    int* parray = malloc(sizeof(int) * size_array); //malloc - выделяет нужное количество памяти
                                                    //sizeof - определяет размер под нужный формат в "()"
    for (int i = 0; i < size_array; i++){
        parray[i] = i;
    }
    for (int i = 0; i < size_array; i++){
        printf("parray[%d] =  %d\n", i, parray[i]);
    }

    int* row1 = malloc(sizeof(int) * 4);
    int* row2 = malloc(sizeof(int) * 4);
    int* row3 = malloc(sizeof(int) * 4);
    int* row4 = malloc(sizeof(int) * 4);

    int** rows = malloc(sizeof(int) * 4);

    rows[0] = row1;
    rows[1] = row2;
    rows[2] = row3;
    rows[3] = row4;

    for (int i = 0; i<4;i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", rows[i][j]);
        }
        printf("\n");
    }
    return 0;
}