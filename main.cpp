#include "Monstre.cpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    char nom;
    int pv;
    int attaque;

    /*Input valeur monstre joueur */
    cout << "Inserer le nom de votre monstre" << endl;
    cin >> nom;
    cout << "Inserer les PV de votre monstre" << endl;
    cin >> pv;
    cout << "Inserer l'attaque de votre monstre" << endl;
    cin >> attaque;

    monstrejoueur.Monstre(nom, pv, attaque, true);
    monstreennemi.Monstre("Globox", 10, 5, true);
    monstrejoueur.affiche();
    monstreennemi.affiche();


}