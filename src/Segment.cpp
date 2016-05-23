#include "Segment.h"

#include "Courbe.h"

// File modification date : 17/05/2016

double Segment::getLongueur()
{
    Point _p1 = this->getPointDebut();
    Point _p2 = this->getPointFin();
    double L = _p1.distanceA(_p2) ;
    return L ;
}



void Segment::diviserEnNParties(int N)
{
// Create N new segments from the initial one :
//
// For each loop : First, find the new length of each new segment. Then,
// call diviserTaille for finding how to divide the initial segment.
// Finally, create the new segment.

    for(int i=0 ; i<N ; i++)
    {
//        double taille = getLongueur()/N ;
//
//        Segment diviserTaille(taille) ;
//
//        Courbe::courbe(p1, p2, NULL, 0) ;
    }
}
