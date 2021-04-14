#include "Monstre.h"
#include <iostream>

    Monstre::Monstre(char _nomMonstre, int _vieMonstre, int _attMonstre, bool _etatMonstre) : _nomMonstre(nom), _vieMonstre(pv), _attMonstre(attaque), _etatAttente(true){

    }

    void Monstre::affiche(){
        std::cout << "Monstre :" << _nomMonstre << endl;
        std::cout << endl;
        std::cout << "PV = " << _vieMonstre << endl;
        std::cout << "Valeur d'attaque = " << _attMonstre << endl;
    }