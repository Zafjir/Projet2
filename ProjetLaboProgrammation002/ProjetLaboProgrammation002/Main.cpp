#include "Header.h"

void clsTitre()
{
	system("cls");
	cout << "Berte Thomas\n2eme Informatique et systeme\n\n" << endl;
	cout << " __________________________________________________________________" << endl;
	cout << "|					    Projet de programmation					    |" << endl;
	cout << "|__________________________________________________________________|" << endl;
	cout << "|					   Gestion  d'une  entreprise                   |" << endl;
	cout << "|__________________________________________________________________|" << "\n\n" << endl;
}

void main()
{
	//	Variables	//
	string nomEntreprise;
	int numeroEntreprise;
	string lieuEntreprise;

	string nomPatron;
	int numeroPatron;
	//////////////////

	clsTitre();
	
	cout << "Creer une entreprise" << endl;
	cout << "\nEntrer le numero d'entreprise : "; cin >> numeroEntreprise;
	cout << "\nEntrer le nom : "; cin >> nomEntreprise;
	cout << "\nLieu de l'entreprise : "; cin >> lieuEntreprise;
	cout << endl;
	Entreprise entre1(numeroEntreprise, nomEntreprise, lieuEntreprise);
	cout << "\nEntreprise creee." << endl;

	cout << "Patron de l'entreprise" << endl;
	cout << "\nEntrer le nom du patron : "; cin >> nomPatron;
	cout << "\nEntrer le numero de patron : "; cin >> numeroPatron;
	cout << endl;
	Patron patr(nomPatron, numeroPatron);
	cout << "\nPatron embauche." << endl;


}