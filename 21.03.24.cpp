#include <iostream>
using namespace std;

//void showLine(int n) {
	/*for (int i = 0; i < 20; i++) {
		cout << "/";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << "-";
	}
	cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << "-";
	}
	cout << "task";
	for (int i = 0; i < 9; i++) {
		cout << "-";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << "-";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << "/";
	}*/

//void showNumb(int n) {
//	if (n < 0) {
//		for (int i = 0; i <= n; i++) {
//			cout << i << " ";
//		}
//	}
//	else {
//		for (int i = 0; i <= n; i++) {
//			cout << i << " ";
//		}
//	}
//}
//
//void showRectagle(int n,int k) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < k; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//}
//
//
//void showFact(int x) {
//	int numb = 1;
//	for (int i = 1; i <= x; i++) {
//		numb *= i;
//	}
//	cout << numb;
//}
//
//void showSimlpe(int a) {
//	int flag = false;
//	for (int i = 2; i <= a; i++) {
//		if (a % i == 0) {
//			flag = true;
//		}
//	}
//	if (flag = true)cout << "Simple count";
//	else cout << "unsimple count";
//}
//
//int simple(int a) {
//	for (int i = 2; i <= a; i++) {
//		if (a % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int plus(int a) {
//	for (int i = 0; i <= a; i++) {
//		if (a < 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void mySwap(int &a, int &b) {
//	a = a = b;
//	b = a - b;
//	a = a - b;
//}
//
//void mySwap(char& a, char& b) {
//	a = a = b;
//	b = a - b;
//	a = a - b;
//}
//
//void mySwap(float& a, float& b) {
//	a = a = b;
//	b = a - b;
//	a = a - b;
//}

void cross(int n) {
	for (int i = 0; i < n; i++) {
		for (int i1 = n - i; i1 < n; i1++) {
			cout << " ";
		}
		for (int i1 = 0; i1 < n - i
			; i1++) {
			cout << "*";
		}
		cout << endl;
	}
}

//void showMax(int n1,int n2,int n3,int n4,int n5) {
//	int max = 0;
//	if (n1 > max) max = n1;
//	if (n2 > max) max = n2;
//	if (n3 > max) max = n3;
//	if (n4 > max) max = n4;
//	if (n5 > max) max = n5;
//	cout << max;
//}
//
//int kub(int a) {
//	return (a * a);
//}
//
//int max(int n1, int n2) {
//	return((n1 > n2) ? n1 : n2);
//}

int main()
{
	cross(6);

	/*cout << kub(5);*/

	/*float a = 2.8;
	float b = 3.6;
	cout << a << " " << b << endl;
	mySwap(a, b);
	cout << a << " " << b << endl;*/

	/*showFact(5);
	cout << endl;
	showRectagle(10, 20);
	cout << endl;
	showSimlpe(7);
	cout << endl;
	showMax(1, 2, 3, 4, 5);*/
	
	/*cout << simple(5);*/

	/*const int SIZE = 20;

	showLine(1);
	int a;
	cout << endl << "put number: ";
	cin >> a;
	showLine(2);
	cout << endl;
	cout << "task2" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << a << " ";
	}
	cout << endl;
	showLine(3);
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << i << " ";
	}*/


}