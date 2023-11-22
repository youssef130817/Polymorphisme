#ifndef DEF_FORME_2D
#define DEF_FORME_2D

#include "Forme.hpp"
#include <iostream>

class Forme_2D : public Forme
{
protected:
public:
    Forme_2D()= default;
    virtual void Afficher() const = 0;
    virtual double Surface() const = 0;
    virtual double Perimetre() const = 0;
};

#endif