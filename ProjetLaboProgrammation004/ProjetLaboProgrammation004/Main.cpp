#include "Header.h"

void main()
{
	Patron patr("Boss");
	patr.afficher();

	patr.ajouterChefDeProjet( "Allan" );
	patr.ajouterChefDeProjet( "Thomas" );
	patr.ajouterChefDeProjet( "Bruno" );

	patr.afficherChefDeProjet();

	system("pause");
}