#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Entreprise;
class Patron;
class Secretaire;
class TechnicienDeSurface;
class TechnicienInformatique;
class ChefDeProjet;
class SoundDesigner;
class GraphicDesigner;
class Programmeur;
class GameDesigner;
class LevelDesigner;

static int nbrePatron = 0;
static int nbreTechnicienDeSurface = 0;
static int nbreTechnicienInformatique = 0;
static int nbreSecretaire = 0;
static int nbreChefDeProjet = 0;
static int nbreSoundDesigner = 0;
static int nbreGraphicDesigner = 0;
static int nbreProgrammeur = 0;
static int nbreGameDesigner = 0;
static int nbreLevelDesigner = 0;
static int nbreEmployes = 0;


class Entreprise
{
private :
	int numeroEntreprise_;
	string nomEntreprise_;
	string lieuEntreprise_;
	int nbreEmployes_;
public :
	Entreprise(int numero, string nom, string lieu);
	void afficherEntreprise();

	~Entreprise();
};

class Patron
{
private :
	string nomPatron_;
	int numeroPatron_;
public :
	Patron(string nom, int numero);
	void afficherPatron();
	void ajouterChefDeProjet();
	void ajouterTechnicienDeSurface();
	void ajouterTechnicienInformatique();
	void ajouterSecretaire();
	void enleverChefDeProjet();
	void enleverTechnicienDeSurface();
	void enleverTechnicienInformatique();
	void enleverSecretaire();

	~Patron();
};

class TechnicienDeSurface
{
private :
	string nomTechnicienDeSurface_[50];
	int nbreDeTechnicienDeSurface_;
	string matriculeTechnicienDeSurface_[50];
	int ancienneteTechnicienDeSurface_[50];
public :
	TechnicienDeSurface(string nom, string matricule, int anciennete);
	void afficherTechnicienDeSurface();
	void nettoyer();

	~TechnicienDeSurface();
};

class TechnicienInformatique
{
private :
	string nomTechnicienInformatique_[50];
	int nbreDeTechnicienInformatique_;
	string matriculeTechnicienInformatique_[50];
	int ancienneteTechnicienInformatique_[50];
public :
	TechnicienInformatique(string nom, string matricule, int anciennete);
	void afficherTechnicienInformatique();
	void reparer();

	~TechnicienInformatique();
};

class Secretaire
{
private :
	string nomSecretaire_[50];
	int nbreDeSecretaire_;
	string matriculeSecretaire_[50];
	int ancienneteSecretaire_[50];
public :
	Secretaire(string nom, string matricule, int anciennete);
	void afficherSecretaire();
	void gerer();

	~Secretaire();
};

class ChefDeProjet
{
private :
	string nomChefDeProjet_[50];
	int nbreDeChefDeProjet_;
	string matriculeChefDeProjet_[50];
	int ancienneteChefDeProjet_[50];
public :
	ChefDeProjet(string nom, string matricule, int anciennete);
	void afficherChefDeProjet();

	void ajouterSoundDesigner();
	void ajouterGraphicDesigner();
	void ajouterProgrammeur();
	void ajouterGameDesigner();
	void ajouterLevelDesigner();
	void enleverSoundDesigner();
	void enleverGraphicDesigner();
	void enleverProgrammeur();
	void enleverGameDesigner();
	void enleverLevelDesigner();

	~ChefDeProjet();
};


/////////////////////////////////////////////////////////////////////////////
//							     Equipe                                    //
/////////////////////////////////////////////////////////////////////////////

class SoundDesigner
{
private : 
	string nomSoundDesigner_[50];
	int matriculeSoundDesigner_[50];
	string roleSoundDesigner_[50];
	int ancienneteSoundDesigner_[50];
public :
	SoundDesigner(string nom, Equipe &matricule, int anciennete);
	void afficherSoundDesigner();
	void developperSon();

	~SoundDesigner();
};

class GraphicDesigner
{
private :
	string nomGraphicDesigner_[50];
	int matriculeGraphicDesigner_[50];
	string roleGraphicDesigner_[50];
	int ancienneteGraphicDesigner_[50];
public :
	GraphicDesigner(string nom, Equipe &matricule, int anciennete);
	void afficherGraphicDesigner();
	void developperGraphic();

	~GraphicDesigner();
};

class Programmeur
{
private :
	string nomProgrammeur_[50];
	int matriculeProgrammeur_[50];
	string roleProgrammeur_[50];
	int ancienneteProgrammeur_[50];
public :
	Programmeur(string nom, Equipe &matricule, int anciennete);
	void afficherProgrammeur();
	void developper();

	~Programmeur();
};

class GameDesigner
{
private :
	string nomGameDesigner_[50];
	int matriculeGameDesigner_[50];
	string roleGameDesigner_[50];
	int ancienneteGameDesigner_[50];
public :
	GameDesigner(string nom, Equipe &matricule, int anciennete);
	void afficherGameDesigner();
	void developperGameDesign();

	~GameDesigner();
};

class LevelDesigner
{
private:
	string nomLevelDesigner_[50];
	int matriculeLevelDesigner_[50];
	string roleLevelDesigner_[50];
	int ancienneteLevelDesigner_[50];
public :
	LevelDesigner(string nom, Equipe &matricule, int anciennete);
	void afficherLevelDesigner();
	void developperLevelDesign();

	~LevelDesigner();
};

class Equipe:public LevelDesigner
{
public :
	int matricule_;
	string role_;

	Equipe(int matricule, string role);

	~Equipe();
};

