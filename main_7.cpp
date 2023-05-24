//Підключаємо бібліотеку iostream
#include <iostream>
#include <cmath>
//Використовуємо простор імен STD, щоб зручніше було вкористовувати cout cin та інші функції які належать до цього простору
using namespace std;
//Функції завдань
void firstTask();
void secondTask();

void arrayInput(double **arr, int m, int n);
void arrayOutput(double **arr, int m, int n);

void minInRow(double **arr, int m, int n);
void zeroReducing(double** arr, int n);
//v 23 76
//головна функція 
int main() {
	//зміна мови виводу для того, щоб була доступна потрібна мова
	setlocale(LC_ALL, "rus");
	//ініціалізація номера завдання
	int task=0;
	//Виведення напису та введеня нмера завдання
	cout << "Введіть будь ласка номер завдання 1 - 2(Якщо бажаєте вийти натисніть 0): \n";
	cin>>task;
	if (task < 1 || task >2) {
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
	default: cout << "Вибачте ваш вибір невірний, повторіть спробу знову\n";
	}
	cout << "Введіть будь ласка номер завдання 1 - 2(Якщо бажаєте вийти натисніть 0):\n ";
	cin >> task;
	}
	return 0;
}

void firstTask() {
	int m, n; 

	cout << "Input m, n\n";
	cin >> m >> n;
	double** arr = new double* [m];
	for (int i = 0; i < n; i++) {
		arr[i] = new double[n];
	}
	
	arrayInput(arr, m, n);
	minInRow(arr, m, n);

}

void secondTask() {
	int n;

	cout << "Input n\n";
	cin >> n;

	double** arr = new double* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new double[n];
	}
	arrayInput(arr, n, n);
	zeroReducing(arr, n);
	arrayOutput(arr, n, n);



}

void arrayInput(double **arr, int m, int n) {
	cout << "input array\n"<<m<<" "<<n<<"\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
}

void arrayOutput(double **arr, int m, int n) {
	cout << "Output array\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void minInRow(double **arr, int m, int n) {
	for (int i = 0; i < m; i++) {
		double min = arr[i][0];
		for (int j = 1; j < n; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
		cout << "Min in row " << i + 1 <<": " << min << "\n";
	}
}

void zeroReducing(double **arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			arr[i][j] = 0;
		}
	}
}