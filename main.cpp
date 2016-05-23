#include <iostream>

#include <FichierIO.h>
#include "Contour.h"

using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    Contour contour = FichierIO::loadFile();
    return 0;
}
