#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
#define length 100


////Сортировка выбором (Selection sort)
void selectionSort(int data[], int lenD);

//распечатка массива
void printMass(int data[], int lenD);

////Пузырьковая сортировка (Bubble sort)
//void bubbleSort(int data[], int lenD);

//Сортировка вставками(Insertion sort)
//void insertionSort(int data[], int lenD);

//Сортировка слиянием(Merge sort)
//void mergeSort(int data[], int lenD);

//Быстрая сортировка (Quick sort)
//void quickSort(int* data, int const len);



int main() {
	
	setlocale(LC_ALL, "rus");
	
	
	srand((int)time(NULL));
	cout << "Добро пожалость в программу сортивровки числел от 0 до 100." << endl;
	cout << endl;
	//cout << "d ghjv: " << endl;
	cout <<"выберете сортировку: "<<endl;
	cout <<"---------------------"<<endl;
	cout <<"| 1- Selection sort |"<<endl;
	cout <<"| 2- Bubble sort    |"<<endl;
	cout <<"| 3- Insertion sort |"<<endl;
	cout <<"| 4- Merge sort     |"<<endl;
	cout <<"| 5- Quick sort     |"<<endl;
	cout <<"| 0- exit           |"<<endl;
	cout <<"---------------------"<<endl;
	
	int arr[length];
	
	   int switchSelect,X,Y;
	cin >> switchSelect;
	

	switch (switchSelect)
		{
	case 0:cout << "goodbye \0" << endl; break;

	case 1: {cout << "You select:\n>> Selection sort <<" << endl;
		cout << "от : "; cin >> Y; 
		cout << endl;
		cout << "до : "; cin >> X;
		cout << endl;
		
		for (int i = 0; i < length; i++) {
			arr[i] = rand() % X+Y;
			
		}
		cout << "...незаполненный массив..." << endl;
		printMass(arr, length);
		cout << endl;
		cout << "сортировка...." << endl;
		selectionSort(arr, length);
		printMass(arr, length);
		cout << endl;
		cout << "....готов!" << endl;
		
		break; }

	/*case 2:  cout << "You select:\n >> Bubble sort <<" << endl; 
		cout << "indicate the number of rows" << endl;
		cin >> rows;
		cout << "indicate the number of columns" << endl;
		cin >> col;
		bubbleSort(&rows, col);

		break;

	case 3:  cout << "You select:\n >> Insertion sort <<" << endl; 
		cout << "indicate the number of rows" << endl;
		cin >> rows;
		cout << "indicate the number of columns" << endl;
		cin >> col;
		insertionSort(&rows, col);


		break;

	case 4:  cout << "You select:\n >> Merge sort <<" << endl; 
		cout << "indicate the number of rows" << endl;
		cin >> rows;
		cout << "indicate the number of columns" << endl;
		cin >> col;
		mergeSort(&rows, col);

		break;

	case 5:  cout << "You select:\n >> Quick sort <<" << endl; 
		cout << "specify the length of the array" << endl;
		cin >> rows;
		cout << "indicate the number of columns" << endl;
		cin >> col;
		quickSort(&rows, col);
*/
		break;

		default:cout << " incorrect : select #0-5 " << endl;
			break;
		}

	system("pause");
	return 0;
}
//распечатка заполненного массива
void printMass(int arr[], int lenD)
{
	for (int i = 0; i < lenD; i++)
		cout << arr[i] << " ";
}

/////Сортировка выбором (Selection sort)
void selectionSort(int arr[], int lenD)
{
	int min = 0;
	int tmp = 0;
	for (int i = 0; i < lenD; i++) {
		min = i;
		for (int k = i; k < lenD; k++) {
			if (arr[min] > arr[k]) {
				min = k;
			}
		}
		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
	//printMass(arr, lenD);
}
////Пузырьковая сортировка (Bubble sort)
//void bubbleSort(int data[], int lenD)
//{
//	int tmp = 0;
//	for (int i = 0; i < lenD; i++) {
//		for (int j = (lenD - 1); j >= (i + 1); j--) {
//			if (data[j] < data[j - 1]) {
//				tmp = data[j];
//				data[j] = data[j - 1];
//				data[j - 1] = tmp;
//			}
//		}
//	}
//}
////Сортировка вставками(Insertion sort)
//void insertionSort(int data[], int lenD)
//{
//	int key = 0;
//	int i = 0;
//	for (int j = 1; j < lenD; j++) {
//		key = data[j];
//		i = j - 1;
//		while (i >= 0 && data[i] > key) {
//			data[i + 1] = data[i];
//			i = i - 1;
//			data[i + 1] = key;
//		}
//	}
//}
////Сортировка слиянием(Merge sort)
//void mergeSort(int data[], int lenD)
//{
//	if (lenD > 1) {
//		int middle = lenD / 2;
//		int rem = lenD - middle;
//		int* L = new int[middle];
//		int* R = new int[rem];
//		for (int i = 0; i < lenD; i++) {
//			if (i < middle) {
//				L[i] = data[i];
//			}
//			else {
//				R[i - middle] = data[i];
//			}
//		}
//		mergeSort(L, middle);
//		mergeSort(R, rem);
//		merge(data, lenD, L, middle, R, rem);
//	}
//
//}
//
//void merge (int merged[], int lenD, int L[], int lenL, int R[], int lenR)
//{
//	int i = 0;
//	int j = 0;
//	while (i < lenL || j < lenR) {
//		if (i < lenL & j < lenR) {
//			if (L[i] <= R[j]) {
//				merged[i + j] = L[i];
//				i++;
//			}
//			else {
//				merged[i + j] = R[j];
//				j++;
//			}
//		}
//		else if (i < lenL) {
//			merged[i + j] = L[i];
//			i++;
//		}
//		else if (j < lenR) {
//			merged[i + j] = R[j];
//			j++;
//		}
//	}
//}
////Быстрая сортировка (Quick sort)
//void quickSort(int* data, int const len)
//{
//	int const lenD = len;
//	int pivot = 0;
//	int ind = lenD / 2;
//	int i, j = 0, k = 0;
//	if (lenD > 1) {
//		int* L = new int[lenD];
//		int* R = new int[lenD];
//		pivot = data[ind];
//		for (i = 0; i < lenD; i++) {
//			if (i != ind) {
//				if (data[i] < pivot) {
//					L[j] = data[i];
//					j++;
//				}
//				else {
//					R[k] = data[i];
//					k++;
//				}
//			}
//		}
//		quickSort(L, j);
//		quickSort(R, k);
//		for (int cnt = 0; cnt < lenD; cnt++) {
//			if (cnt < j) {
//				data[cnt] = L[cnt];;
//			}
//			else if (cnt == j) {
//				data[cnt] = pivot;
//			}
//			else {
//				data[cnt] = R[cnt - (j + 1)];
//			}
//		}
//	}
//}