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
        int size = atof(argv[1]) * 1024 * 1024 * 1024 / 4;
        printf("%d\n", size);
        float *mem = (float*)malloc(sizeof(float) * size);
        while (1) {
                factorial(100);
        }
}
