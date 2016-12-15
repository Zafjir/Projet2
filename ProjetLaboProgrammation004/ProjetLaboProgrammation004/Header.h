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
public :
	vector <ChefDeProjet> vctCDP;
	Patron(string nom);
	//ChefDeProjet &cdp();
	void afficher();
	void afficherChefDeProjet();
	void ajouterChefDeProjet( string nomDuChefDeProjet );
	~Patron();
};

class ChefDeProjet
{
private :
	string nom_C;
	Matricule matriculeChefDeProjet;
	static int nombreDeChefDeProjet_;
public :
	vector <Programmeur> vctProgrammeur;
	ChefDeProjet(string nom);
	void afficher();
	void ajouterProgrammeur( string nomDuProgrammeur );
	void afficherProgrammeur();
	~ChefDeProjet();
};

/*class Equipe
{
private :
	string nom_;
};*/

class Programmeur
{
private :
	string nom_Prog;
	Matricule matriculeProg;
	static int nombreDeProgrammeur_;
public :
	Programmeur(string nom);
	void afficher();
	~Programmeur();
};
