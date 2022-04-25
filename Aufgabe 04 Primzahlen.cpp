// Aufgabe 04 Primzahlen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Ermitteln Sie die Primzahlen, bis zu einem über die Konsole eingebenen Maximalwert. 
// Geben Sie die gefundenen Primzahlen Zeilen-/Spaltenweise über die Konsole aus.
// Am Ende der Ausgabe geben Sie auch die Anzahl der gefunden Primzahlen an.

// Eine Primzahl ist eine natürliche Zahl mit genau zwei natürlichen Zahlen als Teiler, 
// nämlich der Zahl 1 und sich selbst. 
// Die kleinsten Primzahlen sind 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, ...

#include <iostream>

using namespace std;

bool istPrimzahl(int);

void main()
{
    locale::global(locale("German_germany"));

    int maximalwert, anzahlWerte = 0;

    cout << endl << "Geben Sie den Maximalwert ein: ";
    cin >> maximalwert;

    cout << endl << "Die Primzahlen sind: " << endl << endl;

    for (int i = 2; i <= maximalwert; i++)
    {
        if (istPrimzahl(i))
        {
            anzahlWerte++;

            printf("%10d", i);

            if (anzahlWerte % 5 == 0)
                cout << endl;
        }
    }

    cout << endl << endl << "Die Anzahl der Primzahlen ist: " << anzahlWerte << endl;
}

bool istPrimzahl(int zahl)
{
    if (zahl > 1)
    {
        for (int i = 2; i <= zahl / 2; i++)
        {
            if (zahl % i == 0) 
                return false;
        }

        return true;
    }
    else return false;
}
