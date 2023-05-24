//Підключаємо бібліотеку iostream

#include <iostream>

#include <cmath>

#include <fstream>

#include <string>

//Використовуємо простор імен STD, щоб зручніше було вкористовувати cout cin та інші функції які належать до цього простору

using namespace std;



const float pi = 3.14;



void firstTask();

void secondTask();

void thirdTask();

//v 87 15 10



struct TTime {

	int Hour;

	int Min;

	int Sec;



	int ToAbs() {

		if (Hour < 0 || Hour>24) {

			return -1;

		}

		if (Min < 0 || Min>60) {

			return -1;

		}

		if (Sec < 0 || Sec>60) {

			return -1;

		}



		return ((Hour*60*60)+(Min*60)+Sec);



	}

};



struct Sircle {

	float S;

	float D;

	float L;



	void findParametrsInSircle() {

			D = sqrt(S*4/pi);

			L = D * pi;

	}



	void inputS() {

		bool isNegative=true;

		while (isNegative) {

			cout << "Input sircle S: ";

			cin >> S;

			if (S > 0) {

				isNegative = false;

			}

			else {

				cout << "Wrong S, try one more\n";

			}

		}

	}

};



struct Choiser {

	int A;

	int B;

	bool isTrue;



	void check() {

		if ((A % 2 == 0) && (B % 2 != 0))

		{

			isTrue = true;

		}

		else if ((A % 2 != 0) && (B % 2 == 0)) {

			isTrue = true;

		}

		else {

			isTrue = false;

		}

	}



	void inputData() {

		cout << "Input A and B: ";

		cin >> A >> B;

	}



};



int main() {

	//зміна мови виводу для того, щоб була доступна потрібна мова

	setlocale(LC_ALL, "rus");

	//ініціалізація номера завдання




	bool isExecute = true;

	while(isExecute){

		int taskNumber;

		cout << "Input task number(1-3) for exit input 0: ";

		cin >> taskNumber;

	switch (taskNumber)

	{

	case(0): isExecute = false; break;

	case(1): firstTask(); break;

	case(2): secondTask(); break;

	case(3): thirdTask(); break;

	default:

		cout << "Wrong input, try one more time\n";

		break;

	}

	}

	return 0;

}



void firstTask() {

	TTime time;


	cout << "Input Your Time:\n";


	cout << "Input hour: ";

	cin >> time.Hour;



	cout << "Input minutes: ";

	cin >> time.Min;



	cout << "Input seconds: ";

	cin >> time.Sec;



	int secondAfterDayStart = time.ToAbs();

	if(secondAfterDayStart != -1){



		cout << "Seconds after day start is:" << secondAfterDayStart << "\n";

	}

	else {

		cout << "Your input is incorect\n";

	}

}



void secondTask() {



	Sircle sircle;

	sircle.inputS();

	sircle.findParametrsInSircle();



	cout << "D is : " << sircle.D << "\nL is: " << sircle.L << "\n";



}



void thirdTask() {

	Choiser choiser;

	choiser.inputData();

	choiser.check();



	if (choiser.isTrue) {

		cout << "Our statement is true\n";

	}

	else {

		cout << "Our statement is false\n";

	}

}