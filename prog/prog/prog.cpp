//Создать проект в котором
//1 Cоздать три файла : function.h, function.cpp, prog.cpp.
//2 В файле function.cpp необходимо написать следующие
//функции для работы с массивом данных :
//a) функцию для заполнения массива случайными зна­
//чен иями;
//b) функцию для вывода значений массива на консоль;
//c) функцию для поиска минимального элемента;
//d) функцию для поиска максимального элемента;
//e) функцию для сортировки;
//f) функцию для редактирования значения массива.
//Данные функции необходимо написать для работы
//с массивом целых, действительных и символьных
//значений. (Для каждого типа написать отдельную
//    функцию).
//    3 В файле function.h нужно :
//a) описать прототипы всех функций;
//b) сделать проверку определена ли константа, указы­вающая на тип данных(#ifdef INTEGER);
//c) создать обобщающие имена функции, которым бу­
//дет определена функция соответствующего типа в
//зависимости от константы, указанной в файле prog.
//cpp(# define show ShowInt).
//4 В файле prog.cpp нужно :
//a) в функции main вызвать все функции через пере­
//оз наченые(обобщенные) имена из файла function.h
//(show());
//b) определить константу, которая указывает какой тип
//данных будет использоваться.Например INTEGER —
//целые данные, CHAR — символьные DOUBLE —
//настоящие(#define INTEGER).
//Имя функциям нужно давать так, чтобы они отве­
//чали своей сути.Например функция для вывода значе­
//ний массива целых чисел на консоль — ShowArrayInt().
//А, когда переопределяем функцию с помощью #define то
//нужно давать общее имя.Например #define ShowArray
//ShowArrayInt.

#include <iostream>

using namespace std;

int main()
{
    int const size = 5;

#define INTEGER
#include "function.h"
    cout << endl;
    cout << "==============================================" << endl;
    int array[size];
    FILL(array, size);
    CONSOLE(array, size);
    MIN(array, size);
    MAX(array, size);
    SORT(array, size);
    CONSOLE(array, size);
    REDUCT(array, size);
    CONSOLE(array, size);
#undef INTEGER

#define FLOAT
#include "function.h"
    cout << endl;
    cout << "==============================================" << endl;
    float ar[size];
    FILL(ar, size);
    CONSOLE(ar, size);
    MIN(ar, size);
    MAX(ar, size);
    SORT(ar, size);
    CONSOLE(ar, size);
    REDUCT(ar, size);
    CONSOLE(ar, size);
#undef FLOAT

#define CHAR
#include "function.h"
    cout << endl;
    cout << "==============================================" << endl;
    char arch[size];
    FILL(arch, size);
    CONSOLE(arch, size);
    MIN(arch, size);
    MAX(arch, size);
    SORT(arch, size);
    CONSOLE(arch, size);
    REDUCT(arch, size);
    CONSOLE(arch, size);
#undef CHAR

    cout << "\n";

}

