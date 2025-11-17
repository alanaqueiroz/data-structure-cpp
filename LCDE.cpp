int eliminaListaC(PNo *l, TInfo *dado) {
    PNo p;
    if (*l) {
        p = *l;
        *dado = p->info;

        if (p->dir == p) {
            *l = NULL;
        } else {
            p->esq->dir = p->dir;
            p->dir->esq = p->esq;
            *l = p->dir;
        }

        free(p);
        return 1;
    } else {
        return 0;
    }
}
