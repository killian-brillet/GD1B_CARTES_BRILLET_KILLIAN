#include "Monstre.h"
#include <iostream>

using namespace std;

    Monstre::Monstre(char nomMonstre, int vieMonstre, int attMonstre, bool etatMonstre) : _nomMonstre(), _vieMonstre(), _attMonstre(), _etatAttente(){}

    void Monstre::affiche(){
        cout << "Monstre :" << _nomMonstre << endl;
        cout << endl;
        cout << "PV = " << _vieMonstre << endl;
        cout << "Valeur d'attaque = " << _attMonstre << endl;
    }

    void Monstre::tourattaque(){
        if (_etatMonstre == false){
            cout << "Le monstre se repose" << endl;
        }
        else{
            _vieMonstre = _vieMonstre - attaquetour
        }
    }

    void Monstre::repos(){
        if (_etatMonstre == true){
            _etatMonstre = false;
        }
        if (_etatMonstre == false){
            _etatMonstre = true;
        }
    }

    void Monstre::getPV(){
        return _vieMonstre
    }

    void Monstre::setPV(){

    }

    void Monstre::getatt(){
        return _attMonstre
    }

    void Monstre::setatt(){

    }
