// Struct Drob.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
using namespace std;

struct Drob
{
    int x = 0;
    int y = 0;
    void inputDrob() {
        cout << "Введіть чисельник і знаменник дробу" << endl;
        cin >> x >> y;
    }
    void printDrob() {
        cout << x << "/" << y << endl;
    }
};
void SUM(int x, int y, int x1, int y1)
{
    int chus, znam;
    znam = y * y1;
    chus = x * y1 + x1 * y;
    int m = min(chus, znam);
    for (int i = 2; i <= m; i++)
        while (!(chus % i) && !(znam % i))
        {
            chus /= i;
            znam /= i;
        }
    if (chus > znam)
    {
        chus = chus - znam;
        cout <<"1 ціла "<< chus << "/" << znam << endl;
    }
    else if (chus == znam)
    {
        cout << "1" << endl;
    }
    else {
        
        cout << chus << "/" << znam << endl;
    }
}
void Subtraction(int x, int y, int x1, int y1)
{
    int chus, znam;
    znam = y * y1;
    chus = x * y1 - x1 * y;
    
    if (x < x1) {
        int m = min(chus, znam);
        for (int i = 2; i <= m; i++)
            while (!(chus % i) && !(znam % i))
            {
                chus /= i;
                znam /= i;
            }
        cout << chus << "/" << znam << endl;
    }
    else if(x==x1 && y==y1){
        cout << "0" << endl;
    }
    else {
        int m = max(chus, znam);
        for (int i = 2; i <= m; i++)
            while (!(chus % i) && !(znam % i))
            {
                chus /= i;
                znam /= i;
            }
        cout << chus << "/" << znam << endl;
    }
}
void Multiplication(int x, int y, int x1, int y1)
{
    int chus, znam;
    znam = y * y1;
    chus = x * x1;
    int m = min(chus, znam);
    for (int i = 2; i <= m; i++)
        while (!(chus % i) && !(znam % i))
        {
            chus /= i;
            znam /= i;
        }
    cout << chus << "/" << znam << endl;    
}
void division(int x, int y, int x1, int y1)
{
    int chus, znam, n;
    znam = y * x1;
    chus = x * y1;
    
    if (chus > znam)
    {
        if(chus % znam!=0){
        n = chus / znam;
        chus = chus - (n*znam);
        int m = min(chus, znam);
        for (int i = 2; i <= m; i++)
            while (!(chus % i) && !(znam % i))
            {
                chus /= i;
                znam /= i;
            }
        cout << n << " цілих " << chus << "/" << znam << endl;
    }
        else {
            cout << chus / znam << endl;
        }
    }
    else if (chus == znam)
    {
        cout << "1" << endl;
    }
    else {
        int m = min(chus, znam);
        for (int i = 2; i <= m; i++)
            while (!(chus % i) && !(znam % i))
            {
                chus /= i;
                znam /= i;
            }
        cout << chus << "/" << znam << endl;
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Drob A;
    A.inputDrob();
    A.printDrob();
    Drob B;
    B.inputDrob();
    B.printDrob();
    cout << "сума = ";
    SUM(A.x, A.y, B.x, B.y);
    cout << endl;
    cout << "різниця = ";
    Subtraction(A.x, A.y, B.x, B.y);
    cout << endl;
    cout << "добуток = ";
    Multiplication(A.x, A.y, B.x, B.y);
    cout << endl;
    cout << "ділення = ";
    division(A.x, A.y, B.x, B.y);
}