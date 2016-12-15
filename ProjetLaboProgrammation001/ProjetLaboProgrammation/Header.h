#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

static int compteurPatron = 0;
static int compteurChefDeProjet = 0;
static int compteurProgrammeur = 0;
static int compteurSoundDesigner = 0;
static int compteurGraphicDesigner = 0;
static int compteurGameDesigner = 0;
static int compteurLevelDesigner = 0;
static int compteurSecretaire = 0;
static int compteurTechnicienDeSurface = 0;
static int compteurTechnicienInformatique = 0;

class Entreprise;
class Patron;
class ChefDeProjet;
class Programmeur;
class SoundDesigner;
class GraphicDesigner;
class GameDesigner;
class LevelDesigner;
class Secretaire;
class TechnicienDeSurface;
class TechicienInformatique;

class Entreprise
{
private : 
	int numero_;
	string nom_;
	string lieu_;
	int nbreEmploye_;
public :
	Entreprise(int numero = 0, string nom = "", string lieu = "", int nbreEmploye = 0);
	void afficher();
	~Entreprise();
};

class Patron
{
private :
	string nomPatron_[50];
	int numeroPatron_[50];
public:
	Patron(string nom, int numero);
	void afficher();
	void ajouterPatron(string nom, int numero);
	~Patron();
};

class ChefDeProjet
{
private :
	string nomChefDeProjet_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	ChefDeProjet(string nom, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterChefDeProjet(string nom, string NumeroEmploye, int anciennete);
	~ChefDeProjet();
};
class Programmeur
{
private :
	string nomProgrammeur_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	Programmeur(string nom, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterProgrammeur(string nom, string NumeroEmploye, int anciennete);
	~Programmeur();
};

class SoundDesigner
{
private :
	string nomSoundDesigner_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	SoundDesigner(string nom, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterSoundDesigner(string nom, string NumeroEmploye, int anciennete);
	~SoundDesigner();
};

class GraphicDesigner
{
private :
	string nomGraphicDesigner_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	GraphicDesigner(string nom, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterGraphicDesigner(string nom, string NumeroEmploye, int anciennete);
	~GraphicDesigner();
};

class GameDesigner
{
private :
	string nomGameDesigner_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	GameDesigner(string nom, string, int anciennete);
	void afficher();
	void ajouterGameDesigner(string nom, string NumeroEmploye, int anciennete);
	~GameDesigner();
};

class LevelDesigner
{
private :
	string nomLevelDesigner_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	LevelDesigner(string nom, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterLevelDesigner(string nom, string NumeroEmploye, int anciennete);
	~LevelDesigner();
};

class Secretaire
{
private:
	string nomSecretaire_[50];
	int nbreDeSecretaire_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	Secretaire(string nom, int nbre, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterSecretaire(string nom, int nbre, string NumeroEmploye, int anciennete);
	~Secretaire();
};

class TechnicienDeSurface
{
private :
	string nomTechnicienDeSurface_[50];
	int nbreDeTechnicienDeSurface_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	TechnicienDeSurface(string nom, int nbre, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterTechnicienDeSurface(string nom, int nbre, string NumeroEmploye, int anciennete);
	~TechnicienDeSurface();
};

class TechnicienInformatique
{
private :
	string nomTechnicienInformatique_[50];
	int nbreDeTechnicienInformatique_[50];
	string numeroEmploye_[50];
	int anciennete_[50];
public :
	TechnicienInformatique(string nom, int nbre, string NumeroEmploye, int anciennete);
	void afficher();
	void ajouterTechnicienInformatique(string nom, int nbre, string NumeroEmploye, int anciennete);
	~TechnicienInformatique();
};

