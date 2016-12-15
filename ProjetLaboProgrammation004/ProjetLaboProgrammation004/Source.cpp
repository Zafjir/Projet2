#include "Header.h"

int ChefDeProjet::nombreDeChefDeProjet_ = 0;
int Programmeur::nombreDeProgrammeur_ = 0;

/////////////////////////////Constructeur/////////////////////////////

Entreprise::Entreprise(string nom, int numero)
{
	nom_E = nom;
	numero_E = numero;
}

Patron::Patron(string nom)
{
	matriculePatron = Matricule(1,"P");
	nom_P = nom;
}

/*ChefDeProjet & Patron::cdp()
{
	return vctCDP[0];
}*/

ChefDeProjet::ChefDeProjet(string nom="valeurpardefaut")
{
	//cout << "Size : " << nombreDeChefDeProjet_ << endl;
	matriculeChefDeProjet = Matricule(nombreDeChefDeProjet_ +1, "CDP");
	nom_C = nom;

	nombreDeChefDeProjet_++;
}

Programmeur::Programmeur(string nom)
{
	matriculeProg = Matricule(nombreDeProgrammeur_ + 1, "Prog");
	nom_Prog = nom;

	nombreDeProgrammeur_++;
}

Matricule::Matricule(){}

Matricule::Matricule(int numero, string role)
{
	numero_MM = numero;
	role_MM = role;
}

/////////////////////////////Afficher/////////////////////////////

void Entreprise::afficher()
{
	cout << "----- Entreprise -----" << endl;
	cout << "Nom : " << nom_E << endl;
	cout << "Numero : " << numero_E << endl;
	cout << "______________________\n" << endl;
}

void Patron::afficher()
{
	cout << "----- Patron -----" << endl;
	cout << "Nom : " << nom_P << endl;
	cout << "Matricule : " << matriculePatron.numero_MM << matriculePatron.role_MM << endl;
	cout << "______________________\n" << endl;
}

void ChefDeProjet::afficher()
{
	cout << endl << "----- Chef de projet -----" << endl;
	cout << "Nom : " << nom_C << endl;
	cout << "Matricule : " << matriculeChefDeProjet.numero_MM << matriculeChefDeProjet.role_MM << endl;
	cout << "______________________\n" << endl;
}

void Programmeur::afficher()
{
	cout << "----- Programmeur -----" << endl;
	cout << "Nom : " << nom_Prog << endl;
	cout << "Matricule : " << matriculeProg.numero_MM << matriculeProg.role_MM << endl;
	cout << "______________________\n" << endl;
}

void Patron::afficherChefDeProjet()
{
	for (int i = 0; i<vctCDP.size(); i++)
	{
		vctCDP[i].afficher();
	}
}

void ChefDeProjet::afficherProgrammeur()
{
	for (int i = 0; i < vctProgrammeur.size(); i++)
	{
		cout << "Equipe : " << nom_C << endl;
		vctProgrammeur[i].afficher();
	}
}

/////////////////////////////Afficher/////////////////////////////

Entreprise::~Entreprise() {}
Patron::~Patron() {}
ChefDeProjet::~ChefDeProjet() {}
Programmeur::~Programmeur() {}

/////////////////////////////Ajout/////////////////////////////

void Patron::ajouterChefDeProjet( string nomDuChefDeProjet )
{
	ChefDeProjet cdp( nomDuChefDeProjet );
	vctCDP.push_back(cdp);
}

void ChefDeProjet::ajouterProgrammeur(string nomDuProgrammeur)
{
	Programmeur prog(nomDuProgrammeur);
	vctProgrammeur.push_back(prog);
}