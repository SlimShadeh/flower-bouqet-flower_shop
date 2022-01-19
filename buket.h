#ifndef CVET_BUKET_CVECARA_BUKET_H
#define CVET_BUKET_CVECARA_BUKET_H
#include "cvet.h"

class Bouqet {
    struct Elem {
        Flower* c;
        Elem *nxt;

        Elem(Flower *c, Elem *sl=nullptr): c(c), nxt(sl){}
    };
    Elem* first=nullptr,*current;
public:
    Bouqet()=default;
    Bouqet(const Bouqet& b);
    ~Bouqet();

    int purchasePrice();
    int sellingPrice();
    int profit();

    friend bool operator >(Bouqet &b1, Bouqet &b2);

    void add(Flower &c){
        first=new Elem(&c, first);
    }

    friend ostream& operator <<(ostream& it, Bouqet &b);
};


#endif //CVET_BUKET_CVECARA_BUKET_H