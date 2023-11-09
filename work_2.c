#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int size = 20;
    int* array = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++){
        array[i] = 1;
    }

    srand(time(NULL));
    int randind = rand() % 21;
    int randznach = rand() % 100;
    array[randind] = randznach;

    for (int i = 0; i < size -1; i++){
        if (array[i] != array[i+1]){
            if (i < 17){
                if (array[i+1] != array[i+2]){
                    printf("Лишний элемент %d находится на %d позиции \n", randznach, i+2);
                    break;
                }else{
                    printf("Лишний элемент %d находится на %d позиции\n", randznach, i+1);
                    break;
                }
            }else{
                if (array[i] != array[i-1]){
                    printf("Лишний элемент %d находится на %d позиции\n", randznach, i+1);
                    break;
                }else{
                    printf("Лишний элемент %d находится на %d позиции\n", randznach, i+2);
                    break;
                }
            }
        }
    }
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}