#include "Header.h"
//////////////// Constructeur ////////////////

Entreprise::Entreprise(string nom, int numero)
{
	nom_E = nom;
	numero_E = numero;
}

Patron::Patron(string nom, Matricule &matricule)
{
	nom_P = nom;
	numero_P = matricule.numero_MM;
	role_P = matricule.role_MM;
}

ChefDeProjet::ChefDeProjet(string nom, Matricule &matricule)
{
	nom_C[nbreChefDeProjet] = nom;
	numero_C[nbreChefDeProjet] = matricule.numero_MM;
	role_C[nbreChefDeProjet] = matricule.role_MM;
	nbreChefDeProjet++;
}

Programmeur::Programmeur(string nom, Matricule &matricule)
{
	nom_Prog[nbreProgrammeur] = nom;
	numero_Prog[nbreProgrammeur] = matricule.numero_MM;
	role_Prog[nbreProgrammeur] = matricule.role_MM;
	nbreProgrammeur++;
}

Matricule::Matricule(int numero, string role)
{
	numero_MM = numero;
	role_MM = role;
}

//////////////// Afficher ////////////////

void Entreprise::afficher()
{
	cout << "----- Entreprise -----\n" << endl;
	cout << "Numero d'entreprise : " << numero_E << endl;
	cout << "Nom de l'entreprise : " << nom_E << "\n" << endl;
	cout << "_______________________________________" << endl;
}

void Patron::afficher()
{
	cout << "----- Patron -----\n" << endl;
	cout << "Nom : " << nom_P << endl;
	cout << "Matricule : " << numero_P << role_P << "\n" << endl;
	cout << "_______________________________________" << endl;
}

void ChefDeProjet::afficher()
{
	cout << "----- Chef de projet -----" << endl;
	for (int i = 0; i < nbreChefDeProjet; i++)
	{
		cout << "Nom : " << nom_C[i] << endl;
		cout << "Matricule : " << numero_C[i] << role_C[i] << "\n" << endl;
		cout << "_______________________________________" << endl;
	}
}

void Programmeur::afficher()
{
	cout << "----- Programmeur -----" << endl;
	for (int i = 0; i < nbreProgrammeur; i++)
	{
		cout << "Nom : " << nom_Prog[i] << endl;
		cout << "Matricule : " << numero_Prog[i] << role_Prog[i] << "\n" << endl;
		cout << "_______________________________________" << endl;
	}
}


void ChefDeProjet::ajouterChefDeProjet(string nom, Matricule &matricule)
{
	nom_C[nbreChefDeProjet] = nom;
	numero_C[nbreChefDeProjet] = matricule.numero_MM;
	role_C[nbreChefDeProjet] = matricule.role_MM;
	nbreChefDeProjet++;
}
