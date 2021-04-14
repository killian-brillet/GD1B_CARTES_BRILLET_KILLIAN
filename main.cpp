#include <Monstre.cpp>
#include <iostream>
#include <string>

int main(){
    char nom;
    int pv;
    int attaque;
    cout << "Inserer le nom de votre monstre" << endl;
    cin >> nom;
    cout << "Inserer les PV de votre monstre" << endl;
    cin >> pv;
    cout << "Inserer l'attaque de votre monstre" << endl;
    cin >> attaque;
    Monstre(nom, pv, attaque, true);

}