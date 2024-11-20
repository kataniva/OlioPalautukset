#include "cat.h"

#include <iostream>
#include <vector>
using namespace std;

using namespace std;

int main()
{
    vector<cat> catList;
    //luodaan cat-luokan olioita
    cat objcat_1=cat("Karvinen", "oranssi");
    cat objcat_2=cat("Monni", "musta");
    cat objcat_3=cat("Miuku", "valkoinen");

    //lisätään oliot listaan(vektoriin)
    catList.push_back(objcat_1);
    catList.push_back(objcat_2);
    catList.push_back(objcat_3);

    //tulostetaan listan ensimmäiset tiedot
    catList[0].printData();
    //tulostetaan kaikkien kissajen tiedot
    cout << "Kaikki kissat:" << endl;
    for(int x = 0; x <= 2; x++) {
        catList[x].printData();
    }
    //for-looppi, jos ei tiedetä alkioiden määrää
    cout << "Versio2" << endl;
    for(const cat& Cat: catList) {
        cout << "Nimi = " << Cat.getName() << " ja vari = " << Cat.getColor() << endl;
    }

    return 0;
}
