#include "Segment.h"

// File modification date : 17/05/2016

double Segment::getLongueur()
{
    double L = p1.distanceA(p2) ;
    return L ;
}

int Segment::diviserTaille(double taille)
{
// Method to divide the segment :
//
//

    double L = p1.distance1(p2) ;

    double N = L/taille ;
    int entier_N = floor(N) + 1 ;
    double decimale_N = N - entier_N + 1 ;

    double new_taille = taille - decimale_N/entier_N ;
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
        double taille = p1.distanceA(p2)/N ;

        Segment diviserTaille(taille) ;

        Courbe::courbe(p1, p2, NULL, 0) ;
    }
}
