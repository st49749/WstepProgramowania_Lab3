#include <iostream>
#include <time.h>
#include <string.h>
#include <string>

using namespace std;

// Tablice_1.pdf
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

// Tablice_2.pdf
void strTask1();
void strTask2();
void strTask3();
void strTask4();
void strTask5();
void strTask6();


int main()
{
	// zadania z pierwszego PDF'a Tablice_1.pdf
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();

	// zadania z drugiego PDF'a Tablice_2.pdf
	//strTask1();
	//strTask2();
	//strTask3();
	//strTask4();
	//strTask5();
	strTask6();
}

void task1()
{
	const int tableSize = 10;
	int table[tableSize] = { 3,6,9,12, 15,18,21,24,27,30 };
}

void task2()
{
	const int tableSize = 10;
	int table[tableSize] = { 3,6,9,12, 15,18,21,24,27,30 };

	for (int i = 1; i < 10; i = i + 2)
	{
		cout << "Element nr " << (i + 1) << " - " << table[i] << endl;
	}
}

void task3()
{
	const int tableSize = 10;
	int table[tableSize];

	int a = 10;

	cout << "Podaj a : ", cin >> a;
	for (int i = tableSize; i > 0; i--)
	{
		table[i - 1] = a - 1;
		a = a - 5;
	}

	for (int i = 1; i < 10; i++)
	{
		cout << "Element nr " << (i + 1) << " - " << table[i] << endl;
	}
}

void task4()
{
	srand(time(NULL)); // funckja pozwalajaca na pseudolosowanie, wywoływana jest tylko raz

	const int tableSize = 10;
	int table[tableSize];
	for (int i = 0; i < tableSize; i++)
	{
		table[i] = rand() % 74 - 23;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Element nr " << (i + 1) << " - " << table[i] << endl;
	}
}

void task5()
{
	const int tableSize = 10;
	int table[tableSize];

	cout << "Podaj 1 liczbe : ", cin >> table[0];
	cout << "Podaj 2 liczbe : ", cin >> table[1];

	for (int i = 2; i < tableSize; i++)
	{
		table[i] = table[i - 1] + table[i - 2];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Element nr " << (i + 1) << " - " << table[i] << endl;
	}
}

void task6()
{
	const int tableSize = 20;
	int table[tableSize] = { 1,2,3,4,5,6,7,8,9,10 };

	int fillIndex = 10;
	for (int i = 0; i < 10; i++)
	{
		table[fillIndex] = table[i];
		fillIndex++;
	}

	for (int i = 0; i < tableSize; i++)
	{
		cout << "Element nr " << (i + 1) << " - " << table[i] << endl;
	}
}

void task7()
{
	const int xSize = 4;
	const int ySize = 4;

	int table[xSize][ySize];
	int sum = 0;

	srand(time(NULL)); // funckja pozwalajaca na pseudolosowanie, wywoływana jest tylko raz

	for (int i = 0; i < xSize; i++)
	{
		for (int j = 0; j < ySize; j++)
		{
			table[i][j] = rand() % 74 - 23;

			if (i == j)
			{
				sum = sum + table[i][j];
			}
		}
	}

	cout << "Suma elementwo przekatnej " << sum << endl;
}

void task8()
{
	const int xSize = 4;
	const int ySize = 4;

	int firstTable[xSize][ySize];
	int secondTable[xSize][ySize];
	int sum = 0;

	srand(time(NULL)); // funckja pozwalajaca na pseudolosowanie, wywoływana jest tylko raz

	// random fill
	for (int i = 0; i < xSize; i++)
	{
		for (int j = 0; j < ySize; j++)
		{
			firstTable[i][j] = rand() % 74 - 23;
			secondTable[i][j] = rand() % 74 - 23;
		}
	}

	int finalTable[xSize][ySize];
	for (int i = 0; i < xSize; i++)
	{
		for (int j = 0; j < ySize; j++)
		{
			finalTable[i][j] = firstTable[i][j] + secondTable[i][j];
			cout << finalTable[i][j] << "  ";
		}
		cout << endl;
	}
}

