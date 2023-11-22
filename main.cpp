#include <vector>
#include "Forme.hpp"
#include "Carre.hpp"
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Cube.hpp"

using namespace std;

int main()
{
    //une collection héterogéne
    vector<Forme *> figures;

    figures.push_back(new Carre(10));
    figures.push_back(new Cube(9.5));
    figures.push_back(new Cercle(4.6));
    figures.push_back(new Rectangle(3.6, 7.9));

    //afficher les informations des différentes objets
    for (int i = 0; i < figures.size(); i++)
        figures[i]->Afficher();

    //détruire l'éspace mémoire alloué pour les pointeurs Forme
    for (int i = 0; i < figures.size(); i++)
        delete figures[i];

    return 1;
}