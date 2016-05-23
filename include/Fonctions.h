#ifndef FONCTIONS_H
#define FONCTIONS_H

#include "Point.h"

class Fonctions
{
public:
    Fonctions();
    virtual ~Fonctions();

    double calculAngle(Point p1, Point p2, Point p3, int sens);
    double getLongueur(Point p1, Point p2);
    double getLongueur(double x1, double y1, double x2, double y2);

protected:
private:

    double calculAngle(double x, double y);
};

#endif // FONCTIONS_H
