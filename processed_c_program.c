for (int i = 0; i < P; i++) {
    S[i] = X[K * i];

    if (i < P - 1) {
        for (int j = 1; j < K; j += 1) {
            S[i] = S[i] + X[K * i + j];
        }
    } else {
        for (int j = 1; j < Q; j++) {
            S[i] = S[i] + X[K * i + j];
        }
    }
}
