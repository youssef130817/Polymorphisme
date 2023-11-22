#ifndef DEF_CUBE
#define DEF_CUBE

#include <iostream>
#include <string>
#include "Forme_3D.hpp"
// Classe pour le cube
class Cube : public Forme_3D
{
    double m_cote;

public:
    Cube(double);
    double volume() const;
    void Afficher() const;
};

#endif