void strTask1()
{
	// Czym różni sie tablica zadeklarowana w sposób:
	char zdanie1[] = { "lot" };
	char zdanie2[] = { 'l', 'o', 't' };

	string userInputString;
	cout << "First: " << zdanie1 << endl;
	cout << "Second: " << zdanie2 << endl;

	cout << "First size: " << sizeof(zdanie1) / sizeof(zdanie1[0]) << endl;
	cout << "Second size: " << sizeof(zdanie2) / sizeof(zdanie2[0]) << endl;

	// Console output:
	// First: lot
	// Second : lot╠╠╠╠╠╠╠╠╠lot
	// First size : 4
	// Second size : 3


	// ODPOWIEDZ:
	// roznica polega na sposobie inicjalizacji:
	// - pierwsze poprzez literał łańcuchowy
	// - drugie poprzez inicjalizacje zbiorczą
	// Pierwsza wersja niejawnie dodaje znak końca '\0' a w drugiej wersji
	// tego znaku brakuje. Dlatego przy próbie wyświetlania drugiej wersji dostajemy niepoprawny
	// ciąg znaków bo brakuje poprawnego zakonczenia.
}

void strTask2()
{
	int liczby[100];
	char znaki[100];
	// cin >> liczby;
	cin >> znaki;

	// ODPOWIEDZ:
	// Powyzszy kod jest niepoprawny bo w przypadku tablicy int[] wymagane jest wprowadzenie indeksu przy wywołaniu fukcji cin
	// W przypadku char[] jest to dopuszczalne takie wywolanie.
}

void strTask3()
{
	char tab[] = "wiosna";
	cout << "Lista elementow tablicy " << size(tab) << endl;
}

void strTask4()
{
	// ** CHAR **
	char userInput[100];
	cout << "Podaj dane wejsciowe: ";

	cin.getline(userInput, 100);
	cout << "Twoje dane wejsciowe: " << userInput << endl;

	char inputCopy[100] = "-";
	strcpy_s(inputCopy, userInput);
	cout << "Kopia danych: " << inputCopy << endl;

	char concatValue[100] = " postfix";
	strcat_s(inputCopy, concatValue);
	cout << "Laczenie danych: " << inputCopy << endl;

	cout << "Rozmiar: " << size(userInput) << endl;

	// ** STRING **
	string userInputString;
	
	cout << "Podaj dane wejsciowe: ", getline(cin, userInputString);
	cout << "Twoje dane wejsciowe: " << userInputString << endl;

	string inputCopyString = userInputString;
	cout << "Kopia danych: " << inputCopyString << endl;

	string concatValueString = " postfix";
	userInputString = userInputString + concatValueString;
	cout << "Laczenie danych: " << userInputString << endl;

	cout << "Rozmiar: " << size(userInputString) << endl;
}

void strTask5()
{
	string street, houseNo;
	int programmingSkill = 0, experience = 0;

	cout << "Podaj nazwe ulicy na ktorej mieszkasz : ", getline(cin, street);
	cout << "Podaj nr domu : ", getline(cin, houseNo);
	cout << "Na ile oceniasz swoje umiejetności programowania w skali[2 - 5] : ", cin >> programmingSkill;
	cout << "Twoj staz programistyczny : ", cin >> experience;
	
	programmingSkill = programmingSkill - 1;
	
	cout << "Adres : " << street << " " << houseNo << endl;
	cout << "Ocena : " << programmingSkill << endl;
	cout << "Staz : " << experience << " dni" << endl;
}

void strTask6()
{
	string inputText;
	cout << "Podaj tekst: ", getline(cin, inputText);
	cout << "Podano : " << inputText  << "--" << endl;

	int spolgloski = 0, samogloski = 0;

	for (int i = 0; i < size(inputText); i++)
	{
		char testedChar = inputText[i];
		int asciiNo = testedChar;

		if (
			(asciiNo >= 65 && asciiNo <= 90) // A-Z
			|| (asciiNo >= 97 && asciiNo <= 122) // a-z
			)
		{
			string samogloskiTest = "AEIOUYaeiouy";
			if (samogloskiTest.find(testedChar) < samogloskiTest.length())
			{
				// samogloska
				samogloski++;
			}
			else
			{
				// samogloska
				spolgloski++;
			}
		}
	}

	cout << "Liczba samoglosek : " << samogloski  << endl;
	cout << "Liczba spolglosek : " << spolgloski << endl;
}
