#ifndef FICHIERIO_H
#define FICHIERIO_H

#include <Contour.h>

class FichierIO
{
    public:
        FichierIO();
        virtual ~FichierIO();
        static Contour loadFile();
        static bool saveGeo(Contour contour);
        static bool saveCal(Contour Contour);

    protected:

    private:
};

#endif // FICHIERIO_H
