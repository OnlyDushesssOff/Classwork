#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float* generate_mas(int size){
    float* arr = malloc(sizeof(float) * size);
    for(int i = 0; i < size; i++){
        float b = (float)(rand()%1000)/100;
        arr[i] = b;
    }
    return arr;
}

void generator_file(float* arr, int size){
    FILE* fil = fopen("mass.txt", "w");
    fprintf(fil, "%d\n", size);
    for(int i = 0; i < size; i++){
        fprintf(fil, "%f\n", arr[i]);
    }
    fclose(fil);
}

int read_file(float** new_mass){
    FILE* fil = fopen("mass.txt", "r");
    if(fil == NULL){
        printf("Error");
        return -1;
    }
    int size;
    fscanf(fil, "%d", &size);
    *new_mass = malloc(sizeof(float) * size);
    for(int i = 0; i < size; i++){
        fscanf(fil, "%f\n", &(*new_mass)[i]);
    }
    fclose(fil);
    return size;
}

void print_mas(float* new_mass, int size){
    for ( int i = 0; i < size; i++){
        printf("%f\n", new_mass[i]);
    }
}

int main(){
    int size;
    scanf("%d", &size);
    srand(time(NULL));
    float* mass = generate_mas(size+1);
    generator_file(mass, size);
    float* new_mass;
    size = 0;
    free(mass);
    size = read_file(&new_mass);
    print_mas(new_mass, size);
    return 0;
}
