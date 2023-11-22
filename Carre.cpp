#include "Carre.hpp"
#include <iostream>

#include <string>

using namespace std;

Carre::Carre(double c) : m_cote(c)
{
}

double Carre::Surface() const
{
    return m_cote * m_cote;
}
double Carre::Perimetre() const
{
    return 4 * m_cote;
}
void Carre::Afficher() const
{
    cout << endl
         << "c'est un carre avec un  cote de " << m_cote << "et de surface :" << Surface() << "et de perimetre :" << Perimetre();
}