using namespace std;
#include <iostream>

int main()
{
    /*const int size = 10;
    int array1[size];
    int array2[size];
    int max = 9, min = 0;
    for (int i = 0; i < size; i++) {
        array1[i] = 10 + rand() % (max + 1 - min);
        array2[i] = 10 + rand() % (max + 1 - min);
    }
    for (int i = 0; i < 10; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
    for (int j = 0,flag; j < size; j++) {
        for (int l = 0; l < size; l++) {
            if (array1[j] == array2[l]) {
                flag = false;
                for (int x = 0; x < l; x++) {
                    if (array1[j] == array2[l]) {
                        flag = true;
                        break;
                    }
                }
                if (flag) cout << array1[j] << " ";
                else break;
            }
        }
    }*/
    /*srand(time(NULL));
    const int SIZE = 10;
    int array[SIZE];
    int array2[SIZE];
    int max = 9;
    int min = 0;
    for (int i = 0; i < SIZE; i++) {
        array[i] = min + rand() % (max + 1 - min);
        array2[i] = min + rand() % (max + 1 - min);
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;*/

    //for (int i = 0, flag; i < SIZE; i++) {
    //    for (int j = 0; j < SIZE; j++) {
    //        if (array[i] == array2[j]) {
    //            flag = true;
    //            for(int k = 0; k < i; k++) {
    //                if (array[i] == array[k]) {
    //                    flag = false;
    //                    break;
    //                }
    //            }
    //            if (flag) {
    //                cout << array[i] << " ";
    //                break;
    //            }
    //            else break;
    //        }
    //    }
    //}


    /*for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array[i] == array2[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array[k] == array[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < SIZE; k++) {
                    if (array[k] == array[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array[i] << " ";
            }
        }
    }

    for (int i = 0, flag; i < SIZE; i++) {
        flag = true;
        for (int j = 0; j < SIZE; j++) {
            if (array2[i] == array[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (int k = 0; k < i; k++) {
                if (array2[k] == array2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = i + 1; k < SIZE; k++) {
                    if (array2[k] == array2[i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) cout << array2[i] << " ";
            }
        }*/

        /*const int size = 10;
        int array1[10];
        int array2[5];
        int array3[15];
        for (int i = 0; i < size; i++) {
            array1[i] = 10 + rand() % (10 + 1 - 0);
            cout << array1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < 5; i++) {
            array2[i] = 10 + rand() % (10 + 1 - 0);
            cout << array2[i] << " ";
        }
        cout << endl;
        int index, a = 0;
        cout << "print index array: ";
        cin >> index;
        for (int i = 0; i < index; i++)  array3[a++] = array1[i];
        
        for (int i = 0; i < 5; i++)  array3[a++] = array2[i];
        
        for (int i = index; i < 10; i++) array3[a++] = array1[i];
        
        for (int i = index; i < 15; i++) cout << array3[i] << " ";*/

        const int size = 20;
        int array1[size];
        for (int i = 0; i < size; i++) {
            array1[i] = 10 + rand() % (10 + 1 - 0);
            cout << array1[i] << " ";
        }
        cout << endl;
        int index,count;
        int a = 0;
        int array2[size];
        cout << "print index and count symbol delete in array: ";
        cin >> index >> count;
        for (int i = 0; i < size; i++) {
            array2[a++] = array1[i];
        }
        for (int i = 0; i < index; i++) {
            array2[a++] = array1[i];
        }
        for (int i = 0; i < size; i++) {
            cout << array2[i] << " ";
        }
}