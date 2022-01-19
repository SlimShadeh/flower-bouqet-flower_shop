#ifndef CVET_BUKET_CVECARA_CVET_H
#define CVET_BUKET_CVECARA_CVET_H
#include <iostream>
#include <string>
using namespace std;

class Flower {
    string name;
    int purchasePr,sellingPr;
    friend class Buket;
public:
    Flower(string ime, int nab, int prod): purchasePr(nab), sellingPr(prod){ name=ime;}

    //~Flower();
    Flower(const Flower &c);

    //friend void Bouqet::add;

    const string &getName() const;

    int getPurchase() const;

    int getSelling() const;

    int profit(){
        return sellingPr - purchasePr;
    }
    friend bool operator==(const Flower &c1, const Flower &c2);
    friend ostream& operator <<(ostream& it,const Flower &c);
};



#endif //CVET_BUKET_CVECARA_CVET_H
