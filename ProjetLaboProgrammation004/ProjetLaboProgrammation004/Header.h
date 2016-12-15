#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Entreprise;
class Patron;
class ChefDeProjet;
class Programmeur;
class Matricule;

class Entreprise
{
private :
	string nom_E;
	int numero_E;
public :
	Entreprise(string nom, int numero);
	void afficher();
	~Entreprise();
};
class Matricule
{
public :
	int numero_MM;
	string role_MM;
	Matricule();
	Matricule(int numero, string role);
};

class Patron
{
private :
	string nom_P;
	Matricule matriculePatron;
	vector <ChefDeProjet> vctCDP;
public :
	Patron(string nom);
	void afficher();
	void afficherChefDeProjet();
	int returnCompteurCDP();
	void ajouterChefDeProjet( string nomDuChefDeProjet );
	~Patron();
};

class ChefDeProjet
{
private :
	string nom_C;
	vector <Programmeur> vctProgrammeur;
	Matricule matriculeChefDeProjet;
	static int nombreDeChefDeProjet_;
public :
	ChefDeProjet(string nom);
	void afficher();
	static int returnCompteurProg();
	void ajouterProgrammeur( string nomDuProgrammeur );
	~ChefDeProjet();
};

/*class Equipe
{
private :
	string nom_Prog;
};*/

class Programmeur
{
private :
	string nom_Prog;
	Matricule matriculeProg;
public :
	Programmeur(string nom, int compteurProg);
	void afficher();
	~Programmeur();
};
