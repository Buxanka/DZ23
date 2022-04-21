#include <iostream>
using namespace std;

//Задача 1
void threeMax(int &refA, int &refB, int &refC) {
	if (refA > refB && refA > refC) {
		refB = refA;
		refC = refA;
	}
	if (refB > refA && refB > refC) {
		refA = refB;
		refC = refB;
	}
	else {
		refA = refC;
		refB = refC;
	}
}

//Задача 2
template <typename T> T funcNegative(T arr[], int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			cout << "Первый отрицательный элемент в массиве: ";
			return arr[i];
		}
	}
	cout << "Отрицательных элементов нет, первый элемент массива: ";
	return arr[0];
}

//Задача 3
template <typename T> void funcZero(T arr1[], int length1, T arr2[], int length2) {
	for (int i = 0; i < length1; i++)
		for (int j = 0; j < length2; j++)
			if (*(arr2 + j) == *(arr1 + i))
				*(arr2 + j) = 0;
}

//Вывод массива
template <typename T> void showArray(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

int main(void) {
	setlocale(LC_ALL, "Russian");
	
	//Задача 1
	int A = 4, B = 3, C = 9;
	threeMax(A, B, C);
	cout << A << " " << B << " " << C << endl;
	cout << "=====================================" << endl;

	//Задача 2
	int mas[5] = { 2, 6, -3, -6, 2 };
	cout << funcNegative(mas, 5) << endl;
	cout << "=====================================" << endl;

	//Задача 3
	int arr1[5] = { 1, 3, 3, 6, 8 };
	int arr2[4] = { 3, 5, 7, 8 };
	cout << "Первый массив: ";
	showArray(arr1, 5);
	cout << "Второй массив: ";
	showArray(arr2, 4);
	funcZero(arr1, 5, arr2, 4);
	cout << "Итоговый второй массив: " << endl;
	showArray(arr2, 4);





	return 0;
}

