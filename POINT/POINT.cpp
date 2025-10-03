// POINT.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
using namespace std;
#include <iostream>

#include "Point.h"
#include <math.h>

int main()
{
    Point p1(2,3);

    Point p2(5, 4);

    cout <<"LA DISTANCE ENTRE P1 ET P2  EST " << p1.distance(p2) << "cm " <<  endl;

    cout << "LES COORDONNEES DU POINT P2 EST ";

    p2.afficher();


    






    
    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

Point::Point(float x , float y)
{
     this->X = x;
     this->Y = y;

}

float Point::distance(Point p)
{
    return sqrt(pow(this->X + p.X, 2) + pow(this->Y + p.Y, 2));

}

void Point::afficher()
{
    cout << "(" << this->X << "cm " <<"," << this->Y << "cm" << ")" << endl;
}
