void matmul(
    const float* m1,
    const float* m2,
    float* ans,
    int rows_m1,
    int cols_m1,
    int cols_m2)
{
    for (int i = 0; i < rows_m1; i++) {
        for (int j = 0; j < cols_m2; j++) {
            float sum = 0.0F;
            for (int k = 0; k < cols_m1; k++) sum += m1[i * cols_m1 + k] * m2[k * cols_m2 + j];
            ans[i * cols_m2 + j] = sum;
        }
    }
}