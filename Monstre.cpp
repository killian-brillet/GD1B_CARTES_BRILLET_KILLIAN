#include "Monstre.h"
#include <iostream>


    Monstre::Monstre(char nomMonstre, int vieMonstre, int attMonstre, bool etatMonstre) : _nomMonstre(), _vieMonstre(), _attMonstre(), _etatAttente(true){}

    void Monstre::affiche(){
        std::cout << "Monstre :" << _nomMonstre << std::endl;
        std::cout << std::endl;
        std::cout << "PV = " << _vieMonstre << std::endl;
        std::cout << "Valeur d'attaque = " << _attMonstre << std::endl;
    }

    void Monstre::tourattaque(){
        
    }

    void Monstre::repos(){
        if (_etatMonstre == true){
            _etatMonstre = false
        }
        if (_etatMonstre == false){
            _etatMonstre = true
        }
    }

    void Monstre::getPV(){

    }

    void Monstre::setPV(){

    }

    void Monstre::getatt(){

    }

    void Monstre::setatt(){

    }
