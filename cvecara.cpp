#include "cvecara.h"
/*
void FlowerShop::add( Bouqet &b) {
    cout<< b<<"dodaj1\n";
    if (b.sellingPrice()> (b.purchasePr()+0)*1.2){
        cout<<b<<endl;
        //profit-=b.purchasePrice();
        first=new Elem1(b,first);
        cout << "aovde\n";
        //modify();
    }
    cout <<"xd\n";
    cout<< first->b<<"dodaj2\n";
}
*/

void FlowerShop::modify() {

    for(Elem1*tek=first; tek->nxt; tek=tek->nxt){
        for(Elem1 *t2=tek->nxt; t2; t2=t2->nxt){
            if(tek->b->profit() > t2->b->profit()){
                Bouqet *temp=tek->b;
                tek->b=t2->b;
                t2->b=temp;
            }
        }
    }
}


void FlowerShop::sell(int i) {
    Elem1 *tek=first,*stari=nullptr;
    if (i==0) first=first->nxt;
    while(tek && i>0){
        stari=tek;
        tek=tek->nxt;
    }
    profit+= tek->b->sellingPrice();
    stari->nxt=tek->nxt;
    Elem1 *brisi=tek;
    delete(brisi);
}

ostream &operator<<(ostream &it, FlowerShop &c1) {
    cout << c1.profit << "RSD\n";

    c1.current=c1.first;
    while(c1.current){
        cout <<*(c1.current->b);
        c1.current=c1.current->nxt;
    }
}

void FlowerShop::add(Bouqet *b) {
    if (b->sellingPrice() > (b->purchasePrice() + 0) * 1.2){
        profit-= b->purchasePrice();
        first=new Elem1(b, first);
        modify();
    }
}
