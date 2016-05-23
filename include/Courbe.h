#ifndef COURBE_H
#define COURBE_H

#include <Contour.h>
#include <Point.h>
// File modification date : 17/05/2016

class Courbe
{
public:

    //Operations :
    Courbe(Point _p1, Point _p2);
    ~Courbe() ;
    int getId() ;
    Point getPointDebut() ;
    Point getPointFin() ;
    virtual  double getLongueur() ;
    virtual  int diviserTaille(double Taille) ;

protected:

private:

    //Attributes :
    static int id_inc ;
    int id ;
    Point p1 ;
    Point p2 ;

    //Operations :

    void diviserEnNParties(int N) ;

};

#endif // COURBE_H
