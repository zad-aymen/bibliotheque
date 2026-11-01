#pragma once
#include<iostream>
#include<string>
#include"livre.h"
using namespace std;
class Bibliotheque
{
private:
	string nom;
	livre** livres;
	int capacite;
	int nblivres;
	static int nbbibleotheque;
public:
	Bibliotheque();
	Bibliotheque(string, int);
	Bibliotheque(const Bibliotheque&);
	Bibliotheque operator=(const Bibliotheque&);
	Bibliotheque operator+=(const livre&);
	~Bibliotheque();
	 livre& ajouterlivre(livre&);
	 livre* rechercher(int) const;
	 livre* rechercher(string) const;
	 void affiche()const;


};

