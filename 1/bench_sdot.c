#include <stdlib.h>

float sdot(int length, float *X, float *Y);

int main(void) {
    const int N = 1000000;

    float *X = (float *) malloc(N * sizeof(float));
    float *Y = (float *) malloc(N * sizeof(float));


    for (int i = 0; i < N; i++) {
        X[i] = (float)i;
        Y[i] = (float)(N - i);
    }

    float result = sdot(N, X, Y);

    free(X);
    free(Y);
    return 0;
}
