#include <iostream>
using namespace std;

int main()
{
	/*srand(time(NULL));
	const int size1 = 10;
	const int size2 = 2;
	int summa = 0,summa2=0,maxIn=0, maxPr = 0, maxSum = 0;
	int array[size1][size2];
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			array[i][j] = 2 + rand() % 4;
			cout << array[i][j] << " ";
			summa += array[i][j];
			maxPr += array[i][j];
		}
		if (maxPr < maxSum / size2) {
			maxPr = maxSum / size2;
			maxIn = i;
			cout << maxIn;
		}
		cout << endl;
	}
	cout << endl;
	cout << summa << " ";
	cout << summa / (size1 * size2) << endl;*/

	srand(time(NULL));
	const int size1 = 4;
	const int size2 = 4;
	float summa=0,summa2=0;
	int array[size1][size2];
	int bestSt=0,loser=0,bestI=0,loserI=0;
	cout << "    eng |  lit |  rus |  math|" << endl;
	for (int i = 0; i < size1; i++) {
		cout << "st" << i + 1;
		for (int j = 0; j < size2; j++) {
			array[i][j] = 2 + rand() % 4;
			summa += array[i][j];
			cout<< "  " << array[i][j] << " " << " | ";
		}
		cout << summa / 4 << endl;
		summa = 0;
		cout << endl;
		if (summa < bestSt) {
			summa = bestSt;
			bestI = i;
		}
		if (summa > loser) {
			summa = loser;
			loserI = i;
		}
	}
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			summa2 += array[j][i];
		}
		cout << "   " <<summa2 / size1 << " ";
		summa2 = 0;
	}
	cout << endl;
	cout << "Best st " << bestSt << bestI+1 << " ";
	cout << "Worst st " << loser << loserI+1;
}
