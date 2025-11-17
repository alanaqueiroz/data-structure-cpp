int retiraPilha(TPilha *p, int qual, TInfo *var) {
    if (qual == 1) {
        if (p->topo1 == 0) {
            return 0;
        } else {
            *var = p->elem[p->topo1-1];
            p->topo1 = p->topo1 - 1;
            return 1;
        }
    } else {
        if (p->topo2 == MAX+1) {
            return 0;
        } else {
            *var = p->elem[p->topo2-1];
            p->topo2 = p->topo2 + 1;
            return 1;
        }
    }
}
