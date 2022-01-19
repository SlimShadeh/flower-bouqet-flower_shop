#include "buket.h"

ostream &operator<<(ostream &it, Bouqet &b) {
    b.current=b.first;
    while(b.current->nxt){
        cout << "(" << b.current->c->getName() << ")" << b.current->c->getSelling() << "RSD, ";
        b.current=b.current->nxt;
    }
    cout << "(" << b.current->c->getName() << ")" << b.current->c->getSelling() << "RSD\n ";
}

Bouqet::~Bouqet() {
    Elem* tek=first,*stari=nullptr;
    while(tek){
        stari=tek;
        tek=tek->nxt;
        delete(stari);
    }

}

int Bouqet::purchasePrice() {
    int nab=0;
    Elem *tek=first;
    while(tek){
        nab+= tek->c->getPurchase();
        tek=tek->nxt;
    }
    return nab;
}

int Bouqet::sellingPrice() {
    int prod=0;
    Elem *tek=first;
    while(tek){
        prod+= tek->c->getSelling();
        tek=tek->nxt;
    }
    return prod;
}

int Bouqet::profit() {
    return sellingPrice() - purchasePrice();
}

bool operator>(Bouqet &b1, Bouqet &b2) {
    if(b1.profit() > b2.profit()) return true;
    return false;
}

Bouqet::Bouqet(const Bouqet &b) {
    Elem *tek=b.first;
    //this->first=b.first;
    while(tek){
        //this->first=tek;
        first=new Elem(b.first->c, first);
        tek=tek->nxt;

    }
    //this->first=b.first;
}
