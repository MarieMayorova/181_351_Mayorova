// lab0311.cpp: определяет точку входа для консольного приложения.
//перегрузка операторов,перегрузка функций
//перегрузка-объявление нескольких функций, методов или операторов,которые с одинаковыми именами но разными наборами аргументов
//различие функции по одному параметру-не перегрузка
//Неважно, какой тип аргумента возвращает, важно, какие принимает - тогда перегруженная
//Если есть необяхзательные арги, то это перегруженная
//Важны и последовательность, и типы переменных.
//Компилятор: проверяет Совпадение- затем простейшее приведение типов - 
//затем, если нет того, то * в void, float в double
// Унарные операторы перегружаются внутри класса, 
//бинаные - как дружественные глобально. Потоковые как бин, равно как унарный
//Унарарные записывают в объект, который вызвал. Поэтому внутри класса писать. 
//+= унарный
//Sample_class & operator +=(const Sample_class & operand)
//{
//property1=property1+operand.property1;
//this->property2=this->property2+property1;

#include "stdafx.h"


int main()
{

    return 0;
}
