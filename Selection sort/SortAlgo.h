#define length 10
//// add dinamic array
//int randomArray(int* arr, int lenD);

//start and continue 
void reStart();

//Сортировка выбором (Selection sort)
void selectionSort(int data[], int lenD);

//распечатка массива
void printMass(int data[], int lenD);

//Пузырьковая сортировка (Bubble sort)
void bubbleSort(int data[], int lenD);

//Сортировка вставками(Insertion sort)
void insertionSort(int data[], int lenD);

//Сортировка слиянием(Merge sort)
void mergeSort(int data[], int lenD);
void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR);

//Быстрая сортировка (Quick sort)
void quickSort(int* data, int const len);

//sort menu Algorithms
void sortMenu(int switchSelect);
