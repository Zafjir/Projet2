#include "Header.h"

void clsTitre()
{
	system("cls");
	cout << "               ____________________________________________________________ " << endl;
	cout << "              |                                                            |" << endl;
	cout << "              |                         Projet CPP                         |" << endl;
	cout << "              | Berte Thomas                                 Programmation |" << endl;
	cout << "              |                                                            |" << endl;
	cout << "              |                Gestion d'une entreprise de                 |" << endl;
	cout << "              |                       developpement                        |" << endl;
	cout << "              |                                                            |" << endl;
	cout << "              |____________________________________________________________|\n" << endl;
}

int main()
{
	clsTitre();

	int choixmenu;
	int getEquipe;
	int getMatricule;
	int getMatricules;
	int getMatriculets;
	int getMatriculeti;

	string getNomCdp;
	string getNomProgrammeur;
	string getNomGd;
	string getNomSd;
	string getNomGameD;
	string getNomLd;
	string getNomSec;
	string getNomTechS;
	string getNomTechInfo;

	string getNomEntreprise;
	int getNumeroEntreprise;

	cout << "Vous devez d'abord creer une entreprise et y attribuer un patron\n" << endl;

	cout << "Ajout d'une entreprise\n\n" << "Nom de l'entreprise : "; cin >> getNomEntreprise;
	cout << "\nNumero de l'entreprise : "; cin >> getNumeroEntreprise;
	cout << "\n\nAjout en cours ..." << endl;
	Entreprise entre(getNomEntreprise, getNumeroEntreprise);
	cout << "Ajout reussi." << endl;

	string getNomPatron;

	cout << endl;
	cout << "Ajout d'un patron dans l'entreprise\n\n" << "Nom du patron : "; cin >> getNomPatron;
	cout << "\n\nAjout en cours ..." << endl;
	Patron patr(getNomPatron);
	cout << "Attribution du matricule ..." << endl;
	cout << "Ajout reussi.\n" << endl;
	system("pause");

	int nonstop = 1;
	while (nonstop = 1)
	{
		clsTitre();
		cout << "                        Gestion d'une entreprise de developpement\n\n" << endl;
		cout << "                                          Menu\n\n" << endl;
		cout << "1. Embaucher un chef de projet                 4. Ajouter un sound designer dans une equipe" << endl;
		cout << "2. Ajouter un programmeur dans une equipe      5. Ajouter un game designer dans une equipe" << endl;
		cout << "3. Ajouter un graphic designer dans une equipe 6. Ajouter un level designer dans une equipe" << endl;

		cout << "\n\n7. Enlever un chef de projet                   10. Enlever un sound designer d'une equipe" << endl;
		cout << "8. Enlever un programmeur d'une equipe         11. Enlever un game designer d'une equipe" << endl;
		cout << "9. Enlever un graphic designer d'une equipe    12. Enlever un level designer d'une equipe" << endl;

		cout << "\n\n13. Afficher le patron                         17. Afficher le / les graphic designer(s)" << endl;
		cout << "14. Afficher le / les chef(s) de projet        18. Afficher le / les sound designer(s)" << endl;
		cout << "15. Afficher le / les programmeur(s)           19. Afficher le / les game designer(s)" << endl;
		cout << "16. Afficher le / les level designer(s)        20. Afficher une equipe" << endl;

		cout << "\n\n21. Ajouter un secretaire                      23. Ajouter un technicien informatique" << endl;
		cout << "22. Ajouter un technicien de surface           24. Afficher l'equipe de maintenance et le / les secretaire(s)" << endl;

		cout << "\n\n25. Enlever un secretaire                      27. Enlever un techicien informatique" << endl;
		cout << "26. Enlever un technicien de surface" << endl;

		cout << "\n\n28. Quitter\n\n" << endl;
		cout << "Choix : "; cin >> choixmenu;

		switch (choixmenu)
		{

			////// Ajouter //////
		case 1:
			clsTitre();
			cout << "Ajout d'un chef de projet dans l'entreprise\n\n" << "Nom du chef de projet : "; cin >> getNomCdp;
			cout << "\n\nAjout en cours ..." << endl;
			patr.ajouterChefDeProjet(getNomCdp);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 2:
			clsTitre();
			cout << "Ajout d'un programmeur dans une equipe d'un chef de projet\n\n" << "Nom du programmeur : "; cin >> getNomProgrammeur;
			cout << "Equipe : "; cin >> getEquipe;
			cout << "\n\nAjout en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].ajouterProgrammeur(getNomProgrammeur);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 3:
			clsTitre();
			cout << "Ajout d'un graphic designer dans une equipe d'un chef de projet\n\n" << "Nom du graphic designer : "; cin >> getNomGd;
			cout << "Equipe : "; cin >> getEquipe;
			cout << "\n\nAjout en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].ajouterGraphicDesigner(getNomGd);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 4:
			clsTitre();
			cout << "Ajout d'un sound designer dans une equipe d'un chef de projet\n\n" << "Nom du sound designer : "; cin >> getNomSd;
			cout << "Equipe : "; cin >> getEquipe;
			cout << "\n\nAjout en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].ajouterSoundDesigner(getNomSd);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 5:
			clsTitre();
			cout << "Ajout d'un game designer dans une equipe d'un chef de projet\n\n" << "Nom du game designer : "; cin >> getNomGameD;
			cout << "Equipe : "; cin >> getEquipe;
			cout << "\n\nAjout en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].ajouterGameDesigner(getNomGameD);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 6:
			clsTitre();
			cout << "Ajout d'un level designer dans une equipe d'un chef de projet\n\n" << "Nom du level designer : "; cin >> getNomGameD;
			cout << "Equipe : "; cin >> getEquipe;
			cout << "\n\nAjout en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].ajouterLevelDesigner(getNomLd);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

			////// Enlever //////

		case 7 :
			clsTitre();
			cout << "Suppression d'un chef de projet\n\n" << "Attention, la suppression d'un chef de projet entraine la suppression de son equipe !\n\n" << "Numero de matricule du CDP : ";
			cin >> getMatricule;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctCDP.erase(patr.vctCDP.begin()+getMatricule-1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

		case 8 :
			clsTitre();
			cout << "Suppression d'un programmeur\n\n" << "Equipe : "; cin >> getEquipe; 
			cout << "\nNumero de matricule du programmeur : "; cin >> getMatricule;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctCDP[getEquipe-1].vctProgrammeur.erase(patr.vctCDP[getEquipe-1].vctProgrammeur.begin() + getMatricule - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

		case 9 :
			clsTitre();
			cout << "Suppression d'un graphic designer\n\n" << "Equipe : "; cin >> getEquipe;
			cout << "\nNumero de matricule du graphic designer : "; cin >> getMatricule;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].vctGd.erase(patr.vctCDP[getEquipe - 1].vctGd.begin() + getMatricule - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

		case 10 :
			clsTitre();
			cout << "Suppression d'un sound designer\n\n" << "Equipe : "; cin >> getEquipe;
			cout << "\nNumero de matricule du sound designer : "; cin >> getMatricule;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].vctSd.erase(patr.vctCDP[getEquipe - 1].vctSd.begin() + getMatricule - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

		case 11 :
			clsTitre();
			cout << "Suppression d'un game designer\n\n" << "Equipe : "; cin >> getEquipe;
			cout << "\nNumero de matricule du game designer : "; cin >> getMatricule;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].vctGameD.erase(patr.vctCDP[getEquipe - 1].vctGameD.begin() + getMatricule - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

		case 12 :
			clsTitre();
			cout << "Suppression d'un level designer\n\n" << "Equipe : "; cin >> getEquipe;
			cout << "\nNumero de matricule du level designer : "; cin >> getMatricule;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctCDP[getEquipe - 1].vctLd.erase(patr.vctCDP[getEquipe - 1].vctLd.begin() + getMatricule - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

			////// Afficher //////

		case 13 :
			clsTitre();
			patr.afficher();
			system("pause");
			break;
		case 14:
			clsTitre();
			patr.afficherChefDeProjet();
			system("pause");
			break;

		case 15:
			clsTitre();
			cout << "101. Tout afficher" << endl;
			cout << "Equipe a afficher : "; cin >> getEquipe;
			cout << endl;
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherProgrammeur();
			}
			else if (getEquipe = 101)
			{
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherProgrammeur();
				}
			}
			system("pause");
			break;

		case 16:
			clsTitre();
			cout << "101. Tout afficher" << endl;
			cout << "Equipe a afficher : "; cin >> getEquipe;
			cout << endl;
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherLevelDesigner();
			}
			else if (getEquipe = 101)
			{
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherLevelDesigner();
				}
			}
			system("pause");
			break;

		case 17:
			clsTitre();
			cout << "101. Tout afficher" << endl;
			cout << "Equipe a afficher : "; cin >> getEquipe;
			cout << endl;
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherGraphicDesigner();
			}
			else if (getEquipe = 101)
			{
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherGraphicDesigner();
				}
			}
			system("pause");
			break;

		case 18:
			clsTitre();
			cout << "101. Tout afficher" << endl;
			cout << "Equipe a afficher : "; cin >> getEquipe;
			cout << endl;
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherSoundDesigner();
			}
			else if (getEquipe = 101)
			{
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherSoundDesigner();
				}
			}
			system("pause");
			break;

		case 19 :
			clsTitre();
			cout << "101. Tout afficher" << endl;
			cout << "Equipe a afficher : "; cin >> getEquipe;
			cout << endl;
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherGameDesigner();
			}
			else if (getEquipe = 101)
			{
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherGameDesigner();
				}
			}
			system("pause");
			break;

		case 20:
			clsTitre();
			cout << "101. Tout afficher" << endl;
			cout << "Equipe a afficher : "; cin >> getEquipe;
			cout << endl;

			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherProgrammeur();
			}
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherGraphicDesigner();
			}
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherSoundDesigner();
			}
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherGameDesigner();
			}
			if (getEquipe != 101)
			{
				patr.vctCDP[getEquipe - 1].afficherLevelDesigner();
			}

			else if (getEquipe = 101)
			{
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherProgrammeur();
				}
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherGraphicDesigner();
				}
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherSoundDesigner();
				}
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherGameDesigner();
				}
				for (int i = 0; i < patr.vctCDP.size(); i++)
				{
					patr.vctCDP[i].afficherLevelDesigner();
				}
			}
			system("pause");
			break;

		case 21 :
			clsTitre();
			cout << "Ajout d'un secretaire dans l'entreprise\n\n" << "Nom du secretaire : "; cin >> getNomSec;
			cout << "\n\nAjout en cours ..." << endl;
			patr.ajouterSecretaire(getNomSec);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 22 :
			clsTitre();
			cout << "Ajout d'un technicien de surface dans l'entreprise\n\n" << "Nom du technicien de surface : "; cin >> getNomTechS;
			cout << "\n\nAjout en cours ..." << endl;
			patr.ajouterTechnicienDeSurface(getNomTechS);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 23:
			clsTitre();
			cout << "Ajout d'un technicien informatique dans l'entreprise\n\n" << "Nom du technicien informatique : "; cin >> getNomTechInfo;
			cout << "\n\nAjout en cours ..." << endl;
			patr.ajouterTechnicienInformatique(getNomTechInfo);
			cout << "Attribution du matricule ..." << endl;
			cout << "Ajout reussi.\n" << endl;
			system("pause");
			break;

		case 24 :
			clsTitre();
			patr.afficherSecretaire();
			patr.afficherTechnicienDeSurface();
			patr.afficherTechnicienInformatique();
			system("pause");
			break;

		case 25 :
			clsTitre();
			cout << "Suppression d'un secretaire\n\n" << "Numero de matricule du secretaire : ";
			cin >> getMatricules;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctSec.erase(patr.vctSec.begin() + getMatricules - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

		case 26:
			clsTitre();
			cout << "Suppression d'un technicien de surface\n\n" << "Numero de matricule du technicien de surface : ";
			cin >> getMatriculets;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctTechS.erase(patr.vctTechS.begin() + getMatriculets - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;

		case 27:
			clsTitre();
			cout << "Suppression d'un technicien informatique\n\n" << "Numero de matricule du technicien informatique : ";
			cin >> getMatriculeti;
			cout << "\n\nSuppression en cours ..." << endl;
			patr.vctTechInfo.erase(patr.vctTechInfo.begin() + getMatriculeti - 1);
			cout << "Suppression reussie.\n" << endl;
			system("pause");
			break;


			////// Quitter //////
		case 28 :
			return 0;
			break;
		}
	}
	system("pause");
}