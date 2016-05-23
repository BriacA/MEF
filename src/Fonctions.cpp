#include "Fonctions.h"
#include <math.h>

Fonctions::Fonctions()
{
    //ctor
}

Fonctions::~Fonctions()
{
    //dtor
}


double Fonctions::calculAngle(Point p1, Point p2, Point p3, int sens)
{
    //p2 est le point milieu de l'angle.

    //Si sens =  1 : Calcul en positif
    //Si sens =  0 : Calcul dans l'ordre des points : p1 -> p2 -> p3
    //Si sens = -1 : Calcul en negatif

    double x1_r = p1.getX()-p2.getX();
    double y1_r = p1.getY()-p2.getY();
    double x2_r = 0;
    double y2_r = 0;
    double x3_r = p3.getX()-p2.getX();
    double y3_r = p3.getY()-p2.getY();

    return calculAngle(x1_r,y1_r) - calculAngle(x3_r,y3_r);


}

double Fonctions::calculAngle(double x, double y)
{
    return atan2(x,y);
}

double Fonctions::getLongueur(Point p1,Point p2)
{
    return getLongueur(p1.getX(),p1.getY(),p2.getX(),p2.getY());
}

double Fonctions::getLongueur(double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
