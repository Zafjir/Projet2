#include "Header.h"

/////////////////////////////////////////////////////////////////////////////
//							  Constructeur                                 //
/////////////////////////////////////////////////////////////////////////////

Entreprise::Entreprise(int numero, string nom, string lieu)
{
	numeroEntreprise_ = numero;
	nomEntreprise_ = nom;
	lieuEntreprise_ = lieu;
	nbreEmployes_ = nbreEmployes;
}

Patron::Patron(string nom, int numero)
{
	nomPatron_ = nom;
	numeroPatron_ = numero;
	nbrePatron++;
}

TechnicienDeSurface::TechnicienDeSurface(string nom, string matricule, int anciennete)
{
	nomTechnicienDeSurface_[nbreTechnicienDeSurface] = nom;
	matriculeTechnicienDeSurface_[nbreTechnicienDeSurface] = matricule;
	ancienneteTechnicienDeSurface_[nbreTechnicienDeSurface] = anciennete;
	nbreTechnicienDeSurface++;
	nbreDeTechnicienDeSurface_ = nbreTechnicienDeSurface;
}

TechnicienInformatique::TechnicienInformatique(string nom, string matricule, int anciennete)
{
	nomTechnicienInformatique_[nbreTechnicienInformatique] = nom;
	matriculeTechnicienInformatique_[nbreTechnicienInformatique] = matricule;
	ancienneteTechnicienInformatique_[nbreTechnicienInformatique] = anciennete;
	nbreTechnicienInformatique++;
	nbreDeTechnicienInformatique_ = nbreTechnicienInformatique;
}

Secretaire::Secretaire(string nom, string matricule, int anciennete)
{
	nomSecretaire_[nbreSecretaire] = nom;
	matriculeSecretaire_[nbreSecretaire] = matricule;
	ancienneteSecretaire_[nbreSecretaire] = anciennete;
	nbreSecretaire++;
	nbreDeSecretaire_ = nbreSecretaire;
}

ChefDeProjet::ChefDeProjet(string nom, string matricule, int anciennete)
{
	nomChefDeProjet_[nbreChefDeProjet] = nom;
	matriculeChefDeProjet_[nbreChefDeProjet] = matricule;
	ancienneteChefDeProjet_[nbreChefDeProjet] = anciennete;
	nbreChefDeProjet++;
	nbreDeChefDeProjet_ = nbreChefDeProjet;
}

SoundDesigner::SoundDesigner(string nom, Equipe &matricule, int anciennete)
{
	nomSoundDesigner_[nbreSoundDesigner] = nom;
	matriculeSoundDesigner_[nbreSoundDesigner] = matricule.matricule_;
	roleSoundDesigner_[nbreSoundDesigner] = matricule.role_;
	ancienneteSoundDesigner_[nbreSoundDesigner] = anciennete;
	nbreSoundDesigner++;
}

GraphicDesigner::GraphicDesigner(string nom, Equipe &matricule, int anciennete)
{
	nomGraphicDesigner_[nbreGraphicDesigner] = nom;
	matriculeGraphicDesigner_[nbreGraphicDesigner] = matricule.matricule_;
	roleGraphicDesigner_[nbreGraphicDesigner] = matricule.role_;
	ancienneteGraphicDesigner_[nbreGraphicDesigner] = anciennete;
	nbreGraphicDesigner++;
}

Programmeur::Programmeur(string nom, Equipe &matricule, int anciennete)
{
	nomProgrammeur_[nbreProgrammeur] = nom;
	matriculeProgrammeur_[nbreProgrammeur] = matricule.matricule_;
	roleProgrammeur_[nbreProgrammeur] = matricule.role_;
	ancienneteProgrammeur_[nbreProgrammeur] = anciennete;
	nbreProgrammeur++;
}

GameDesigner::GameDesigner(string nom, Equipe &matricule, int anciennete)
{
	nomGameDesigner_[nbreGameDesigner] = nom;
	matriculeGameDesigner_[nbreGameDesigner] = matricule.matricule_;
	roleGameDesigner_[nbreGameDesigner] = matricule.role_;
	ancienneteGameDesigner_[nbreGameDesigner] = anciennete;
	nbreGameDesigner++;
}

