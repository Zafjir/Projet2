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
class GraphicDesigner;
class SoundDesigner;
class GameDesigner;
class LevelDesigner;
class Secretaire;
class TechnicienDeSurface;
class TechnicienInformatique;
class Matricule;

class Entreprise
{
private:
	string nom_E;
	int numero_E;
public:
	Entreprise(string nom, int numero);
	void afficher();
	~Entreprise();
};

class Matricule
{
public:
	int numero_MM;
	string role_MM;
	Matricule();
	Matricule(int numero, string role);
};

class Patron
{
private:
	string nom_P;
	Matricule matriculePatron;
public:
	vector <ChefDeProjet> vctCDP;
	vector <Secretaire> vctSec;
	vector <TechnicienDeSurface> vctTechS;
	vector <TechnicienInformatique> vctTechInfo;
	Patron(string nom);
	void afficher();
	void afficherChefDeProjet();
	void afficherSecretaire();
	void afficherTechnicienDeSurface();
	void afficherTechnicienInformatique();
	void ajouterChefDeProjet(string nomDuChefDeProjet);
	void ajouterSecretaire(string nomDuSecretaire);
	void ajouterTechnicienDeSurface(string nomDuTechnicienDeSurface);
	void ajouterTechnicienInformatique(string nomDuTechnicienInformatique);
	~Patron();
};

class ChefDeProjet
{
private:
	string nom_C;
	Matricule matriculeChefDeProjet;
	static int nombreDeChefDeProjet_;
public:
	vector <Programmeur> vctProgrammeur;
	vector <GraphicDesigner> vctGd;
	vector <SoundDesigner> vctSd;
	vector <GameDesigner> vctGameD;
	vector <LevelDesigner> vctLd;
	ChefDeProjet(string nom);
	void afficher();
	void ajouterProgrammeur(string nomDuProgrammeur);
	void ajouterGraphicDesigner(string nomDuGraphicDesigner);
	void ajouterSoundDesigner(string nomDuSoundDesigner);
	void ajouterGameDesigner(string nomDuGameDesigner);
	void ajouterLevelDesigner(string nomDuLevelDesigner);
	void afficherProgrammeur();
	void afficherGraphicDesigner();
	void afficherSoundDesigner();
	void afficherGameDesigner();
	void afficherLevelDesigner();
	~ChefDeProjet();
};

class Programmeur
{
private:
	string nom_Prog;
	Matricule matriculeProg;
	static int nombreDeProgrammeur_;
public:
	Programmeur(string nom);
	void afficher();
	~Programmeur();
};

class GraphicDesigner
{
private:
	string nom_Gd;
	Matricule matriculeGd;
	static int nombreDeGdesigner_;
public:
	GraphicDesigner(string nom);
	void afficher();
	~GraphicDesigner();
};

class SoundDesigner
{
private:
	string nom_Sd;
	Matricule matriculeSd;
	static int nombreDeSdesigner_;
public:
	SoundDesigner(string nom);
	void afficher();
	~SoundDesigner();
};

class GameDesigner
{
private:
	string nom_GameD;
	Matricule matriculeGameD;
	static int nombreDeGameDesigner_;
public:
	GameDesigner(string nom);
	void afficher();
	~GameDesigner();
};

class LevelDesigner
{
private:
	string nom_Ld;
	Matricule matriculeSd;
	static int nombreDeLevelDesigner_;
public:
	LevelDesigner(string nom);
	void afficher();
	~LevelDesigner();
};

class Secretaire
{
private:
	string nom_Sec;
	Matricule matriculeSec;
	static int nombreDeSecretaire_;
public:
	Secretaire(string nom);
	void afficher();
	~Secretaire();
};

class TechnicienDeSurface
{
private:
	string nom_TechS;
	Matricule matriculeTechS;
	static int nombreDeTechnicienDeSurface_;
public:
	TechnicienDeSurface(string nom);
	void afficher();
	~TechnicienDeSurface();
};

class TechnicienInformatique
{
private:
	string nom_TechInfo;
	Matricule matriculeTechInfo;
	static int nombreDeTechnicienInformatique;
public:
	TechnicienInformatique(string nom);
	void afficher();
	~TechnicienInformatique();
};