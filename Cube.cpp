#include "Cube.hpp"
#include <iostream>

using namespace std;

Cube::Cube(double c) : m_cote(c) {}

double Cube::volume() const
{
    return m_cote * m_cote * m_cote;
}
void Cube::Afficher() const
{
    cout << endl
         << "c'est un cube avec un  cote de " << m_cote << "et de volume :" << volume();
}