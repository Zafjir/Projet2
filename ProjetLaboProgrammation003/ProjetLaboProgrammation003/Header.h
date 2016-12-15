#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>

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
	string nom_C[50];
	int numero_C[50];
	string role_C[50];
public:
	ChefDeProjet(string nom, Matricule &matricule);
	void afficher();
	void ajouterChefDeProjet(string nom, Matricule &matricule);
};

class Programmeur
{
private:
	string nom_Prog[50];
	int numero_Prog[50];
	string role_Prog[50];
public:
	Programmeur(string nom, Matricule &matricule);
	void afficher();
};

class Matricule
{
public:
	int numero_MM;
	string role_MM;
	Matricule(int numero, string role);
};