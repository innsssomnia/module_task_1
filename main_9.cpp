//Підключаємо бібліотеку iostream
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
//Використовуємо простор імен STD, щоб зручніше було вкористовувати cout cin та інші функції які належать до цього простору
using namespace std;

size_t findLastOf(const char* s, size_t pos, size_t n, const char* f);

void readFile(string* str, int n);

void writeFile(int str);

int finderInnerString(string str1, string str2);
bool isValid(string str);
//v 38 32

int main() {
	//зміна мови виводу для того, щоб була доступна потрібна мова
	setlocale(LC_ALL, "rus");
	//ініціалізація номера завдання
	size_t pos = 0, n = 1;
	cout << "Введіть строку в якій буде шукатись останнє входження символа \'t\'\n";
	char* strChar = new char;
	cin >> strChar;
	string strString = strChar;
	
	const char* findstr = "t";
	
	size_t pointerChar = findLastOf(strChar, pos, n, findstr);
	size_t pointerString = strString.find_last_of(findstr, strString.length(), n);

	cout <<"Результат власної функції: " << pointerChar << "\n";
	cout <<"Результат Функції в string: " << pointerString << "\n";
	
	int lstr = 10;
	string* task2 = new string[lstr];


	readFile(task2, n);
	for (int i = 1; i < lstr; i++) {
		if (isValid(task2[i]) && isValid(task2[i - 1])) {
			writeFile(finderInnerString(task2[i - 1], task2[i]));

		}
	}
	
	return 0;
}



void readFile(string* str, int n) {
	string fileName;
	cin >> fileName;
	
	

	fstream in(fileName);
	if (in.is_open()) {
		int iterator = 0;
		string line;
		while (getline(in, line)) {
			str[iterator] = line;
			iterator++;
		}
		
	}
	else {
		cout << "file doesn`t exist or wrong file name\n";
	
		in.close();
	}
	
}

void writeFile(int str) {
	ofstream out("str.txt", ios::app);
	if (out.is_open()) {
			out << "Count inner string in str1: " << str << "\n";
	}
	else {
		cout << "File douwsnt exist or wrong file name\n";
	}
}

size_t findLastOf(const char* s, size_t pos, size_t n, const char* f) {
	size_t pointer = -1;
	if (pos == 0) {
		size_t length = 0;
		for (int i = 0; s[i] != '\0'; i++) {
			length++;
		}
		pos = length;
	}
	
	for (int i = 0; (s[i] != '\0') && (i<pos); i++) {
		for (int j = 0; f[j]!='\0'; j++) {
			if (s[i] == f[j]) {
				pointer = i;	
			}
		}
	}
	return pointer;
}
int finderInnerString(string str1, string str2) {
	int res = 0;
	string::size_type pos = 0;
	while ((pos = str1.find(str2, pos)) != string::npos)
	{
		pos += str2.size();
		++res;
	}

	return res;
	
	return 0;
}

bool isValid(string str) {
	
	if (str.length()) {
		return true;
	}
	else {
		return false;
	}
}