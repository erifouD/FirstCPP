// FirstP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"
using namespace std;
int main()
{
	int x, y;
	cout << "First number: ";  cin >> x;
	cout << "Second number: "; cin >> y;
	cout << "Sum quad equal: " << degree(x, y);
}


