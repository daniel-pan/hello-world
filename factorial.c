#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include "math.h"

int factorial(int n){
        return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

main(int argc, char **argv){
        
        if (argc != 2){
                exit(0);
        }
        float size = atof(argv[1]) * 1024 * 1024 * 1024 / 4;
        printf("%f\n", size);
        int *mem = (int*)malloc(sizeof(int) * size);
        while (1) {
                printf("%d\n", factorial(100));
        }
}
