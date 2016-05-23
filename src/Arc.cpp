#include "Arc.h"

#include "Courbe.h"

// File modification date : 17/05/2016

//Arc::Arc(Point p1, Point p2, Point centre)
//{
//    Courbe(p1,p2);
//    this->centre = centre ;
//}

Point Arc::getCentre()
{
    return this->centre ;
}

double Arc::getAngle()
{
    return this->angle ;
}

void Arc::diviserEnNParties(int N)
{
    for(int i=0 ; i<N ; i++)
    {

    }
}

