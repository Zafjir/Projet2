#include "Header.h"

int ChefDeProjet::nombreDeChefDeProjet_ = 0;
int Programmeur::nombreDeProgrammeur_ = 0;
int GraphicDesigner::nombreDeGdesigner_ = 0;
int SoundDesigner::nombreDeSdesigner_ = 0;
int GameDesigner::nombreDeGameDesigner_ = 0;
int LevelDesigner::nombreDeLevelDesigner_ = 0;
int Secretaire::nombreDeSecretaire_ = 0;
int TechnicienDeSurface::nombreDeTechnicienDeSurface_ = 0;
int TechnicienInformatique::nombreDeTechnicienInformatique = 0;

/////////////////////////////Constructeur/////////////////////////////

Entreprise::Entreprise(string nom, int numero)
{
	nom_E = nom;
	numero_E = numero;
}

Patron::Patron(string nom)
{
	matriculePatron = Matricule(1, "P");
	nom_P = nom;
}

ChefDeProjet::ChefDeProjet(string nom = "valeurpardefaut")
{
	matriculeChefDeProjet = Matricule(nombreDeChefDeProjet_ + 1, "CDP");
	nom_C = nom;

	nombreDeChefDeProjet_++;
}

Programmeur::Programmeur(string nom)
{
	matriculeProg = Matricule(nombreDeProgrammeur_ + 1, "Prog");
	nom_Prog = nom;

	nombreDeProgrammeur_++;
}

GraphicDesigner::GraphicDesigner(string nom)
{
	matriculeGd = Matricule(nombreDeGdesigner_ + 1, "GD");
	nom_Gd = nom;

	nombreDeGdesigner_++;
}

SoundDesigner::SoundDesigner(string nom)
{
	matriculeSd = Matricule(nombreDeSdesigner_ + 1, "SD");
	nom_Sd = nom;

	nombreDeSdesigner_++;
}

GameDesigner::GameDesigner(string nom)
{
	matriculeGameD = Matricule(nombreDeGameDesigner_ + 1, "GameD");
	nom_GameD = nom;

	nombreDeGameDesigner_++;
}

LevelDesigner::LevelDesigner(string nom)
{
	matriculeSd = Matricule(nombreDeLevelDesigner_ + 1, "LD");
	nom_Ld = nom;

	nombreDeLevelDesigner_++;
}

Secretaire::Secretaire(string nom)
{
	matriculeSec = Matricule(nombreDeSecretaire_ + 1, "SEC");
	nom_Sec = nom;

	nombreDeSecretaire_++;
}

TechnicienDeSurface::TechnicienDeSurface(string nom)
{
	matriculeTechS = Matricule(nombreDeTechnicienDeSurface_ + 1, "TechS");
	nom_TechS = nom;

	nombreDeTechnicienDeSurface_++;
}

TechnicienInformatique::TechnicienInformatique(string nom)
{
	matriculeTechInfo = Matricule(nombreDeTechnicienInformatique + 1, "SEC");
	nom_TechInfo = nom;

	nombreDeTechnicienInformatique++;
}

Matricule::Matricule() {}

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

void GraphicDesigner::afficher()
{
	cout << "----- Graphic designer -----" << endl;
	cout << "Nom : " << nom_Gd << endl;
	cout << "Matricule : " << matriculeGd.numero_MM << matriculeGd.role_MM << endl;
	cout << "______________________\n" << endl;
}

void SoundDesigner::afficher()
{
	cout << "----- Sound designer -----" << endl;
	cout << "Nom : " << nom_Sd << endl;
	cout << "Matricule : " << matriculeSd.numero_MM << matriculeSd.role_MM << endl;
	cout << "______________________\n" << endl;
}

void GameDesigner::afficher()
{
	cout << "----- Game designer -----" << endl;
	cout << "Nom : " << nom_GameD << endl;
	cout << "Matricule : " << matriculeGameD.numero_MM << matriculeGameD.role_MM << endl;
	cout << "______________________\n" << endl;
}

void LevelDesigner::afficher()
{
	cout << "----- Level designer -----" << endl;
	cout << "Nom : " << nom_Ld << endl;
	cout << "Matricule : " << matriculeSd.numero_MM << matriculeSd.role_MM << endl;
	cout << "______________________\n" << endl;
}

void Secretaire::afficher()
{
	cout << endl << "----- Secretaire -----" << endl;
	cout << "Nom : " << nom_Sec << endl;
	cout << "Matricule : " << matriculeSec.numero_MM << matriculeSec.role_MM << endl;
	cout << "______________________\n" << endl;
}

