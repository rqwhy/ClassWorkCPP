using namespace std;
#include <iostream>

int main()
{
    /*int array[10];
    int m=0;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
        if (array[i] > array[m]) array[m] = array[i];
    }
    m = array[0];
    for (int i = 0; i < 10; i++)cout << array[i] << " ";
    cout << m;*/


    /*int array[10]; 
    int m=0;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
        if (array[i] < array[m]) array[m] = array[i];
    }
    m = array[0];
    for (int i = 0; i < 10; i++)cout << array[i] << " ";
    cout << m;*/

    /*int array[10];
    int m = 0;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
        m += array[i];
    }
    cout << m;*/

   
 /*   srand(time(NULL));
    int array[10];
    int sum = 0;
    int  min = 10, max=99;
    for (int i = 0; i < 10; i++) {
        array[i] = min + rand() % (max + 1 - min);
        cout << array[i] << " ";
        sum += array[i];
    }
    cout << endl << sum/10;*/

    /*srand(time(NULL));
    int array[10];
    int  min = 10, max = 99;
    for (int i = 0; i < 10; i++) {
        array[i] = min + rand() % (max + 1 - min);
        cout << array[i] << " ";
        if (array[i] % 5) cout << array[i];
    }*/

    /*srand(time(NULL));
    int array[10];
    int sum = 0;
    int  min = 10, max=99;
    for (int i = 0; i < 10; i++) {
        array[i] = min + rand() % (max + 1 - min);
        cout << array[i] << " ";
        sum += array[i];
    }
    cout << ((sum % 2 == 0) ? " even" : " odd");*/

    srand(time(NULL));
    int array1[10];
    int array2[10];
    int  min = 10, max = 99;
    for (int i = 0; i < 10; i++) {
        for (int i1 = 0; i1 == i; i1++) {
            array1[i] = min + rand() % (max + 1 - min);
            cout << array1[i] << " ";
            array2[i] = min + rand() % (max + 1 - min);
            cout << endl;
            cout << array2[i] << " ";
        }
    }
}  