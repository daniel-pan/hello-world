#include "unistd.h"
#include "math.h"

int factorial(int n){
        return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

#define N 1024 * 1024 * 256

main(int argc, char **argv){

        if (argc != 2){
                exit(0);
        }
        int size = atoi(argv[1]);
//      printf("%d\n", size);
        int i = 0;
        int j = 0;
        int **mem;
        mem = (int**)malloc(size * sizeof(int*));

        for (i = 0; i < size; i++){
                mem[i] = (int*)malloc(N * sizeof(int));
                for (j = 0; j < N; j++){
                        mem[i][j] = 0;
                }
        }

        while (1){
                for (i = 0; i < size; i++){
                        for (j = 0; j < N; j++){
                                mem[i][j] = factorial(100);
                        }
                }
        }

}
