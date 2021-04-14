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

    /* Creation des monstres */
    monstrejoueur.Monstre(nom, pv, attaque, true);
    monstreennemi.Monstre("Globox", 10, 5, true);

    /* Boucle tant que monstres vivants */
    while (monstrejoueur._vieMonstre > 0 || monstreennemi._vieMonstre > 0){
        monstrejoueur.affiche();
        monstreennemi.affiche();
        monstrejoueur.tourattaque();
        monstreennemi.tourattaque();
        monstrejoueur.repos();
        monstreennemi.repos();
    }
    
    /*Fin de partie*/
    monstrejoueur.affiche();
    monstreennemi.affiche();
    cout << "Fin de partie" << endl;
}