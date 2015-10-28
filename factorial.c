#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"

int factorial(int n){
        return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

main(int argc, char **argv){
        
        if (argc != 2){
                exit(0);
        }
        int size = atof(argv[1]) * 1024 * 1024 * 1024;
        printf("%d\n", size);
        float *mem = (float*)malloc(sizeof(float) * size / 4);
        while (1) {
                int i = 0;
                for (i = 0; i < size; i++){
                        mem[i] = factorial(100);                        
                }

        }
}
