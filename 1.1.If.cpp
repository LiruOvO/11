#include <iostream>

using namespace std;
//Руда Єлизавета ФІТ 1-4 В12

int main()
{
	setlocale(0, ".1251");
	int a;
	cout << "Введіть номер місяця";
	cin >> a;

	if (a==2)
	{
		cout << "Кількість днів в місяці - 28"; 
	}
	else if (a == 4 ||a == 6|| a == 9||a == 11)
	{
		cout << "Кількість днів в місяці - 30";
	}
	else
	{
		cout << "Кількість днів в місяці - 31";
	}
}
