#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout << "Робота з файлами\n";
	//ЗАПИС
	/*ofstream file("1.txt");
	cout << "Ввведіть будь-який текст. Щоб зупинитися введіть '*'\n" << endl;
	char txt[20];
	int row = 0;
	do {
		cout << row << ") " << endl;
		cin.getline(txt, 20);
		if (txt[0] != '*') break;
		file << txt << endl;
		row++;
	} while (txt[0] != '*');
	file.close();
	cout << "Процес завершився! Дані збережені у файл." << endl;*/

	//ЗЧИТУВАННЯ
	/*ifstream file("1.txt");
	if (!file) {
		cout << "Файл не існує!" << endl;
		return 1;
	}
	char txt[20];
	int row = 1;
	do {
		file.getline(txt, 20);
		cout << row << ") " << txt << endl;
		row++;
	} while (file);*/







	return 0;
}