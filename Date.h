#pragma once
#include<iostream>
class Date
{
private:
	int jour;
	int mois;
	int annee;
public:
	 Date(int, int, int);
	 Date();
	static bool estBissextille(int);
	static bool estValide(int, int, int);
	bool operator==(const Date&) const;
	bool operator<(const Date&) const;
};

