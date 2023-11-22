#ifndef DEF_RECTANGLE
#define DEF_RECTANGLE

#include <iostream>
#include <string>
#include "Forme_2D.hpp"

// Classe pour le rectangle
class Rectangle : public Forme_2D
{
    double m_longueur, m_largeur;

public:
    Rectangle(double, double);
    void Afficher() const;
    double Surface() const;
    double Perimetre() const;
};

#endif