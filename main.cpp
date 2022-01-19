#include <iostream>
#include "cvecara.h"
int main() {
    Flower c1("Ljiljan", 1000, 2003);
    Flower c2("Ljiljan", 1500, 1995);
    Flower c3("Ruza", 500, 650);
    cout << c1.profit() << endl;
    if (c1==c2)cout <<"ispravno" << endl;
    cout << c1;

    //Bouqet testing
    Bouqet b1;
    b1.add(c1);
    b1.add(c3);
    cout << b1;
    //b1.Bouqet();
    //cout << b1;
    cout << b1.purchasePrice() << "\n";\
    cout << b1.sellingPrice() << "\n";
    cout << b1.profit() << "\n";
    //cout<<b1.getSelling();
    //Testing if one bouqet is bigger than another
    Bouqet b2;
    b2.add(c2);
    b2.add(c3);
    cout<<b2<<endl;
    cout << b2.profit() << endl;
    if (b1>b2) cout << "b1 je veci od b2\n";


    //FlowerShop testing
    FlowerShop cv;
    cv.add(&b1);
    cv.add(&b2);
    cout<<cv;

    return 0;
}
