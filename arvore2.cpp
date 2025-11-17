void mostraTextual(TArv a) {
    if (a == NULL) {
        cout << "<>";
    } else {
        cout << "<" << a->info << " ";
        mostraTextual(a->esq);
        cout << " ";
        mostraTextual(a->dir);
        cout << ">";
    }
}
