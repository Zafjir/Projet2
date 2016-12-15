#include "Header.h"

			   	//Constructeur//
/////////////////////////////////////////////////////

Entreprise::Entreprise(int numero, string nom, string lieu, int nbreEmploye)
{
	numero_ = numero;
	nom_ = nom;
	lieu_ = lieu;
	nbreEmploye_ = nbreEmploye;
}

Patron::Patron(string nom, int numero)
{
	nomPatron_[compteurPatron] = nom;
	numeroPatron_[compteurPatron] = numero;
	compteurPatron++;
}

ChefDeProjet::ChefDeProjet(string nom, string NumeroEmploye, int anciennete)
{
	nomChefDeProjet_[compteurChefDeProjet] = nom;
	numeroEmploye_[compteurChefDeProjet] = NumeroEmploye;
	anciennete_[compteurChefDeProjet] = anciennete;
	compteurChefDeProjet++;
}

Programmeur::Programmeur(string nom, string NumeroEmploye, int anciennete)
{
	nomProgrammeur_[compteurProgrammeur] = nom;
	numeroEmploye_[compteurProgrammeur] = NumeroEmploye;
	anciennete_[compteurProgrammeur] = anciennete;
	compteurProgrammeur++;
}

SoundDesigner::SoundDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomSoundDesigner_[compteurSoundDesigner] = nom;
	numeroEmploye_[compteurSoundDesigner] = NumeroEmploye;
	anciennete_[compteurSoundDesigner] = anciennete;
	compteurSoundDesigner++;
}

GraphicDesigner::GraphicDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomGraphicDesigner_[compteurGraphicDesigner] = nom;
	numeroEmploye_[compteurGraphicDesigner] = NumeroEmploye;
	anciennete_[compteurGraphicDesigner] = anciennete;
	compteurGraphicDesigner++;
}

GameDesigner::GameDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomGameDesigner_[compteurGameDesigner] = nom;
	numeroEmploye_[compteurGameDesigner] = NumeroEmploye;
	anciennete_[compteurGameDesigner] = anciennete;
	compteurGameDesigner++;
}

LevelDesigner::LevelDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomLevelDesigner_[compteurLevelDesigner] = nom;
	numeroEmploye_[compteurLevelDesigner] = NumeroEmploye;
	anciennete_[compteurLevelDesigner] = anciennete;
	compteurLevelDesigner++;
}

Secretaire::Secretaire(string nom, int nbre, string NumeroEmploye, int anciennete)
{
	nomSecretaire_[compteurSecretaire] = nom;
	nbreDeSecretaire_[compteurSecretaire] = nbre;
	numeroEmploye_[compteurSecretaire] = NumeroEmploye;
	anciennete_[compteurSecretaire] = anciennete;
	compteurSecretaire++;
}

TechnicienDeSurface::TechnicienDeSurface(string nom, int nbre, string NumeroEmploye, int anciennete)
{
	nomTechnicienDeSurface_[compteurTechnicienDeSurface] = nom;
	nbreDeTechnicienDeSurface_[compteurTechnicienDeSurface] = nbre;
	numeroEmploye_[compteurTechnicienDeSurface] = NumeroEmploye;
	anciennete_[compteurTechnicienDeSurface] = anciennete;
	compteurTechnicienDeSurface++;
}

TechnicienInformatique::TechnicienInformatique(string nom, int nbre, string NumeroEmploye, int anciennete)
{
	nomTechnicienInformatique_[compteurTechnicienInformatique] = nom;
	nbreDeTechnicienInformatique_[compteurTechnicienInformatique] = nbre;
	numeroEmploye_[compteurTechnicienInformatique] = NumeroEmploye;
	anciennete_[compteurTechnicienInformatique] = anciennete;
	compteurTechnicienInformatique++;
}

			     	//Display//
/////////////////////////////////////////////////////

void Entreprise::afficher()
{
	cout << "-----Entreprise----" << endl;
	cout << "Nom : " << nom_ << endl;
	cout << "Numero d'entreprise : " << numero_ << endl;
	cout << "Lieu d'entreprise : " << lieu_ << endl;
	cout << "Nombre d'employes : " << compteurChefDeProjet + compteurGameDesigner + compteurGraphicDesigner + compteurLevelDesigner + compteurPatron + compteurProgrammeur + compteurSecretaire + compteurSoundDesigner + compteurTechnicienDeSurface + compteurTechnicienDeSurface + compteurTechnicienInformatique << endl;
	cout << endl;
}

void Patron::afficher()
{
	cout << "-----Patron-----" << endl;
	for (int i = 0; i < compteurPatron; i++)
	{
		cout << "Nom : " << nomPatron_[i] << endl;
		cout << "Numero PAT : " << numeroPatron_[i] << endl;
		cout << endl;
	}
}

