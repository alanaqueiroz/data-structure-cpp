void ordena(TVetor v, int n) {
    int i, j;
    TDado x;
    mostra(v, n);
    for (i=1; i<n; i++) {
        for (j=n-1; j>=i; j--) {
            if (v[j-1].chave < v[j].chave) {
                x = v[j-1];
                v[j-1] = v[j];
                v[j] = x;
            }
            mostra(v, n);
        }
    }
    mostra(v, n);
}
