#define length 10
//// add dinamic array
//int randomArray(int* arr, int lenD);

//start and continue 
void reStart();

//���������� ������� (Selection sort)
void selectionSort(int data[], int lenD);

//���������� �������
void printMass(int data[], int lenD);

//����������� ���������� (Bubble sort)
void bubbleSort(int data[], int lenD);

//���������� ���������(Insertion sort)
void insertionSort(int data[], int lenD);

//���������� ��������(Merge sort)
void mergeSort(int data[], int lenD);
void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR);

//������� ���������� (Quick sort)
void quickSort(int* data, int const len);

//sort menu Algorithms
void sortMenu(int switchSelect);
