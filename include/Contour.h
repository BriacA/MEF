
//Author : Clement ABADIE

#ifndef CONTOUR_H
#define CONTOUR_H

#include <list>
#include "Point.h"
#include "Courbe.h"

using namespace std;

class Contour
{
public:
    Contour();
    virtual ~Contour();

    list<Point> contourActif;
    list<Courbe> courbes;

    void mailler();
    void sauver();

protected:
private:

    void separer();
    void trier();
    void verifierSens();
    void boucleMaillage();
};

#endif // CONTOUR_H
