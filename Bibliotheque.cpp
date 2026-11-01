#include "Bibliotheque.h"
#include"livre.h"
int  Bibliotheque::nbbibleotheque = 0;

Bibliotheque::Bibliotheque()
{
}

Bibliotheque::Bibliotheque(string n, int c)
{
	this->nom = n;
	this->capacite = c;
	this->nblivres = 0;
	if(this->capacite>0){
	
	this->livres = new livre * [this->capacite];
	for (int i = 0;i < this->capacite;i++) {
		livres[i] = nullptr;
	}
	nbbibleotheque++;
	}
}

Bibliotheque::Bibliotheque(const Bibliotheque& b)
{
	this->nom = b.nom;
	this->capacite = b.capacite;
	this->nblivres = b.nblivres;
	livres = new livre * [ this->capacite];
	for (int i = 0; i <this-> nblivres; i++) {
		livres[i] = new livre(*b.livres[i]); 
		
	}
	nbbibleotheque++;
}

Bibliotheque Bibliotheque::operator=(const Bibliotheque& b)
{
	if (this != &b) {
		
		for (int i = 0; i < nblivres; i++)
			delete livres[i];
		delete[] livres;

		
		nom = b.nom;
		capacite = b.capacite;
		nblivres = b.nblivres;

		
		livres = new livre * [capacite];
		for (int i = 0; i < nblivres; i++)
			livres[i] = new livre(*b.livres[i]);
	}
	return *this;
}

Bibliotheque Bibliotheque::operator+=(const livre& l)
{
	
{
		if (nblivres == capacite) {
			cout << "Bibliotheque pleine" << endl;
			return *this;
		}
		livres[nblivres] = new livre(l);
		nblivres++;
		return *this;
	}
}

Bibliotheque::~Bibliotheque()
{
	
	delete[] livres;
	livres = nullptr;

}

livre& Bibliotheque::ajouterlivre(livre& l)
{
	*this += l;                      // on utilise operator+=
	return *livres[nblivres - 1];    // le dernier livre ajoute
}

livre* Bibliotheque::rechercher(int id) const
{
	for (int i = 0;i < nblivres;i++) {
		if (livres[i]->getId() == id) {
			return livres[i];

		}
		return nullptr;
	}
}

livre* Bibliotheque::rechercher(string titre) const
{
	
		for (int i = 0; i < nblivres; i++) {
			if (livres[i]->getTitre() == titre)
				return livres[i];
		}
		return nullptr;
	
}






void Bibliotheque::affiche() const
{
	
}
