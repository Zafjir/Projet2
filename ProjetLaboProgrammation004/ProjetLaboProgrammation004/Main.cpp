#include "Header.h"

void main()
{
	Patron patr("Boss");
	patr.afficher();

	patr.ajouterChefDeProjet( "Allan" );
	patr.ajouterChefDeProjet( "Thomas" );
	patr.ajouterChefDeProjet( "Bruno" );

	patr.afficherChefDeProjet();

	/*ChefDeProjet &cdp = patr.cdp();
	cdp.vctProgrammeur*/

	patr.vctCDP[0].ajouterProgrammeur("BrunoBadassProg");
	patr.vctCDP[0].ajouterProgrammeur("BrunoGROSbadassProg");
	patr.vctCDP[0].ajouterProgrammeur("BrunoBadassProg2");
	patr.vctCDP[0].afficherProgrammeur();
	system("pause");
	system("cls");
	patr.vctCDP[1].ajouterProgrammeur("BrunoBadassProg");
	patr.vctCDP[1].ajouterProgrammeur("BrunoGROSbadassProg");
	patr.vctCDP[1].ajouterProgrammeur("BrunoBadassProg2");
	patr.vctCDP[1].afficherProgrammeur();
	system("pause");
	
	patr.vctCDP[1].vctProgrammeur.erase(patr.vctCDP[1].vctProgrammeur.begin()+1);
	system("cls");
	patr.vctCDP[1].afficherProgrammeur();
	system("pause");
}