#ifndef ARC_H
#define ARC_H

#include <Courbe.h>

// File modification date : 17/05/2016

class Arc : public Courbe
{
public:

    //Attributes ;
    void arc(Point centre, double angle) ;
    Point getCentre() ;
    double getAngle() ;

protected:

private:

    //Attributes :
    Point centre ;
    double angle ;

    //Operations :
    int
    void diviserEnNParties(int N) ;
};

#endif // ARC_H
