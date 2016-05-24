#include "Courbe.h"
#include "math.h"


#include <Point.h>


// File modification date : 17/05/2016

//Courbe::Courbe(Point _p1, Point _p2)
//{
//
////    id_inc ++ ;
////    this->id = Courbe::id_inc;
//    this->p1 = _p1 ;
//    this->p2 = _p2 ;
//}

//Courbe::~Courbe()
//{
//  //dtor
//}


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

int Courbe::diviserTaille(double taille)
{
// Method to divide the segment :
//
//

    double L = this->p1.distanceA(this->p2);

    double N = L/taille ;
    int entier_N = floor(N) + 1 ;
    return entier_N;
//    double decimale_N = N - entier_N + 1 ;
//
//    double new_taille = taille - decimale_N/entier_N ;
}

