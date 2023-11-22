#ifndef DEF_FORME
#define DEF_FORME

#include <iostream>
#include <string>

class Forme
{

protected:
public:
    Forme()= default;
    virtual void Afficher() const=0;
};

#endif
