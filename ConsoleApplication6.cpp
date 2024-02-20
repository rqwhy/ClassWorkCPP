using namespace std;
#include <iostream>

int main()
{ 
	/*char action;
	cout << "Input action: ";
	cin >> action;
	double num1, num2;
	cout << "Input numbers: ";
	cin >> num1 >> num2;

	switch (action) {
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;
	case '-':
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;
	case '*':
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
	case '/':
		if (num1 == 0) {
			cout << "0 no div";
		}
		else {
			cout << num1 << "/" << num2 << "=" << num1 / num2;
		}
		break;
	default:
		cout << "unexpendet operation";
		break;
	}*/

	/*switch (numb){
	case 1:
	case 2:
	case 12:
		cout << "winter";
		break;
	case 3:
	case 4:
	case 5:
		cout << "sping";
		break;
	case 6:
	case 7:
	case 8:
		cout << "summer";
		break;
	case 9:
	case 10:
	case 11:
		cout << "autum";
		break;
	}*/

	int num;
	cout << "Input number ";
	cin >> num;
	int diap1, diap2;
	cout << "Input first diapazon ";
	cin >> diap1 >> diap2;
	int diap3, diap4;
	cout << "Input second diapazon ";
	cin >> diap3 >> diap4;
	cout << ((num % 2 == 0)? "even ":"odd ");
	cout <<( (num >= 10 && num <= 20) ? "have 10 to 20 diapazon " : "haven`t 10 to 20 diapazon");
	if ((num >= diap1 && num <= diap2) && (num >= diap3 && num <= diap4)) cout << "number have to 2 diapazon";
	else if ((num >= diap1 && num <= diap2) || (num >= diap3 && num <= diap4)) cout << "number have to 1 diapazon";
	else cout << "number have to 0 diapazon";
}