#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    1 задание -вводиться три числа и с ними проходять разные арифметические действия{
        /*double a, b, c;
        cout << "input three numbers: ";
        cin >> a >> b >> c;

        cout << a << " + " << b << " + " << c << " = " << a + b + c << endl;
        cout << a << " - " << b << " + " << c << " = " << a - b + c << endl;
        cout << a << " + " << b << " - " << c << " = " << a + b - c << endl;
        cout << a << " - " << b << " - " << c << " = " << a - b - c << endl;
    
        cout << a << " * " << b << " * " << c << " = " << a * b * c << endl;
        cout << a << " / " << b << " / " << c << " = " << a / b / c << endl;*/
    }

    2 задание - вычисление расстояние между населёнными пунктами{
        //double size;
        //double distans;
        //cout << "введите расотояние между населёнными пунктами: " << endl;
        //cin >> distans;
        //cout << "введите маштаб карты: " << endl;
        //cin >> size;
        //cout << "Расстояние между населёнными пунктами: " << size * distans << "Км.";
    }

    3 задание - перевернуть 3 - х значное число и умножить его на 2{
        /*int number;
        cout << "введите 3-ч значное число: " << endl;
        cin >> number;
        int num1=number / 100;
        int num2=number / 10 % 10 *10;
        int num3 = number % 10 * 100;
        cout << double(num1 + num2 + num3) * 2;*/
    }

    4 задание - Вычисление объёма параллелепипида{
        /*double a,b,c;
        cout << "Вычисление объёма параллелепипида.";
        cout << "Введите исходные данные: ";
        cin >> a >> b >> c;
        cout << "Длина (см) -> " << a << endl;
        cout << "Ширина (см) -> " << b <<endl;
        cout << "Высота (см) -> " << c <<endl;
        cout << "Объём: " << a * b * c << "куб. см.";*/
    }

    5 задание - вычисление большего числа{
        /*int numb1, numb2;
        cout << "введите числа: " << endl;
        cin >> numb1 >> numb2;
        if (numb1 > numb2) {
            cout << numb1 << " больше";
        }
        else {
            cout << numb2 << " больше";
        }
        cout << endl;

        cout << ((numb1 > numb2) ? numb1 : numb2 )<<" больше";*/
    }

    6 задание - вычисление положения число < / > 0{
        /*int numb;
        cout << "введите число: " << endl;
        cin >> numb;
        if (numb > 0) {
            cout << numb << " больше 0";
        }

        else if (numb == 0) {
            cout << numb << " равно 0";
        }

        else {
            cout << numb << " меньше 0";
        }*/
    }

    7 задание - вычисление большего числа либо равного{
        /*int numb1, numb2;
        cout << "введите числа: " << endl;
        cin >> numb1 >> numb2;
        if (numb1 > numb2) {
            cout << numb1 << " " << numb2;
        }

        else if(numb1 == numb2) {
            cout << numb2;
        }

        else {
            cout << numb2 << " " << numb1;
        }
        cout << endl;*/
    }

    8 задание - вычисление среднего арифметического.Узнать по оценке сдал ли юсер экзамен.{
        /*double mark1, mark2, mark3, mark4, mark5;
        cout << "Введите оценки: " << endl;
        cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;
        double(summa) = (mark1 + mark2 + mark3 + mark4 + mark5) / 2;
        if (summa > 4) {
            cout << summa << endl;
            cout << "Экзамен сдан";
        }

        else if (summa == 4) {
            cout << summa << endl;
            cout << "Экзамен сдан";
        }

        else {
            cout << summa << endl;
            cout << "Экзамен не сдан";
        }*/

        /*int numb;
        cout << "Введите число: " << endl;
        cin >> numb;
        if(numb %2 ==0) {
            cout << numb*3 << endl;
        }
        else {
            cout << numb / 2.0 << endl;
        }*/
    }

    char action;
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Введите действия( + - / *): ";
    cin >> action;
    if (action == '+') {
        cout << a + b;
    }

    else if(action == '-') {
        cout << a - b;
    }

    else if (action == '/') {
        cout << a / b;
        if (b = 0) {
            cout << a << "на ноль делить нельзя";

        }
    }

    else if (action == '*') {
        cout << a * b;
    }
}
