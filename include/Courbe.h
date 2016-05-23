#ifndef COURBE_H
#define COURBE_H

#include <Coutour.h>

// File modification date : 17/05/2016

class Courbe : public Coutour
{
public:

    //Operations :
    int getId() ;
    Point getPointDebut() ;
    Point getPointFin() ;

protected:

private:

    //Attributes :
    static id_inc ;
    int id ;
    point p1 ;
    point p2 ;

    //Operations :
    void courbe() ;
    abstract double getLongueur() ;
    abstract int diviserTaille(double Taille) ;
    abstract void diviserEnNParties(int N) ;

};

#endif // COURBE_H
