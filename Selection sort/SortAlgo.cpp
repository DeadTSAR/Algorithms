#include <iostream>
#include "SortAlgo.h"
#include <ctime>

void sortMenu(int switchSelect)
{
	srand((int)time(NULL));

	int X, Y;
	int arr[length];
	switch (switchSelect)
	{
	case 0:std::cout << "goodbye \0" << std::endl; break;

	case 1:
		std::cout << "You select:\n>> Selection sort <<" << std::endl;
		std::cout << "choise number " << std::endl;
		std::cout << "от : "; std::cin >> Y;
		std::cout << std::endl;
		std::cout << "до : "; std::cin >> X;
		std::cout << std::endl;

		for (int i = 0; i < length; i++) {
			arr[i] = rand() % X + Y;
		}

		std::cout << "...создаем массив заполненный случайными числами..." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "сортировка...." << std::endl;

		selectionSort(arr, length);
		std::cout << "сортировка завершена...." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "....готов!  выход (ноль или любая буква)...спасибо что выбрали нашу сортировку!" << std::endl;
		reStart();
		std::cin >> switchSelect;
		sortMenu(switchSelect);
		break;

	case 2:
		std::cout << "You select:\n>> Bubble sort <<" << std::endl;
		std::cout << "choise number " << std::endl;
		std::cout << "от : "; std::cin >> Y;
		std::cout << std::endl;
		std::cout << "до : "; std::cin >> X;
		std::cout << std::endl;

		for (int i = 0; i < length; i++) {
			arr[i] = rand() % X + Y;
		}

		std::cout << "...создаем массив заполненный случайными числами..." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "сортировка...." << std::endl;

		bubbleSort(arr, length);
		std::cout << "сортировка завершена...." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "....готов!  выход (ноль или любая буква)...спасибо что выбрали нашу сортировку!" << std::endl;
		reStart();
		std::cin >> switchSelect;
		sortMenu(switchSelect);
		break;

	case 3: std::cout << "You select:\n>> insertion Sort <<" << std::endl;
		std::cout << "choise number " << std::endl;
		std::cout << "от : "; std::cin >> Y;
		std::cout << std::endl;
		std::cout << "до : "; std::cin >> X;
		std::cout << std::endl;

		for (int i = 0; i < length; i++) {
			arr[i] = rand() % X + Y;
		}

		std::cout << "...создаем массив заполненный случайными числами..." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "сортировка...." << std::endl;

		insertionSort(arr, length);
		std::cout << "сортировка завершена...." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "....готов!  выход (ноль или любая буква)...спасибо что выбрали нашу сортировку!" << std::endl;
		reStart();
		std::cin >> switchSelect;
		sortMenu(switchSelect);
		break;

	case 4: std::cout << "You select:\n>> merge Sort <<" << std::endl;
		std::cout << "choise number " << std::endl;
		std::cout << "от : "; std::cin >> Y;
		std::cout << std::endl;
		std::cout << "до : "; std::cin >> X;
		std::cout << std::endl;

		for (int i = 0; i < length; i++) {
			arr[i] = rand() % X + Y;
		}

		std::cout << "...создаем массив заполненный случайными числами..." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "сортировка...." << std::endl;

		mergeSort(arr, length);
		std::cout << "сортировка завершена...." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "....готов!  выход (ноль или любая буква)...спасибо что выбрали нашу сортировку!" << std::endl;
		reStart();
		std::cin >> switchSelect;
		sortMenu(switchSelect);
		break;

	case 5:  std::cout << "You select:\n>> quick Sort <<" << std::endl;
		std::cout << "choise number " << std::endl;
		std::cout << "от : "; std::cin >> Y;
		std::cout << std::endl;
		std::cout << "до : "; std::cin >> X;
		std::cout << std::endl;

		for (int i = 0; i < length; i++) {
			arr[i] = rand() % X + Y;
		}

		std::cout << "...создаем массив заполненный случайными числами..." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "сортировка...." << std::endl;

		quickSort(arr, length);
		std::cout << "сортировка завершена...." << std::endl;
		printMass(arr, length);

		std::cout << std::endl;
		std::cout << "....готов!  выход (ноль или любая буква)...спасибо что выбрали нашу сортировку!" << std::endl;
		reStart();
		std::cin >> switchSelect;
		sortMenu(switchSelect);
		break;

	default:std::cout << " incorrect :please select #0-5 " << std::endl;
		std::cin >> switchSelect;
		sortMenu(switchSelect);
		break;
	}


}

