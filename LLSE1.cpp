void insereFimLista(PNo *l, TInfo dado) {
    PNo p = (PNo)malloc(sizeof(TNo));
    p->info = dado;
    p->prox = NULL;
    if (*l == NULL) {
        *l = p;
    } else {
        PNo q = *l;
        while (q->prox) {
            q = q->prox;
        }
        q->prox = p;
    }
}
