#include <iostream>
using namespace std;

int main()
{
    int prixKilo = 0, numKilo = 0;
    double tauxTVA = 0, prixHT = 0, prixTTC = 0;

    cout << "Veuillez le prix d'un kilo de carotte : ";
    cin >> prixKilo;

    cout << "Veuillez entrer le nombre de kilo de carotte : ";
    cin >> numKilo;

    cout << "Veuillez entrer le taux de TVA : ";
    cin >> tauxTVA;

    prixHT = prixKilo * numKilo;
    prixTTC = prixHT * (1 + (tauxTVA / 100));

    cout << "Prix TTC de " << numKilo << " kilos de carottes : " << prixTTC << endl;

    return 0;
}