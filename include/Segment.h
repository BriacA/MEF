#ifndef SEGMENT_H
#define SEGMENT_H

#include <Courbe.h>

// File modification date : 17/05/2016

class Segment : public Courbe
{
    public:
        double getLongueur();

    protected:

    private:

    //Attributes :

    //Operations :
    void diviserEnNParties(int N) ;
};

#endif // SEGMENT_H