void ChefDeProjet::afficher()
{
	cout << "-----Chef de projet-----" << endl;
	for (int i = 0; i < compteurChefDeProjet; i++)
	{
		cout << "Nom : " << nomChefDeProjet_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void Programmeur::afficher()
{
	cout << "-----Programmeur-----" << endl;
	for (int i = 0; i < compteurProgrammeur; i++)
	{
		cout << "Nom : " << nomProgrammeur_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void SoundDesigner::afficher()
{
	cout << "-----SoundDesigner-----" << endl;
	for (int i = 0; i < compteurSoundDesigner; i++)
	{
		cout << "Nom : " << nomSoundDesigner_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void GraphicDesigner::afficher()
{
	cout << "-----GraphicDesigner-----" << endl;
	for (int i = 0; i < compteurGraphicDesigner; i++)
	{
		cout << "Nom : " << nomGraphicDesigner_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void GameDesigner::afficher()
{
	cout << "-----GameDesigner-----" << endl;
	for (int i = 0; i < compteurGameDesigner; i++)
	{
		cout << "Nom : " << nomGameDesigner_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void LevelDesigner::afficher()
{
	cout << "-----LevelDesigner-----" << endl;
	for (int i = 0; i < compteurLevelDesigner; i++)
	{
		cout << "Nom : " << nomLevelDesigner_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void Secretaire::afficher()
{
	cout << "-----Secretaire-----" << endl;
	for (int i = 0; i < compteurSecretaire; i++)
	{
		cout << "Nom : " << nomSecretaire_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void TechnicienDeSurface::afficher()
{
	cout << "-----Technicien de surface-----" << endl;
	for (int i = 0; i < compteurTechnicienDeSurface; i++)
	{
		cout << "Nom : " << nomTechnicienDeSurface_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

void TechnicienInformatique::afficher()
{
	cout << "-----Technicien de surface-----" << endl;
	for (int i = 0; i < compteurTechnicienInformatique; i++)
	{
		cout << "Nom : " << nomTechnicienInformatique_[i] << endl;
		cout << "Numero d'employe : " << numeroEmploye_[i] << endl;
		cout << "Anciennete dans l'entreprise : " << anciennete_[i] << " ans" << endl;
		cout << endl;
	}
}

			  	  //Ajouter//
/////////////////////////////////////////////////////

void Patron::ajouterPatron(string nom, int numero)
{
	nomPatron_[compteurPatron] = nom;
	numeroPatron_[compteurPatron] = numero;
	compteurPatron++;
}

void ChefDeProjet::ajouterChefDeProjet(string nom, string NumeroEmploye, int anciennete)
{
	nomChefDeProjet_[compteurChefDeProjet] = nom;
	numeroEmploye_[compteurChefDeProjet] = NumeroEmploye;
	anciennete_[compteurChefDeProjet] = anciennete;
	compteurChefDeProjet++;
}

void Programmeur::ajouterProgrammeur(string nom, string NumeroEmploye, int anciennete)
{
	nomProgrammeur_[compteurProgrammeur] = nom;
	numeroEmploye_[compteurProgrammeur] = NumeroEmploye;
	anciennete_[compteurProgrammeur] = anciennete;
	compteurProgrammeur++;
}

void SoundDesigner::ajouterSoundDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomSoundDesigner_[compteurSoundDesigner] = nom;
	numeroEmploye_[compteurSoundDesigner] = NumeroEmploye;
	anciennete_[compteurSoundDesigner] = anciennete;
	compteurSoundDesigner++;
}

void GraphicDesigner::ajouterGraphicDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomGraphicDesigner_[compteurGraphicDesigner] = nom;
	numeroEmploye_[compteurGraphicDesigner] = NumeroEmploye;
	anciennete_[compteurGraphicDesigner] = anciennete;
	compteurGraphicDesigner++;
}

void GameDesigner::ajouterGameDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomGameDesigner_[compteurGameDesigner] = nom;
	numeroEmploye_[compteurGameDesigner] = NumeroEmploye;
	anciennete_[compteurGameDesigner] = anciennete;
	compteurGameDesigner++;
}

void LevelDesigner::ajouterLevelDesigner(string nom, string NumeroEmploye, int anciennete)
{
	nomLevelDesigner_[compteurLevelDesigner] = nom;
	numeroEmploye_[compteurLevelDesigner] = NumeroEmploye;
	anciennete_[compteurLevelDesigner] = anciennete;
	compteurLevelDesigner++;
}

void Secretaire::ajouterSecretaire(string nom, int nbre, string NumeroEmploye, int anciennete)
{
	nomSecretaire_[compteurSecretaire] = nom;
	nbreDeSecretaire_[compteurSecretaire] = nbre;
	numeroEmploye_[compteurSecretaire] = NumeroEmploye;
	anciennete_[compteurSecretaire] = anciennete;
	compteurSecretaire++;
}

void TechnicienDeSurface::ajouterTechnicienDeSurface(string nom, int nbre, string NumeroEmploye, int anciennete)
{
	nomTechnicienDeSurface_[compteurTechnicienDeSurface] = nom;
	nbreDeTechnicienDeSurface_[compteurTechnicienDeSurface] = nbre;
	numeroEmploye_[compteurTechnicienDeSurface] = NumeroEmploye;
	anciennete_[compteurTechnicienDeSurface] = anciennete;
	compteurTechnicienDeSurface++;
}

void TechnicienInformatique::ajouterTechnicienInformatique(string nom, int nbre, string NumeroEmploye, int anciennete)
{
	nomTechnicienInformatique_[compteurTechnicienInformatique] = nom;
	nbreDeTechnicienInformatique_[compteurTechnicienInformatique] = nbre;
	numeroEmploye_[compteurTechnicienInformatique] = NumeroEmploye;
	anciennete_[compteurTechnicienInformatique] = anciennete;
	compteurTechnicienInformatique++;
}

				//Destructeur//
/////////////////////////////////////////////////////

Entreprise::~Entreprise() {};
Patron::~Patron() {};
ChefDeProjet::~ChefDeProjet() {};
Programmeur::~Programmeur() {};
SoundDesigner::~SoundDesigner() {};
GraphicDesigner::~GraphicDesigner() {};
GameDesigner::~GameDesigner() {};
LevelDesigner::~LevelDesigner() {};
Secretaire::~Secretaire() {};
TechnicienDeSurface::~TechnicienDeSurface() {};
TechnicienInformatique::~TechnicienInformatique() {};