//Підключаємо бібліотеку iostream
#include <iostream>
#include <cmath>
#include <fstream>
//Використовуємо простор імен STD, щоб зручніше було вкористовувати cout cin та інші функції які належать до цього простору
using namespace std;
//Функції завдань
void firstTask();
void secondTask();
void thirdTask();

double* readFile(int& numberOfElements);
double** readFile(int& numberOfElementsRow, int& numberOfElementColumn);

void writeFile(double* arr, int& numberOfElements);
void writeFileEnd(double* arr, int& numberOfElementsRow);

void multiply(double* arr, int n);
double* minInRow(double** arr, int m, int n);
void pastSorting(double* arr, int n);

void arrayOutput(double *arr, int n);

//v 23 76
//головна функція 
int main() {
	//зміна мови виводу для того, щоб була доступна потрібна мова
	setlocale(LC_ALL, "rus");
	//ініціалізація номера завдання
	int task=0;
	//Виведення напису та введеня нмера завдання
	cout << "Введіть будь ласка номер завдання 1 - 3(Якщо бажаєте вийти натисніть 0): \n";
	cin>>task;
	if (task < 1 || task >3) {
		task = 0;
	}
	//Консрукція розгалудження для вибору завдання
	while(task){
	switch (task) {
//використовування першої функції
	case 1: firstTask(); break;
		//використовування другої функції
	case 2: secondTask(); break;
		//використовування другої функції
	case 3: thirdTask(); break;
		//використання третьої функції
	default: cout << "Вибачте ваш вибір невірний, повторіть спробу знову\n";
	}
	cout << "Введіть будь ласка номер завдання 1 - 3(Якщо бажаєте вийти натисніть 0):\n ";
	cin >> task;
	}
	return 0;
}

void firstTask() {
	
	int numberOfElements;
	double* arr = readFile(numberOfElements);
	if(arr){
		multiply(arr, numberOfElements);
		writeFile(arr, numberOfElements);
	}

}

void secondTask() {
	
	int numberOfElementsRow, numberOfElementsColumn;
	double** arr = readFile(numberOfElementsRow, numberOfElementsColumn);
	
	if (arr) {
		double* minArr = minInRow(arr, numberOfElementsRow, numberOfElementsColumn);
		writeFileEnd(minArr, numberOfElementsRow);
	}

}

void thirdTask() {
	int numberOfElements;
	double* arr = readFile(numberOfElements);

	if (arr) {
		pastSorting(arr, numberOfElements);
		arrayOutput(arr, numberOfElements);
	}
}

void arrayOutput(double *arr, int n) {
	cout << "Output array\n";
	for (int i = 0; i < n; i++) {
			cout << arr[i]<< " ";
	}
	cout << "\n";
}


double* readFile(int& numberOfElements) {
	string fileName;
	cin >> fileName;
	
	

	fstream in(fileName);
	if (in.is_open()) {
		in >> numberOfElements;

		double* arr = new double[numberOfElements];

		for (int i = 0; i < numberOfElements; i++) {
			in >> arr[i];
		}

		in.close();
		return arr;
	}
	else {
		cout << "file doesn`t exist or wrong file name\n";
	
		in.close();
		return NULL;
	}
	
}
double** readFile(int& numberOfElementsRow, int& numberOfElementColumn) {
	string fileName;
	cin >> fileName;



	fstream in(fileName);
	if (in.is_open()) {
		in >> numberOfElementsRow >> numberOfElementColumn;

		double** arr = new double*[numberOfElementsRow];

		for (int i = 0; i < numberOfElementsRow; i++) {
			arr[i] = new double[numberOfElementColumn];
		}

		for (int i = 0; i < numberOfElementsRow; i++) {
			for (int j = 0; j < numberOfElementColumn; j++) {
				in >> arr[i][j];
			}
		}

		in.close();
		return arr;
	}
	else {
		cout << "file doesn`t exist or wrong file name\n";

		in.close();
		return NULL;
	}

}

void multiply(double* arr, int n) {
	for (int i = 0; i < n; i += 2) {
		arr[i] *= 3;
	}
}

void writeFile(double* arr, int& numberOfElements) {
	ofstream out("array_out_107.txt");
	if (out.is_open()) {
		out << numberOfElements << "\n";
		for (int i = 0; i < numberOfElements; i++) {
			out << arr[i] << " ";
		}
	}
	else {
		cout << "File douwsnt exist or wrong file name\n";
	}
}
void writeFileEnd(double* arr, int& numberOfElementsRow) {
	ofstream out("matr_in_107.txt", ios::app);
	if (out.is_open()) {
		out << "\nMin elements in each row\n";
		for (int i = 0; i < numberOfElementsRow; i++){
			out << arr[i] << " ";
		}
	}
	else {
		cout << "File douwsnt exist or wrong file name\n";
	}
}

double* minInRow(double** arr, int m, int n) {
	double* minArr = new double[m];

	for (int i = 0; i < m; i++) {
		double min = arr[i][0];
		for (int j = 1; j < n; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
		minArr[i] = min;
	}

	return minArr;
}

void pastSorting(double* arr, int n) {
	double current;
	
	for (int i = 1; i < n; i++)
	{
		current = arr[i]; 

		for (int j = i - 1; j >= 0 && arr[j] > current; j--){
			arr[j + 1] = arr[j];
			arr[j] = current; 
		}
	}
}