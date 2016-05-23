#ifndef ARC_H
#define ARC_H

#include "Courbe.h"

// File modification date : 17/05/2016

class Arc : public Courbe
{
public:

    //Attributes ;
    Arc(Point p1, Point p2, Point centre) ;
    Point getCentre() ;
    double getAngle() ;

protected:

private:

    //Attributes :
    Point centre ;
    double angle ;

    //Operations :
    void diviserEnNParties(int N) ;
};

#endif // ARC_H
