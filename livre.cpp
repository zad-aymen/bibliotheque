#include "livre.h"
#include "Date.h"
#include<iostream>
#include<string>
int livre::compteurid = 0;
int livre::nbinstances = 0;

livre::livre(string titre, string auteur, Date parution ,int nBNoteS): id(++compteurid),titre(titre),auteur(auteur),notes(new int[nBNoteS]),parution(parution)
{
	this->nbinstances++;
}

livre::livre(const livre& l):id(++compteurid)
{
	this->auteur = l.auteur;
	this->titre = l.titre;
	this->parution = l.parution;
	this->nBNoteS = l.nBNoteS;
	this->notes = new int[this->nBNoteS];
	for (int i = 0;i < this->nBNoteS;i++){
		this->notes[i] = l.notes[i];

	}
}

livre livre::operator=(const livre& l)
{
	this->auteur = l.auteur;
	this->titre = l.titre;
	this->parution = l.parution;
	this->nBNoteS = l.nBNoteS;
	this->notes = new int[nBNoteS];
	for (int i = 0;i < this->nBNoteS;i++) {
		this->notes[i] = l.notes[i];
	}
	return *this;
     
}



int livre::getId() const
{
	return id;
}

string livre::getTitre() const
{
	return titre  ;
}



livre::~livre()
{
	nbinstances--;
	delete[] notes;
	notes = nullptr;
}