LevelDesigner::LevelDesigner(string nom, Equipe &matricule, int anciennete)
{
	nomLevelDesigner_[nbreLevelDesigner] = nom;
	matriculeLevelDesigner_[nbreLevelDesigner] = matricule.matricule_;
	roleLevelDesigner_[nbreLevelDesigner] = matricule.role_;
	ancienneteLevelDesigner_[nbreLevelDesigner] = anciennete;
	nbreLevelDesigner++;
}

Equipe::Equipe(int matricule, string role)
{
	matricule_ = matricule;
	role_ = role;
}

/////////////////////////////////////////////////////////////////////////////
//							   Destructeur                                 //
/////////////////////////////////////////////////////////////////////////////

Entreprise::~Entreprise() {}
Patron::~Patron() {}
TechnicienDeSurface::~TechnicienDeSurface() {}
TechnicienInformatique::~TechnicienInformatique() {}
Secretaire::~Secretaire() {}
ChefDeProjet::~ChefDeProjet() {}
SoundDesigner::~SoundDesigner() {}
GraphicDesigner::~GraphicDesigner() {}
Programmeur::~Programmeur() {}
GameDesigner::~GameDesigner() {}
LevelDesigner::~LevelDesigner() {}
Equipe::~Equipe() {}

/////////////////////////////////////////////////////////////////////////////
//							     Afficher                                  //
/////////////////////////////////////////////////////////////////////////////

void Entreprise::afficherEntreprise()
{
	nbreEmployes = nbrePatron + nbreTechnicienDeSurface + nbreTechnicienInformatique + nbreSecretaire + nbreSoundDesigner + nbreGraphicDesigner + nbreProgrammeur + nbreGameDesigner + nbreLevelDesigner;
	nbreEmployes_ = nbreEmployes;
	cout << "----- Entreprise -----\n" << endl;
	cout << "Numero d'entreprise : " << numeroEntreprise_ << endl;
	cout << "Nom de l'entreprise : " << nomEntreprise_ << endl;
	cout << "Lieu de l'entreprise : " << lieuEntreprise_ << endl;
	cout << "Nombre d'employes : " << nbreEmployes_ << "\n" << endl;
	cout << "_______________________________________" << endl;
}

void Patron::afficherPatron()
{
	cout << "----- Patron -----\n" << endl;
	cout << "Nom : " << nomPatron_ << endl;
	cout << "Numero de patron : " << numeroPatron_ << "\n" << endl;
	cout << "_______________________________________" << endl;
}

void TechnicienDeSurface::afficherTechnicienDeSurface()
{
	cout << "----- Technicien de surface -----\n" << endl;
	for (int i = 0 ; i < nbreTechnicienDeSurface ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomTechnicienDeSurface_[i] << endl;
		cout << "Matricule : " << matriculeTechnicienDeSurface_[i] << endl;
		cout << "Anciennete : " << ancienneteTechnicienDeSurface_[i] << "\n" << endl;
	}
	cout << "Nombre de technicien(s) de surface : " << nbreDeTechnicienDeSurface_ << endl;
	cout << "_______________________________________" << endl;
}

void TechnicienInformatique::afficherTechnicienInformatique()
{
	cout << "----- Technicien informatique -----\n" << endl;
	for (int i = 0 ; i < nbreTechnicienInformatique ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomTechnicienInformatique_[i] << endl;
		cout << "Matricule : " << matriculeTechnicienInformatique_[i] << endl;
		cout << "Anciennete : " << ancienneteTechnicienInformatique_[i] << "\n" << endl;
	}
	cout << "Nombre de technicien(s) informatique : " << nbreDeTechnicienInformatique_ << endl;
	cout << "_______________________________________" << endl;
}

void Secretaire::afficherSecretaire()
{
	cout << "----- Secretaire -----\n" << endl;
	for (int i = 0 ; i < nbreSecretaire ; i++)
	{
		cout << i+1 << ") "; cout << "Nom : " << nomSecretaire_[i] << endl;
		cout << "Matricule : " << matriculeSecretaire_[i] << endl;
		cout << "Anciennete : " << ancienneteSecretaire_[i] << "\n" << endl;
	}
	cout << "Nombre de secretaire(s) : " << nbreDeSecretaire_ << endl;
	cout << "_______________________________________" << endl;
}

