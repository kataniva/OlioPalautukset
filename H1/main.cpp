#include <iostream>
using namespace std;


void calSum(int a, int b) {
    int sum = a + b;
    cout << "Lukujen summa on: " << sum << "\n";
}

void calDiv(float a, float b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla!\n";
    } else {
        float div = a / b;
        cout << "Lukujen osamaara on: " << div << "\n";
    }
}


int retSum(int a, int b) {
    return a + b;
}

float retDiv(float a, float b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla!\n";
        return 0.0f;
    }
    return a / b;
}


int main()
{
    int a, b;

    cout << "Anna luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;


    calSum(a, b);
    calDiv(a, b);

    int summa = retSum(a, b);
    cout << "Palautettu summa: " << summa << "\n";

    float osamaara = retDiv(a, b);
    if (b != 0) {
        cout << "Palautettu osamaara: " << osamaara << "\n";
        return 0.0f;
    }
}
