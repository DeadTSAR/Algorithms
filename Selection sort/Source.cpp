#include <iostream>
#include <algorithm>
#include <ctime>
#include "SortAlgo.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	cout << "Добро пожалость в программу сортивровки числел. " << endl;

	reStart();
				
	int switchSelect;
	cin >> switchSelect;
   sortMenu(switchSelect);
	
	system("pause");
	return 0;
}
