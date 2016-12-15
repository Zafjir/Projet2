#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Entreprise;
class Patron;
class ChefDeProjet;
class Programmeur;
class Matricule;

static int nbreChefDeProjet = 0;
static int nbreProgrammeur = 0;

class Entreprise
{
private:
	string nom_E;
	int numero_E;
public:
	Entreprise(string nom, int numero);
	void afficher();
};

class Patron
{
private:
	string nom_P;
	int numero_P;
	string role_P;
public:
	Patron(string nom, Matricule &matricule);
	void afficher();
};

class ChefDeProjet
{
private:
	string nom_C;
	vector<Programmeur> vectorProgrammeur;
	Matricule matrDuChef;
public:
	ChefDeProjet(string nom, vector<Matricule>* ptrMonvecteur);
	void afficher( vector<Matricule>* ptrMonvecteur );
	void ajouterChefDeProjet(string nom, Matricule &matricule);
	int returnIntOfVector();
};

class Programmeur
{
private:
	string nom_Prog;
	Matricule matr;
public:
	Programmeur(string nom, int compteurProgrammeur);
	void afficher();
};

class Matricule
{
public:
	int numero_MM;
	string role_MM;
	Matricule();
	Matricule(int numero, string role);
};

