#include "Header.h"

void clsTitre()
{
	system("cls");
	cout << "Berte Thomas\n\t    2eme Informatique et systeme\n\n" << endl;
	cout << "----- Laboratoire de Programmation -----" << endl;
	cout << "--------------- Projet -----------------" << endl;
	cout << "------- Gestion d'une entreprise -------" << endl;
	cout << "________________________________________" << "\n" << endl;
}

void clsMenu()
{
	system("cls");
	cout << "----- Laboratoire de Programmation -----" << endl;
	cout << "--------------- Projet -----------------" << endl;
	cout << "------- Gestion d'une entreprise -------" << endl;
	cout << "________________________________________" << "\n" << endl;
}

void creationEntreprise()
{
	string nomEntreprise;
	int numeroEntreprise;
	cout << "Creation d'une entreprise" << "\n" << endl;
	cout << "Nom : "; cin >> nomEntreprise; cout << endl;
	cout << "Numero : "; cin >> numeroEntreprise; cout << endl;

	cout << "Creation en cours ..." << endl;


	cout << "Creation terminee." << "\n" << endl;
	Entreprise entre(nomEntreprise, numeroEntreprise);
	entre.afficher();
}

void ajoutPatron()
{
	string nomPatron;
	cout << "Ajout d'un patron" << "\n" << endl;
	cout << "Nom : "; cin >> nomPatron; cout << endl;

	cout << "Ajout en cours ..." << endl;
	cout << "Attribution du matricule ..." << endl;
	Matricule matr1(1, "P");
	Patron patr(nomPatron, matr1);
	cout << "Ajout termine." << "\n" << endl;
	patr.afficher();
}

void ajoutChefDeProjet( vector<Matricule>* ptrMonvecteur )
{
	string nomChefDeProjet;
	cout << "Ajout d'un chef de projet" << "\n" << endl;
	cout << "Nom : "; cin >> nomChefDeProjet; cout << endl;

	cout << "Ajout en cours ..." << endl;
	cout << "Attribution du matricule ..." << endl;
	Matricule matr1( ptrMonvecteur->size() + 1, "CDP");
	ChefDeProjet cdp(nomChefDeProjet, matr1, ptrMonvecteur);
	cout << "Ajout termine." << "\n" << endl;

	ptrMonvecteur->push_back(matr1);

	cdp.afficher( ptrMonvecteur );
}

void main()
{
	int nonstop = 1;

	vector<ChefDeProjet> monVecteurChefDeProjet;
	ChefDeProjet chef("TheBoss",);

	Programmeur monProgrammeur01("Bruno",);
	/*
	ajoutChefDeProjet( &monVecteurMatricule );
	cout << "sizeVector : " << monVecteurMatricule.size() << endl;
	ajoutChefDeProjet( &monVecteurMatricule );
	cout << "sizeVector : " << monVecteurMatricule.size() << endl;
	ajoutChefDeProjet( &monVecteurMatricule );
	cout << "sizeVector : " << monVecteurMatricule.size() << endl;
	ajoutChefDeProjet( &monVecteurMatricule );
	cout << "sizeVector : " << monVecteurMatricule.size() << endl;
	ajoutChefDeProjet( &monVecteurMatricule );
	cout << "sizeVector : " << monVecteurMatricule.size() << endl;

	for (int i = 0; i< (int)monVecteurMatricule.size(); i++){
		cout << i << " : " << monVecteurMatricule[i].numero_MM << endl;
	}
	*/
	system("pause");
	exit(0);

	while (nonstop = 1)
	{
		clsTitre();

		int choixmenu1;

		cout << "Programme de gestion d'entreprise" << "\n" << endl;
		cout << "1. Creer une entreprise\n2. Ajouter un patron\n3. Ajouter un chef de projet\n4. Ajouter un programmeur\n" << endl;
		cout << "5. Afficher des elements\n" << endl;
		cout << "Choix : "; cin >> choixmenu1;

		switch (choixmenu1)
		{
		case 1:
			clsMenu();
			creationEntreprise();
			system("pause");
			break;

		case 2:
			clsMenu();
			ajoutPatron();
			system("pause");
			break;

		case 3:
			clsMenu();
			//ajoutChefDeProjet();
			system("pause");
			break;
		}
	}
	system("pause");
}
