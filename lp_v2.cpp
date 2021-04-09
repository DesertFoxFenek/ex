#include <iostream>

using namespace std;

struct Numery
{
    int numer;
    Numery* nastepny;
    Numery()
    {
        nastepny = 0;
    }
};

struct Lista {
    
    Numery* pierwszy;

    void dodaj(int numer)
    {
        Numery* nowa = new Numery;
        nowa->numer = numer;

        if (pierwszy == 0)
        {
            pierwszy = nowa;
        }
        else
        {
            Numery* temp = pierwszy;

            while (temp->nastepny)
            {
                temp = temp->nastepny;
            }

            temp->nastepny = nowa;
            nowa->nastepny = 0;    
        }
    }

    void pokaz()
    {
        Numery* temp = pierwszy;

        while (temp)
        {
            cout << "Numer " << temp->numer <<endl;
            temp = temp->nastepny;
        }
    }

    void usun()     //zadanie 4
    {
        if (this->pierwszy->nastepny == NULL) {
            delete this->pierwszy;
            this->pierwszy = NULL;
            return;
        }
        Numery* prev = NULL;
        Numery* act = this->pierwszy;
        while (act->nastepny != NULL) {
            prev = act;
            act = act->nastepny;
        }
        delete act;
        prev->nastepny = NULL;
    }

    Lista()
    {
        pierwszy = 0;
    }
};


class MojaLista
{
public:
    Numery* pierwszy;

    void pokaz_k()
    {
        Numery* temp = pierwszy;

        while (temp)
        {
            cout << "Numer " << temp->numer << endl;
            temp = temp->nastepny;
        }
    }

    void dodaj_k(int numer)
    {
        Numery* nowa = new Numery;
        nowa->numer = numer;

        if (pierwszy == 0)
        {
            pierwszy = nowa;
        }
        else
        {
            Numery* temp = pierwszy;

            while (temp->nastepny)
            {
                temp = temp->nastepny;
            }

            temp->nastepny = nowa;
            nowa->nastepny = 0;
        }
    }

    void usun_k()
    {
        if (this->pierwszy->nastepny == NULL) {
            delete this->pierwszy;
            this->pierwszy = NULL;
            return;
        }
        Numery* prev = NULL;
        Numery* act = this->pierwszy;
        while (act->nastepny != NULL) {
            prev = act;
            act = act->nastepny;
        }
        delete act;
        prev->nastepny = NULL;
    }

    MojaLista()
    {
        pierwszy = 0;
    }
};


int main()
{

    //zadanie 2
    int n;
    Lista* b = new Lista;
    b->dodaj(12);
    b->dodaj(454412);
    b->dodaj(23312);
    b->dodaj(1243);

    //zadanie 3
    cout << "Lista przed dodaniem" << endl;
    b->pokaz();
    cout << endl << "Podaj liczbe do dodania: ";
    cin >> n;
    cout << endl;
    b->dodaj(n);
    cout << "Po dodaniu:" << endl;
    b->pokaz();

    delete b;
    //zadanie 5
    MojaLista L;

    cout << endl << "MojaLista: " << endl;
    L.dodaj_k(321);
    L.dodaj_k(34321);
    L.dodaj_k(23221);
    L.dodaj_k(4321);

    L.pokaz_k();

    return 0;
}