void imprime(TArv a, int n) {
    int i;
    if (a != NULL) {
        imprime(a->dir, n+5);
        for (i = 0; i < n; i++) {
            cout << " ";
        }
        cout << a->info << "(" << a->freq << ")" << endl;
        imprime(a->esq, n+5);
    }
}
