#pragma once

class Temps
{

private:

	int heure;
	int minute;
	int seconde;

public:
	
	Temps();
	void remplissage();
	bool inferieur(Temps ts);
	void afficher();
	void Comparer();

};