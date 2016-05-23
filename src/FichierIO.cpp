#include "FichierIO.h"
#include<iostream>

#include <fstream>
#include "Contour.h"

using namespace std;

FichierIO::FichierIO()
{
    //ctor
}

FichierIO::~FichierIO()
{
    //dtor
}

Contour FichierIO::loadFile()
{
    Contour contour;
    ifstream fichier("test.txt", ios::in);  // on ouvre le fichier en lecture
    if(fichier)  // si l'ouverture a réussi
    {
        // instructions
        fichier.close();  // on ferme le fichier
    }
    else
    {
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }
    return contour;
}
