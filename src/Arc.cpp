#include "Arc.h"

// File modification date : 17/05/2016

void Arc::arc(Point centre, double angle)
{
    _centre = centre ;
    _angle = angle ;
}

Point getCentre()
{
    return this->centre ;
}

double getAngle()
{
    return this->angle ;
}

void Arc::diviserEnNParties(int N)
{
    for(int i=0 ; i<N ; i++)
    {

    }
}

