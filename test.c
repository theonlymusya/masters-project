for (int i = 0; i < N; i++) {
    for (int k = i + 1; k < N; k++) {
        double factor = a[k][i] / a[i][i];
        for (int j = i; j <= N; j++) {
            a[k][j] -= factor * a[i][j];
        }
    }
}

double x[N];
for (int i = N - 1; i >= 0; i--) {
    x[i] = a[i][N] / a[i][i];
    for (int j = i + 1; j < N; j++) {
        x[i] -= a[i][j] * x[j] / a[i][i];
    }
}
