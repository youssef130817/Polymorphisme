#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double longueur, double largeur) : m_longueur(longueur), m_largeur(largeur)
{
}

double Rectangle::Surface() const
{
    return m_longueur * m_largeur;
}
double Rectangle::Perimetre() const
{
    return 2 * (m_longueur + m_largeur);
}

void Rectangle::Afficher() const
{
    cout << endl
         << "c'est un rectangle avec un largeur de " << m_largeur << "et longueur de " << m_longueur << "et de surface :" << Surface() << "et de perimetre :" << Perimetre();
}