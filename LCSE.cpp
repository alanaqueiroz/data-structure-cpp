int eliminaListaC(PNo *l, TInfo *dado) {
    PNo p, q;
    if (*l) {
        p = *l;
        *dado = p->info;

        if (p->prox == p) {
            *l = NULL;
        } else {
            q = *l;
            while (q->prox != *l) {
                q = q->prox;
            }
            q->prox = p->prox;
            *l = p->prox;
        }

        free(p);
        return 1;
    } else {
        return 0;
    }
}
