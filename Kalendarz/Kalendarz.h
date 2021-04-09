#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Kalendarz
{
	int dzien;
	int miesiac;
	int rok;
	string rodzaj;

	int d;
	int m;
	int r;

public:
	void Wczytaj();
	void Pokaz();
	void NastepnyDzien();
	void Roznica();
};

