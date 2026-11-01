#include "Date.h"
#include<string>

Date::Date(int a, int m, int j) :annee(2000),mois(1),jour(1)
{
	this->annee = a;
	this->mois = m;
	this->jour = j;
}

Date::Date()
{
}

bool Date::estBissextille(int a)
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		return true;
	}
	else false;
}

bool Date::estValide(int a, int m, int j)
{
	if (j >= 1 && j <= 31 && m >= 1 && m <= 12 && a <= 2026) {
		if (m == 2) {
			if (j <= 28 || (j == 29 && estBissextille(a))) {
				return true;
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (j <= 30) {
				return true;
			}
		}
		else {
			if (j <= 31) {
				return true;
			}
		}
	}
	return false;
}
	
	
bool Date::operator==(const Date& d) const
{
	if (this->annee == d.annee && this->mois == d.mois && this->jour == d.jour) {

		return true;
	}
	else return false;

		
		
		
}

bool Date::operator<(const Date& d) const
{
	if(this->annee<d.annee) {
		return true;
	}
	else if(this->annee==d.annee&&this->mois<d.mois) {
		return true;
	}
	else if(this->annee == d.annee && this->mois == d.mois && this->jour<d.jour){
		return true;
	}
	return false;
}
	