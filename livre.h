#pragma once
#include<string>
#include<iostream>
#include"livre.h"
#include"Date.h"
using namespace std;

class livre
{
private :
	const int id;
	string titre;
	string auteur;
	Date parution;
	int* notes;
	int nBNoteS;
	static int compteurid;
	static int nbinstances;
	
	
public:
	livre( string , string ,  Date ,int );
	livre(const livre& );
	livre operator=(const livre&);
	livre operator+=(const livre&);
	int getId() const;
	string getTitre()const;
	~livre();

    
};

