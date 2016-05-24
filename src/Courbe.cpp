#include "Courbe.h"
#include "math.h"


// File modification date : 17/05/2016

void Courbe::Courbe(Point p1, Point p2, Point centre, double angle)
{
    _id = id_inc ;
    id_inc ++ ;

    _p1 = p1 ;
    _p2 = p2 ;

    if(centre != NULL)
    {
        Arc::arc(Point centre, double angle) ;
    }
}

void Courbe::~Courbe()
{
  //dtor
}


int Courbe::getId()
{
    return this->id ;
}

Point Courbe::getPointDebut()
{
    return this->p1 ;
}

Point Courbe::getPointFin()
{
    return this->p2 ;
}

