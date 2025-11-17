typedef struct {
    PNo inicio;
    PNo fim;
} TFila;

void iniciaFila(TFila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void insereFila(TFila *f, TInfo x) {
    PNo q = (PNo)malloc(sizeof(TNo));
    q->info = x;
    q->prox = NULL;

    if (f->fim)
        f->fim->prox = q;
    else
        f->inicio = q;

    f->fim = q;
}

int removeFila(TFila *f, TInfo *x) {
    if (f->inicio == NULL) return 0;
    PNo q = f->inicio;
    *x = q->info;
    f->inicio = q->prox;
    if (f->inicio == NULL) f->fim = NULL;
    free(q);
    return 1;
}

void mostraFila(TFila f) {
    PNo q = f.inicio;
    cout << "Fila:";
    while (q) {
        cout << " " << q->info;
        q = q->prox;
    }
}

void terminaFila(TFila *f) {
    TInfo x;
    while (removeFila(f, &x));
}
