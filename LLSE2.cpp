int eliminaFimLista(PNo *l, TInfo *dado) {
    if (*l == NULL) {
        return 0;
    } else if ((*l)->prox == NULL) {
        *dado = (*l)->info;
        free(*l);
        *l = NULL;
        return 1;
    } else {
        PNo p = *l;
        PNo q = NULL;
        while (p->prox) {
            q = p;
            p = p->prox;
        }
        *dado = p->info;
        q->prox = NULL;
        free(p);
        return 1;
    }
}
