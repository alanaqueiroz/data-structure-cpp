#include <iostream>
using namespace std;

typedef char TInfo;

typedef struct no {
    TInfo info;
    no *prox;
} TNo;
typedef TNo* PNo;

typedef struct {
    PNo topo;
} TPilha;

void iniciaPilha(TPilha *p) {
    p->topo = NULL;
}

void push(TPilha *p, TInfo x) {
    PNo q = (PNo)malloc(sizeof(TNo));
    q->info = x;
    q->prox = p->topo;
    p->topo = q;
}

int pop(TPilha *p, TInfo *x) {
    if (p->topo == NULL) return 0;
    PNo q = p->topo;
    *x = q->info;
    p->topo = q->prox;
    free(q);
    return 1;
}

void mostraPilha(TPilha p) {
    PNo q = p.topo;
    cout << "Pilha:";
    while (q) {
        cout << " " << q->info;
        q = q->prox;
    }
}

void terminaPilha(TPilha *p) {
    TInfo x;
    while (pop(p, &x));
}
