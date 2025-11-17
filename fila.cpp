int retiraFila(TFila *f, TInfo *var) {
    if (f->quantidade == 0) {
        return 0;
    } else {
        *var = f->elem[f->inicio-1];
        f->inicio = (f->inicio % MAXELEM) + 1;
        f->quantidade = f->quantidade - 1;
        return 1;
    }
}
