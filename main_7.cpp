//ϳ�������� �������� iostream
#include <iostream>
#include <cmath>
//������������� ������� ���� STD, ��� ������� ���� �������������� cout cin �� ���� ������� �� �������� �� ����� ��������
using namespace std;
//������� �������
void firstTask();
void secondTask();

void arrayInput(double **arr, int m, int n);
void arrayOutput(double **arr, int m, int n);

void minInRow(double **arr, int m, int n);
void zeroReducing(double** arr, int n);
//v 23 76
//������� ������� 
int main() {
	//���� ���� ������ ��� ����, ��� ���� �������� ������� ����
	setlocale(LC_ALL, "rus");
	//����������� ������ ��������
	int task=0;
	//��������� ������ �� ������� ����� ��������
	cout << "������ ���� ����� ����� �������� 1 - 2(���� ������ ����� �������� 0): \n";
	cin>>task;
	if (task < 1 || task >2) {
		task = 0;
	}
	//���������� ������������� ��� ������ ��������
	while(task){
	switch (task) {
//���������������� ����� �������
	case 1: firstTask(); break;
		//���������������� ����� �������
	case 2: secondTask(); break;
		//���������������� ����� �������
	default: cout << "������� ��� ���� �������, �������� ������ �����\n";
	}
	cout << "������ ���� ����� ����� �������� 1 - 2(���� ������ ����� �������� 0):\n ";
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