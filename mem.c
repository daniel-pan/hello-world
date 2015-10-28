#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include "limits.h"
#include "float.h"

#define N 100000000

main(){
        float *m = (float*)malloc(sizeof(float) * N);//INT_MAX);
        float *n = (float*)malloc(sizeof(float) * N);//INT_MAX);
        float *o = (float*)malloc(sizeof(float) * N);//INT_MAX);
        float *p = (float*)malloc(sizeof(float) * N);//INT_MAX);
        float *q = (float*)malloc(sizeof(float) * N);//INT_MAX);
        float *r = (float*)malloc(sizeof(float) * N);//INT_MAX);
        if (m == NULL || n == NULL){
                printf("can't allocate\n");
                exit(1);
        }
        int i = 0;
        srand((unsigned int)time(NULL));
        while (1){
                for (i = 0; i < N; i++){
                        m[i] = (float)rand() / (float)(RAND_MAX) * FLT_MAX;
                        n[i] = (float)rand() / (float)(RAND_MAX) * FLT_MAX;
                        o[i] = m[i] * n[i];
                        p[i] = (float)rand() / (float)(RAND_MAX) * FLT_MAX;
                        q[i] = (float)rand() / (float)(RAND_MAX) * FLT_MAX;
                        r[i] = p[i] * q[i];
                        if (r[i] != 0) {
                                float tmp = o[i] / r[i];
                        }
                }
        }

}
