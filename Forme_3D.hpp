#ifndef DEF_FORME_3D
#define DEF_FORME_3D

#include <iostream>
#include "Forme.hpp"

class Forme_3D : public Forme
{

protected:
public:
    virtual void Afficher() const = 0;
    virtual double volume() const = 0;
};

#endif