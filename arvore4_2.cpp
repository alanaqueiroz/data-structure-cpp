void insere(TArv *a, TInfo x) {
    if (*a == NULL) {
        *a = (PNo)malloc(sizeof(TNo));
        (*a)->info = x;
        (*a)->freq = 1;
        (*a)->esq = NULL;
        (*a)->dir = NULL;
    } else {
        if (x == (*a)->info) {
            (*a)->freq++;
        } else if (x < (*a)->info) {
            insere(&(*a)->esq, x);
        } else {
            insere(&(*a)->dir, x);
        }
    }
}
