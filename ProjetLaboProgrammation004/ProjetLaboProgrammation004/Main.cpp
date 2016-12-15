#include "Header.h"

void main()
{
	Patron patr("Boss");
	patr.afficher();
	
	//int compteurCDP = Patron::returnCompteurCDP();

	ChefDeProjet cdp("PremierCDP",patr);
	ChefDeProjet cdp1("DeuxiemeCDP", patr);
	
	patr.ajouterChefDeProjet(cdp);
	patr.ajouterChefDeProjet(cdp1);

	cdp.afficher();
	system("pause");
}