#include <iostream>
#include "four.h"
#include "ten.h"
#include "sec10.h"
#include "third.h"
using namespace std;

int main()
{
    
    ten* try_storony = new third();
    try_storony->Read();
    try_storony->Calculate();

    ten* try_vershyny = new secten();
    try_vershyny->Read();
    try_vershyny->Calculate();

    ten* prtr = new four();
    prtr->Read();
    prtr->Calculate();

    return 0;
}
/*
Реалізувати мовою С++ наступну ієрахію класів
1. Визначте абстрактний клас трикутників і дві його реалізації: за трьома вершинами і за трьома сторонами.
2. Доповніть клас трикутників конструктором за основами його трьох
медіан. Реалізуйте метод обчислення довільної медіани трикутника.
3. За довільною стороною трикутника знайдіть паралельну їй середню
лінію.
4. Визначте ієрархію трикутник-прямокутний трикутник. Реалізуйте
функції обчислення довжин радіусів вписаного і описаного кіл.
*/