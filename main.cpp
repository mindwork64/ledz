#include <iostream>
#include <cmath>

using namespace std;

int main(void)
	{
		float uSrc; // Напряжение источника питания
		int iLed; // Ток диода
		float uLed; // Прямое напряжение диода
				
		cout << "Напряжение источника: ";
		cin >> uSrc;
		cout << "Напряжение диода: ";
		cin >> uLed;
		if ((float)uLed > (float)uSrc)
		{
			cout << "Напряжение диода не может быть выше напряжения источника!" << endl;
			return (1);
		}
		cout << "Ток диода: ";
		cin >> iLed;
				
		float fResLed = (uSrc - uLed) / ((float)iLed / 1000);
		float fResWatt = (pow(iLed, 2) * fResLed) / 10000;
				
		cout << "Вычисленное сопротивление резистора: " << "\x1b[32m" << fResLed << "\x1b[37mОм" << endl;
		cout << "Вычисленная мощность резистора: " << "\x1b[32m" << fResWatt << "\x1b[37mмВт" << endl;
		return (0);
	}
