
//

#include "pch.h"
#include <iostream>

using namespace std;

struct node //представляет одно звено будущего дерева
{
	int info;
	node *l, *r; //Левая и Правая часть дерева
};

node *tree = NULL;

//ФУНКЦИЯ ЗАПИСИ ЭЛЕМЕНТА В БИНАРНОЕ ДЕРЕВО
void push(int a, node **t)
{
	if ((*t) == NULL) //Если дерева не существует
	{
		(*t) = new node; //Выделяем память
		(*t)->info = a; //Кладем в выделенное место аргумент a
		(*t)->l = (*t)->r = NULL; //Очищаем память для следующего
		return;
	}
	//Дерево есть
	if (a > (*t)->info) push(a, &(*t)->r); //Если аргумент а больше чем текущий элемент, кладем его вправо
	else push(a, &(*t)->l); //Иначе кладем его влево
}

//ФУНКЦИЯ ОТОБРАЖЕНИЯ ДЕРЕВА НА ЭКРАНЕ
void print(node *t, int u)
{
	if (t == NULL) return; //Если дерево пустое, то  выходим
	else //Иначе
	{
		print(t->l, ++u); //С помощью рекурсивного посещаем левое поддерево
		for (int i = 0; i < u; ++i) cout << "|";
		cout << t->info << endl; //И показываем элемент
		u--;
	}
	print(t->r, ++u); //С помощью рекурсии посещаем правое поддерево
}

int main()
{
	int n;
	int s;
	cout << "Insert the number of items:  ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cout << "Insert the number:  ";
		cin >> s;

		push(s, &tree);
	}
	cout << "Your tree:\n";
	print(tree, 0);
	cin.ignore().get();
}
