#include <stdio.h>
#include <stdlib.h>

void dgemm(int length, double *A, double *B, double *C);

int main(void) {
    const int N = 1024;
    printf("Running DGEMM operation on %dx%d matrices\n", N, N);

    double *A = (double *)malloc(N * N * sizeof(double));
    double *B = (double *)malloc(N * N * sizeof(double));
    double *C = (double *)malloc(N * N * sizeof(double));

    for (int i = 0; i < N * N; i++) {
        A[i] = 1.0;
        B[i] = 2.0;
    }

    dgemm(N, A, B, C);

    free(A);
    free(B);
    free(C);

    return 0;
}
