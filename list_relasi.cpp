#include "list_relasi.h"

void createList(List_relasi &L) {
    first(L) = NULL;
}

address_relasi alokasi(address_parent P, address_child C) {
    address_relasi Q = new elmlist_relasi;
    child(Q) = C;
    parent(Q) = P;
    next(Q) = NULL;
    return Q;
}

void insertFirst(List_relasi &L, address_relasi P) {
    next(P) = first(L);
    first(L) = P;
}


//void printInfo(List_relasi L) {
//    address_child P = first(L);
//   while(P !=NULL) {
//     cout<<"Bus"<<" -> "<<"Tujuan"<<endl;
//   cout << "ID : "<< info(child(P)).id << " -> "<<"ID : "<< info(parent(P)).id << endl;
// cout << "Nama Bus : "<< info(child(P)).id << " -> "<<"Kota : "<< info(parent(P)).kota << endl;
//P = next(P);
//   }
//}


address_relasi findElm(List_relasi L, address_parent P, address_child C) {
    address_relasi Q = first(L);
    while(Q != NULL) {
        if(parent(Q)==P && child(Q)== C) {
            return Q;
        }
        Q = next(Q);
    }
    return NULL;
}

void insertAfter(address_relasi &Prec, address_relasi P) {
    next(P) = next(Prec);
    next(Prec) = P;
}