void ChefDeProjet::afficherChefDeProjet()
{
	cout << "----- Chef de projet -----\n" << endl;
	for (int i = 0 ; i < nbreChefDeProjet ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomChefDeProjet_[i] << endl;
		cout << "Matricule : " << matriculeChefDeProjet_[i] << endl;
		cout << "Anciennete : " << ancienneteChefDeProjet_[i] << "\n" << endl;
	}
	cout << "Nombre de chef(s) de projet : " << nbreDeChefDeProjet_ << endl;
	cout << "_______________________________________" << endl;
}

void SoundDesigner::afficherSoundDesigner()
{
	cout << "----- SoundDesigner -----\n" << endl;
	for (int i = 0 ; i < nbreSoundDesigner ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomSoundDesigner_[i] << endl;
		cout << "Matricule : " << matriculeSoundDesigner_ << roleSoundDesigner_ << endl;
		cout << "Anciennete : " << ancienneteSoundDesigner_[i] << "\n" << endl;
	}
	cout << "Nombre de sound designer(s) : " << nbreSoundDesigner << endl;
	cout << "_______________________________________" << endl;
}

void GraphicDesigner::afficherGraphicDesigner()
{
	cout << "----- GraphicDesigner -----\n" << endl;
	for (int i = 0 ; i < nbreGraphicDesigner ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomGraphicDesigner_[i] << endl;
		cout << "Matricule : " << matriculeGraphicDesigner_ << roleGraphicDesigner_ << endl;
		cout << "Anciennete : " << ancienneteGraphicDesigner_[i] << "\n" << endl;
	}
	cout << "Nombre de graphic designer(s) : " << nbreGraphicDesigner << endl;
	cout << "_______________________________________" << endl;
}

void Programmeur::afficherProgrammeur()
{
	cout << "----- Programmeur -----\n" << endl;
	for (int i = 0 ; i < nbreProgrammeur ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomProgrammeur_[i] << endl;
		cout << "Matricule : " << matriculeProgrammeur_ << roleProgrammeur_ << endl;
		cout << "Anciennete : " << ancienneteProgrammeur_[i] << "\n" << endl;
	}
	cout << "Nombre de programmeur(s) : " << nbreProgrammeur << endl;
	cout << "_______________________________________" << endl;
}

void GameDesigner::afficherGameDesigner()
{
	cout << "----- GameDesigner -----\n" << endl;
	for (int i = 0 ; i < nbreGameDesigner ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomGameDesigner_[i] << endl;
		cout << "Matricule : " << matriculeGameDesigner_ << roleGameDesigner_ << endl;
		cout << "Anciennete : " << ancienneteGameDesigner_[i] << "\n" << endl;
	}
	cout << "Nombre de game designer(s) : " << nbreGameDesigner << endl;
	cout << "_______________________________________" << endl;
}

void LevelDesigner::afficherLevelDesigner()
{
	cout << "----- LevelDesigner -----\n" << endl;
	for (int i = 0 ; i < nbreLevelDesigner ; i++)
	{
		cout << i + 1 << ") "; cout << "Nom : " << nomLevelDesigner_[i] << endl;
		cout << "Matricule : " << matriculeLevelDesigner_ << roleLevelDesigner_ << endl;
		cout << "Anciennete : " << ancienneteLevelDesigner_[i] << "\n" << endl;
	}
	cout << "Nombre de level designer(s) : " << nbreLevelDesigner << endl;
	cout << "_______________________________________" << endl;
}

/////////////////////////////////////////////////////////////////////////////
//					         Travail :: Rôle                               //
/////////////////////////////////////////////////////////////////////////////

void TechnicienDeSurface::nettoyer()
{
	if (nbreTechnicienDeSurface > 1)
	{
		cout << "Les techniciens de surface a fini de nettoyer les locaux." << endl;
	}
	if (nbreTechnicienDeSurface = 1)
	{
		cout << "Le technicien de surface a fini de nettoyer les locaux." << endl;
	}
	if (nbreTechnicienDeSurface = 0)
	{
		cout << "L'entreprise n'a pas de technicien de surface." << endl;
	}
}

void TechnicienInformatique::reparer()
{
	if (nbreTechnicienInformatique > 1)
	{
		cout << "Les techniciens informatique a fini de reparer les appareils." << endl;
	}
	if (nbreTechnicienInformatique = 1)
	{
		cout << "Le technicien informatique a fini de reparer les appareils." << endl;
	}
	if (nbreTechnicienInformatique = 0)
	{
		cout << "L'entreprise n'a pas de technicien informatique." << endl;
	}
}

