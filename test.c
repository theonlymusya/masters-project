

int main() {
    int A[4][4][4];
    int m = 3;
    int l = 2;
    for (int i = 0; i < std::sqrt(4); i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                A[i][j][k] = x[i] + y[j] + z[k];
            }
            int p = k + 1;
            p++;
            p += 1;
            B[i][j] = x[p] + y[j];
            C[i][j] = x[j] + y[i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            D[i][j] = A[i][j][0] + B[i][j] + C[i][j];
        }
    }
}