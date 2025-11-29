#include <iostream>
using namespace std;

typedef char TInfo;

typedef struct no {
    TInfo info;
    no *prox;
} TNo;

typedef TNo *PNo;

void insereListaOrdenada(PNo *l, TInfo dado) {
    PNo p, ant, atual;
    p = (PNo) malloc(sizeof(TNo));
    p->info = dado;

    ant = NULL;
    atual = *l;

    while (atual && atual->info < dado) {
        ant = atual;
        atual = atual->prox;
    }

    if (ant == NULL) {
        p->prox = *l;
        *l = p;
    } else {
        p->prox = ant->prox;
        ant->prox = p;
    }
}

PNo buscaListaOrdenada(PNo l, TInfo dado) {
    while (l && l->info < dado) {
        l = l->prox;
    }
    if (l && l->info == dado) return l;
    return NULL;
}

int eliminaListaOrdenada(PNo *l, TInfo dado) {
    PNo ant = NULL, atual = *l;

    while (atual && atual->info < dado) {
        ant = atual;
        atual = atual->prox;
    }

    if (!atual || atual->info != dado) return 0;

    if (ant == NULL) {
        *l = atual->prox;
    } else {
        ant->prox = atual->prox;
    }

    free(atual);
    return 1;
}

void mostraLista(PNo l) {
    cout << "Lista:";
    while (l) {
        cout << " " << l->info;
        l = l->prox;
    }
    cout << endl;
}

int main() {
    PNo lista = NULL;
    PNo achou;

    insereListaOrdenada(&lista, 'C');
    insereListaOrdenada(&lista, 'A');
    insereListaOrdenada(&lista, 'D');
    insereListaOrdenada(&lista, 'B');
    mostraLista(lista);

    achou = buscaListaOrdenada(lista, 'C');
    if (achou) cout << achou->info << endl;

    eliminaListaOrdenada(&lista, 'B');
    mostraLista(lista);

    eliminaListaOrdenada(&lista, 'D');
    mostraLista(lista);

    return 0;
}