void Secretaire::gerer()
{
	if (nbreSecretaire > 1)
	{
		cout << "Les secretaires ont fini de gerer les clients et comptes de l'entreprise." << endl;
	}
	if (nbreSecretaire = 1)
	{
		cout << "Le secretaire a fini de gerer les clients et comptes de l'entreprise" << endl;
	}
	if (nbreSecretaire = 0)
	{
		cout << "L'entreprise n'a pas de secretaire." << endl;
	}
}

void SoundDesigner::developperSon()
{
	if (nbreSoundDesigner > 1)
	{
		cout << "Les sound designers de l'equipe developpent le son." << endl;
	}
	if (nbreSoundDesigner = 1)
	{
		cout << "Le sound designer de l'équipe developpe le son." << endl;
	}
	if (nbreSoundDesigner = 0)
	{
		cout << "Le chef de projet n'a pas embauche de sound designer." << endl;
	}
}

void GraphicDesigner::developperGraphic()
{
	if (nbreGraphicDesigner > 1)
	{
		cout << "Les graphic designers de l'equipe developpent les graphismes." << endl;
	}
	if (nbreGraphicDesigner = 1)
	{
		cout << "Le graphic designer de l'equipe developpe les graphismes." << endl;
	}
	if (nbreGraphicDesigner = 0)
	{
		cout << "Le chef de projet n'a pas embauche de graphic designer." << endl;
	}
}

void Programmeur::developper()
{
	if (nbreProgrammeur > 1)
	{
		cout << "Les programmeurs de l'equipe developpent le code du produit." << endl;
	}
	if (nbreProgrammeur = 1)
	{
		cout << "Le programmeur de l'equipe developpe le code du produit." << endl;
	}
	if (nbreProgrammeur = 0)
	{
		cout << "Le chef de projet n'a pas embauche de programmeur." << endl;
	}
}

void GameDesigner::developperGameDesign()
{
	if (nbreGameDesigner > 1)
	{
		cout << "Les game designers de l'equipe developpent le design du jeu." << endl;
	} 
	if (nbreGameDesigner = 1)
	{
		cout << "Le game designer de l'equipe developpe le design du jeu." << endl;
	}
	if (nbreGameDesigner = 0)
	{
		cout << "Le chef de projet n'a pas embauche de game designer." << endl;
	}
}

void LevelDesigner::developperLevelDesign():Equipe(int matricule, string role)
{
	if (nbreLevelDesigner > 1)
	{
		cout << "Les level designers de l'equipe developpent les niveaux du jeu." << endl;
	}
	if (nbreLevelDesigner = 1)
	{
		cout << "Le level designer de l'equipe developpe les niveaux du jeu." << endl;
	}
	if (nbreLevelDesigner = 0)
	{
		cout << "Le chef de projet n'a pas embauche de level designer." << endl;
	}
}

/////////////////////////////////////////////////////////////////////////////
//					              Ajouter                                  //
/////////////////////////////////////////////////////////////////////////////

void Patron::ajouterChefDeProjet()
{

}

void Patron::ajouterTechnicienDeSurface()
{

}

void Patron::ajouterTechnicienInformatique()
{

}

void Patron::ajouterSecretaire()
{

}

void ChefDeProjet::ajouterSoundDesigner()
{

}

void ChefDeProjet::ajouterGraphicDesigner()
{

}

void ChefDeProjet::ajouterProgrammeur()
{
	
}

void ChefDeProjet::ajouterGameDesigner()
{

}

void ChefDeProjet::ajouterLevelDesigner()
{

}

/////////////////////////////////////////////////////////////////////////////
//					              Enlever                                  //
/////////////////////////////////////////////////////////////////////////////

void Patron::enleverChefDeProjet()
{

}

void Patron::enleverTechnicienDeSurface()
{

}

void Patron::enleverTechnicienInformatique()
{

}

void Patron::enleverSecretaire()
{

}

void ChefDeProjet::enleverSoundDesigner()
{

}

void ChefDeProjet::enleverGraphicDesigner()
{

}

void ChefDeProjet::enleverProgrammeur()
{

}

void ChefDeProjet::enleverGameDesigner()
{

}

void ChefDeProjet::enleverLevelDesigner()
{

}