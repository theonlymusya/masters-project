int main() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < l; ++k) {
                A[i][j][k] = x[i] + y[j] + z[k];
            }
            B[i][j] = x[i] + y[j];
            C[i][j] = x[j] + y[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            D[i][j] = A[i][j][0] + B[i][j] + C[i][j];
        }
    }
}