void TechnicienDeSurface::afficher()
{
	cout << endl << "----- Technicien de surface -----" << endl;
	cout << "Nom : " << nom_TechS << endl;
	cout << "Matricule : " << matriculeTechS.numero_MM << matriculeTechS.role_MM << endl;
	cout << "______________________\n" << endl;
}

void TechnicienInformatique::afficher()
{
	cout << endl << "----- Technicien informatique -----" << endl;
	cout << "Nom : " << nom_TechInfo << endl;
	cout << "Matricule : " << matriculeTechInfo.numero_MM << matriculeTechInfo.role_MM << endl;
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
	if (vctProgrammeur.size() > 0)
	{
		cout << "Equipe : " << nom_C << endl;
		for (int i = 0; i < vctProgrammeur.size(); i++)
		{
			vctProgrammeur[i].afficher();
		}
	}
}

void ChefDeProjet::afficherGraphicDesigner()
{
	if (vctGd.size() > 0)
	{
		cout << "Equipe : " << nom_C << endl;
		for (int i = 0; i < vctGd.size(); i++)
		{
			vctGd[i].afficher();
		}
	}
}

void ChefDeProjet::afficherSoundDesigner()
{
	if (vctSd.size() > 0)
	{
		cout << "Equipe : " << nom_C << endl;
		for (int i = 0; i < vctSd.size(); i++)
		{
			vctSd[i].afficher();
		}
	}
}

void ChefDeProjet::afficherGameDesigner()
{
	if (vctGameD.size() > 0)
	{
		cout << "Equipe : " << nom_C << endl;
		for (int i = 0; i < vctGameD.size(); i++)
		{
			vctGameD[i].afficher();
		}
	}
}

void ChefDeProjet::afficherLevelDesigner()
{
	if (vctLd.size() > 0)
	{
		cout << "Equipe : " << nom_C << endl;
		for (int i = 0; i < vctLd.size(); i++)
		{
			vctLd[i].afficher();
		}
	}
}

void Patron::afficherSecretaire()
{
	for (int i = 0; i<vctSec.size(); i++)
	{
		vctSec[i].afficher();
	}
}

void Patron::afficherTechnicienDeSurface()
{
	for (int i = 0; i<vctTechS.size(); i++)
	{
		vctTechS[i].afficher();
	}
}

void Patron::afficherTechnicienInformatique()
{
	for (int i = 0; i<vctTechInfo.size(); i++)
	{
		vctTechInfo[i].afficher();
	}
}

/////////////////////////////Afficher/////////////////////////////

Entreprise::~Entreprise() {}
Patron::~Patron() {}
ChefDeProjet::~ChefDeProjet() {}
Programmeur::~Programmeur() {}
GraphicDesigner::~GraphicDesigner() {}
SoundDesigner::~SoundDesigner() {}
GameDesigner::~GameDesigner() {}
LevelDesigner::~LevelDesigner() {}
Secretaire::~Secretaire() {}
TechnicienDeSurface::~TechnicienDeSurface() {}
TechnicienInformatique::~TechnicienInformatique() {}


/////////////////////////////Ajout/////////////////////////////

void Patron::ajouterChefDeProjet(string nomDuChefDeProjet)
{
	ChefDeProjet cdp(nomDuChefDeProjet);
	vctCDP.push_back(cdp);
}

void ChefDeProjet::ajouterProgrammeur(string nomDuProgrammeur)
{
	Programmeur prog(nomDuProgrammeur);
	vctProgrammeur.push_back(prog);
}

void ChefDeProjet::ajouterGraphicDesigner(string nomDuGraphicDesigner)
{
	GraphicDesigner gd(nomDuGraphicDesigner);
	vctGd.push_back(gd);
}

void ChefDeProjet::ajouterSoundDesigner(string nomDuSoundDesigner)
{
	SoundDesigner sd(nomDuSoundDesigner);
	vctSd.push_back(sd);
}

void ChefDeProjet::ajouterGameDesigner(string nomDuGameDesigner)
{
	GameDesigner GameD(nomDuGameDesigner);
	vctGameD.push_back(GameD);
}

void ChefDeProjet::ajouterLevelDesigner(string nomDuLevelDesigner)
{
	LevelDesigner ld(nomDuLevelDesigner);
	vctLd.push_back(ld);
}

void Patron::ajouterSecretaire(string nomDuSecretaire)
{
	Secretaire sec(nomDuSecretaire);
	vctSec.push_back(sec);
}

void Patron::ajouterTechnicienDeSurface(string nomDuTechnicienDeSurface)
{
	TechnicienDeSurface techS(nomDuTechnicienDeSurface);
	vctTechS.push_back(techS);
}

void Patron::ajouterTechnicienInformatique(string nomDuTechnicienInformatique)
{
	TechnicienInformatique techInfo(nomDuTechnicienInformatique);
	vctTechInfo.push_back(techInfo);
}