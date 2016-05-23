#ifndef COURBE_H
#define COURBE_H

#include <Contour.h>

// File modification date : 17/05/2016

class Courbe : public Contour
{
public:

    //Operations :
    void Courbe() ;
    void ~Courbe() ;
    int getId() ;
    Point getPointDebut() ;
    Point getPointFin() ;

protected:

private:

    //Attributes :
    static int id_inc ;
    int id ;
    point p1 ;
    point p2 ;

    //Operations :
    abstract double getLongueur() ;
    abstract int diviserTaille(double Taille) ;
    abstract void diviserEnNParties(int N) ;

};

#endif // COURBE_H
