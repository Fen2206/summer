float sdot(int length, float *X, float *Y) {
    float result = 0.0f;
    for (int i = 0; i < length; i++) {
        result += X[i] * Y[i];
    }
    return result;
}