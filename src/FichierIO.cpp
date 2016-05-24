#include "FichierIO.h"
#include<iostream>

#include <fstream>

using namespace std;

FichierIO::FichierIO()
{
    //ctor
}

FichierIO::~FichierIO()
{
    //dtor
}

Contour loadFile()
{
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
}
