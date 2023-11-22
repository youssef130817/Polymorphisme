#ifndef DEF_CARRE
#define DEF_CARRE

#include <iostream>
#include <string>
#include "Forme_2D.hpp"

// Classe pour le carré
class Carre : public Forme_2D
{
    double m_cote;

public:
    Carre(double c);
    void Afficher() const;
    double Surface() const;
    double Perimetre() const;
};

#endif