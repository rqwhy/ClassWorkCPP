#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "тип данных \t\t|  мин значение\t\t|  макс значение\t\t|  кол-во байт\t\t|  описание" << endl;
    cout << "short" << "\t\t\t";
    cout << " | " << SHRT_MIN << "\t\t\t";
    cout << " | " << SHRT_MAX << "\t\t\t";
    cout << " | " << sizeof(short) <<"\t\t";
    cout << "целые числа";


    cout << "int" << "\t\t\t";
    cout << " | " << INT_MIN << "\t\t\t";
    cout << " | " << INT_MAX << "\t\t\t";
    cout << " | " << sizeof(int) << "\t\t\t";
    cout << "целые числа";


    cout << "long long" << "\t\t";
    cout << " | " << LLONG_MIN << "\t\t";
    cout << " | " << LLONG_MAX << "\t\t";
    cout << " | " << sizeof(long long) << "\t\t";
    cout << "целые числа";

    cout << "float" << "\t\t\t";
    cout << " | " << FLT_MIN << "\t\t\t";
    cout << " | " << FLT_MAX << "\t\t\t";
    cout << " | " << sizeof(float) << "\t\t";
    cout << "вещественные числа";


    cout << "double" << "\t\t\t";
    cout << " | " << DBL_MIN << "\t\t\t";
    cout << " | " << DBL_MAX << "\t\t\t";
    cout << " | " << sizeof(double) << "\t\t";
    cout << "вещественные числа";

    cout << "char" << "\t\t\t";
    cout << " | " << CHAR_MIN << "\t\t\t\t";
    cout << " | " << CHAR_MAX << "\t\t\t\t";
    cout << " | " << sizeof(char) << "\t";
    cout << "символы";


    cout << "bool" << "\t\t\t";
    cout << " | " << "0" << "\t\t\t\t";
    cout << " | " << "1" << "\t\t\t\t";
    cout << " | " << sizeof(bool) << "\t";
    cout << "вещественные числа";
}