#ifndef DEF_CERCLE
#define DEF_CERCLE

#include <iostream>
#include <string>
#include "Forme_2D.hpp"

// Classe pour le cercle
class Cercle : public Forme_2D
{
private:
    double m_rayon;

public:
    Cercle(double);
    double Surface() const;
    double Perimetre() const;
    void Afficher() const;
};

#endif