//start Programm
void reStart() {

	std::cout << std::endl;
	std::cout << "  выберете сортировку: " << std::endl;
	std::cout << "  ---------------------" << std::endl;
	std::cout << "  | 1- Selection sort |" << std::endl;
	std::cout << "  | 2- Bubble sort    |" << std::endl;
	std::cout << "  | 3- Insertion sort |" << std::endl;
	std::cout << "  | 4- Merge sort     |" << std::endl;
	std::cout << "  | 5- Quick sort     |" << std::endl;
	std::cout << "  | for EXIT any char |" << std::endl;
	std::cout << "  ---------------------" << std::endl;
};

//распечатка заполненного массива
void printMass(int arr[], int lenD)
{
	for (int i = 0; i < lenD; i++)
		std::cout << arr[i] << " ";
}

/////Сортировка выбором (Selection sort)
void selectionSort(int arr[], int lenD)
{
	int min = 0;
	int tmp = 0;
	int count;
	for (int i = 0; i < lenD; i++) {
		min = i;
		count = i;
		std::cout << " # " << ++count << " = " ;
		for (int k = i; k < lenD; k++) {
			if (arr[min] > arr[k]) {
				min = k;
			}
		}
		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
		std::cout << " [ " << arr[min] << " ] " << std::endl;
	} std::cout << std::endl;
	
}

//пузырьковая сортировка (bubble sort)
void bubbleSort(int arr[], int lenD)
{
	int tmp = 0;
	for (int i = 0; i < lenD; i++) {
		for (int j = (lenD - 1); j >= (i + 1); j--)
		{
			if (arr[j] < arr[j - 1])
			{
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				std::cout << " " << arr[j] << "\t" ;
			}
		}std::cout << "\n";
	}
}

//Сортировка вставками(Insertion sort)
void insertionSort(int arr[], int lenD)
{
	int key = 0;
	int i = 0;
	for (int j = 1; j < lenD; j++) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i = i - 1;
			arr[i + 1] = key;
			
		}
	}
}

//Сортировка слиянием(Merge sort)
void mergeSort(int arr[], int lenD)
{
	if (lenD > 1) {
		int middle = lenD / 2;
		int rem = lenD - middle;
		int* L = new int[middle];
		int* R = new int[rem];
		for (int i = 0; i < lenD; i++) {
			if (i < middle) {
				L[i] = arr[i];
			}
			else {
				R[i - middle] = arr[i];
			}
		}
		mergeSort(L, middle);
		mergeSort(R, rem);
		merge(arr, lenD, L, middle, R, rem);
	}

}
void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR)
{
	int i = 0;
	int j = 0;
	while (i < lenL || j < lenR) {
		if (i < lenL & j < lenR) {
			if (L[i] <= R[j]) {
				merged[i + j] = L[i];
				i++;
			}
			else {
				merged[i + j] = R[j];
				j++;
			}
		}
		else if (i < lenL) {
			merged[i + j] = L[i];
			i++;
		}
		else if (j < lenR) {
			merged[i + j] = R[j];
			j++;
		}
	}
}

//Быстрая сортировка (Quick sort)
void quickSort(int* arr, int const len)
{
	int const lenD = len;
	int pivot = 0;
	int ind = lenD / 2;
	int i, j = 0, k = 0;
	if (lenD > 1)
	{
		int* L = new int[lenD];
		int* R = new int[lenD];
		pivot = arr[ind];
		for (i = 0; i < lenD; i++)
		{
			if (i != ind)
			{
				if (arr[i] < pivot)
				{
					L[j] = arr[i];
					j++;
				}
				else
				{
					R[k] = arr[i];
					k++;
				}
			}
		}
		quickSort(L, j);
		quickSort(R, k);
		for (int cnt = 0; cnt < lenD; cnt++) {
			if (cnt < j) {
				arr[cnt] = L[cnt];;
			}
			else if (cnt == j) {
				arr[cnt] = pivot;
			}
			else {
				arr[cnt] = R[cnt - (j + 1)];
			}
		}
	}
}