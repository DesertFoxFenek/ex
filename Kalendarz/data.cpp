#include <iostream>
#include "Kalendarz.h"

using namespace std;

int main()
{
    system("chcp 1250");

    Kalendarz p1;

    p1.Wczytaj();
    p1.Pokaz();
    p1.NastepnyDzien();
    p1.Roznica();

    return 0;
}
