#include "cvet.h"

bool operator==(const Flower &c1, const Flower &c2) {
    if(c1.name == c2.name) return true;
    return false;
}

ostream &operator<<(ostream &it, const Flower &c) {
    return it << c.name << endl;
}

Flower::Flower(const Flower &c) {
    sellingPr=c.sellingPr;
    purchasePr=c.purchasePr;
    name=c.name;
}

const string &Flower::getName() const {
    return name;
}

int Flower::getPurchase() const {
    return purchasePr;
}

int Flower::getSelling() const {
    return sellingPr;
}
