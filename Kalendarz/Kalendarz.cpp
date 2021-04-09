#include "Kalendarz.h"

void Kalendarz::Wczytaj()
{
	while (true)
	{
		printf("Podaj prawid³owy dzieñ, miesi¹c i rok(oddzielone znakiem spacji): ");
		scanf_s("%i %i %i", &dzien, &miesiac, &rok);

		if ((dzien <= 30 && dzien > 0) && (miesiac <= 12 && miesiac > 0)) break;
	}


	printf("Oraz typ kalendarza, np gregoriañski: ");
	cin >> rodzaj;
}

void Kalendarz::Pokaz()
{
	printf("Zapisana data: %i:%i:%i", dzien, miesiac, rok);
	cout << "\nRodzaj: " << rodzaj;
}

void Kalendarz::NastepnyDzien()
{
	dzien += 1;

	if (dzien == 31)
	{
		dzien = 1;

		miesiac += 1;

		if (miesiac == 13)
		{
			miesiac = 1;
			rok += 1;
		}
	}

	printf("\nNastêpny dzieñ: %i:%i:%i", dzien, miesiac, rok);
}

void Kalendarz::Roznica()
{
	int dni1, dni2, roznica;

	cout << endl;

	while (true)
	{
		printf("Podaj prawid³owy dzieñ, miesi¹c i rok\ndla którego chcesz policzyc ró¿nicê w dniach(oddzielone znakiem spacji): ");
		scanf_s("%i %i %i", &d, &m, &r);

		if ((d <= 30 && d > 0) && (m <= 12 && m > 0)) break;
	}

	dni1 = dzien + (30 * (miesiac + rok * 12)) - 1;
	dni2 = d + (30 * (m + r * 12));
	roznica = fabs(dni1 - dni2);

	printf("Ró¿nica wynosi: %i", roznica);
}
