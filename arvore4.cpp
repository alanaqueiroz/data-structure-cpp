#include <iostream>
#include <stdlib.h>
using namespace std;

typedef char TInfo;

typedef struct no {
    TInfo info;
    int freq;
    no *esq, *dir;
} TNo;

typedef TNo* TArv;

void cria(TArv *a) {
    *a = NULL;
}

void insere(TArv *a, TInfo x) {
    if (*a == NULL) {
        *a = (TArv) malloc(sizeof(TNo));
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

void imprime(TArv a, int n) {
    int i;
    if (a != NULL) {
        imprime(a->dir, n+5);
        for (i = 0; i < n; i++) {
            cout << " ";
        }
        cout << a->info << "(" << a->freq << ")" << endl;
        imprime(a->esq, n+5);
    }
}

void termina(TArv *a) {
    if (*a != NULL) {
        termina(&(*a)->esq);
        termina(&(*a)->dir);
        free(*a);
        *a = NULL;
    }
}

int main() {
    TArv arv;
    cria(&arv);

    insere(&arv, 'A');
    insere(&arv, 'C');
    insere(&arv, 'B');
    insere(&arv, 'A');
    insere(&arv, 'A');
    insere(&arv, 'B');
    insere(&arv, 'D');

    imprime(arv, 0);

    termina(&arv);

    return 0;
}
