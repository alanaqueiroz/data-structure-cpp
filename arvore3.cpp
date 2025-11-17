TArv busca(TArv a, TInfo x) {
    if (a == NULL) {
        return NULL;
    } else {
        if (x == a->info) {
            return a;
        } else if (x < a->info) {
            return busca(a->esq, x);
        } else {
            return busca(a->dir, x);
        }
    }
}
