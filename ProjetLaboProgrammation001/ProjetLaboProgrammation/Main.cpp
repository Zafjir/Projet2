#include "Header.h"

void main()
{
	Entreprise entre(1, "Berte Corp", "Bassilly", 15);
	Patron patr("Berte Thomas", 001);
	ChefDeProjet chef("ChefDeProjet 1", "001CDP", 8);
	Programmeur progr("Programmeur 1", "001PROG", 2);
	SoundDesigner soundD("SoundDesigner 1", "001SD", 4);
	GraphicDesigner graphD("GraphicDesigner 1", "001GraphD", 1);
	GameDesigner gameD("GameDesigner 1", "001GameD", 6);
	LevelDesigner levelD("LevelDesigner 1", "001LD", 3);
	Secretaire secr("Secretaire 1", compteurSecretaire, "001S", 2);
	TechnicienDeSurface techS("TechnicienDeSurface 1", compteurTechnicienDeSurface, "001TS", 3);
	TechnicienInformatique techI("TechnicienInformatique 1", compteurTechnicienInformatique, "001TI", 1);

	progr.ajouterProgrammeur("Programmeur 2", "002PROG", 1);
	soundD.ajouterSoundDesigner("SoundDesigner 2", "002SD", 1);
	graphD.ajouterGraphicDesigner("GraphicDesigner 2", "002GraphD", 1);
	gameD.ajouterGameDesigner("GameDesigner 2", "002GameD", 1);
	levelD.ajouterLevelDesigner("LevelDesigner 2", "002LD", 1);
	secr.ajouterSecretaire("Secretaire 2", compteurSecretaire, "002S", 1);
	techS.ajouterTechnicienDeSurface("TechnicienDeSurface 2", compteurTechnicienDeSurface, "002TS", 1);
	techI.ajouterTechnicienInformatique("TechnicienInformatique 2", compteurTechnicienInformatique, "002TI", 1);
	
	entre.afficher();
	patr.afficher();
	chef.afficher();
	progr.afficher();
	soundD.afficher();
	graphD.afficher();
	gameD.afficher();
	levelD.afficher();
	secr.afficher();
	techS.afficher();
	techI.afficher();

	system("pause");
	system("cls");

	patr.ajouterPatron("Lechante Adrien", 002);
	patr.afficher();


	
	system("pause");
}