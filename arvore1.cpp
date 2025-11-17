void insere(TArv *a, TInfo x) {
    if (*a == NULL) {
        *a = (PNo)malloc(sizeof(TNo));
        (*a)->info = x;
        (*a)->esq = NULL;
        (*a)->dir = NULL;
    } else {
        if (x < (*a)->info) {
            insere(&(*a)->esq, x);
        } else if (x > (*a)->info) {
            insere(&(*a)->dir, x);
        }
    }
}
