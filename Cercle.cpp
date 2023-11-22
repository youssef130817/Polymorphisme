#include "Cercle.hpp"
#include <iostream>

using namespace std;

Cercle::Cercle(double r) : m_rayon(r)
{
}
double Cercle::Surface() const
{
    return 3.14 * m_rayon * m_rayon;
}
double Cercle::Perimetre() const
{
    return 2 * 3.14 * m_rayon;
}

void Cercle::Afficher() const
{
    cout << endl
         << "c'est un cube avec un  rayon de " << m_rayon << "et de surface de :" << Surface() << " et de perimetre de : " << Perimetre();
}