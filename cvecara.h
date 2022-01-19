#ifndef CVET_BUKET_CVECARA_CVECARA_H
#define CVET_BUKET_CVECARA_CVECARA_H
#include "buket.h"

class FlowerShop {
    int profit;
    struct Elem1 {
        Bouqet *b;
        Elem1 *nxt;

        Elem1(Bouqet *b, Elem1 *sl=nullptr): b(b), nxt(sl){}
    };
    Elem1* first=nullptr,*current;
public:
    FlowerShop(){
        profit=1000;
    }
    void add(Bouqet *b);

    void modify();

    void sell(int i);

    friend ostream& operator <<(ostream& it, FlowerShop &c1);
};


#endif //CVET_BUKET_CVECARA_CVECARA_H
