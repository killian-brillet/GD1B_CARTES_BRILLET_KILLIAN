#include <string>
#include <iostring>

class Monstre{
    private:
        char _nomMonstre;
        int _vieMonstre;
        int _attMonstre;
        bool _etatAttente;

    public:
        Monstre(char _nomMonstre, int _vieMonstre, int _attMonstre, bool _etatMonstre);
        void affiche();
        /*void tourattaque();
        void attaque();*/
    
}