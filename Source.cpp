#include <iostream>
#include <Windows.h>
using namespace std;
void zadanie1()

{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
		double distance, time, speed;

		cout << "растояние";
		cin >> distance;
	
		
			cout << "время";
			cin >> time;
		
		speed = distance / time;

		cout << "скорость = " << speed << endl;
		
	
}
 
void zadanie2()
{
	int starth, startm, starts;
	int endh, endm, ends;
	cout << "начало (ч,м,с)";
	cin >> starth >> startm >> starts;
	cout << "конец (ч,м,с)";
	cin >> endh >> endm >> ends;

	int start = starth * 3600 + startm * 60 + starts;
	int end = endh * 3600 + endm * 60 + ends;

	int minutes = (end - start) / 60;
	int cost = minutes * 2;
	cout << "стоимость" << cost << "грн" << endl;
}

void zadanie3()
{
	double distance, rashod;
	double price1, price2;
	double liter;

	cout << "растояние";
	cin >> distance;

	cout << "расход";
	cin >> rashod;

	cout << "1. цена";
	cin >> price1;

	cout << "2. цена";
	cin >> price2;

	liter = distance * rashod / 100;

	cout << "итого" "\n";
	cout << "1. бенз" << liter * price1 << endl;
	cout << "2. бенз" << liter * price2 << endl;

}




int main()

{
	zadanie1();
	zadanie2();
	zadanie3();

	return 0;





	}