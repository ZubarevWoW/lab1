#include <iostream>

using namespace std;

void mas()
{
	srand(time(0)); // генерация чисел
	const int a = 10;
	int arr[a];
	for (int i = 0; i < a; i++)
	{
		arr[i] = 1 + rand() % 50; // рандом чисел
		cout << "Рандомная цифра: " << arr[i] << endl;
	}
	cout << "\nЗамена четных на 0: " << endl;
	for (int l = 0; l < a; l++) // цикл замены четных чисел на нули
	{
		if (arr[l] % 2 == 0)
			arr[l] = 0;
		cout << arr[l] << "\n";
	}
}
void simvol(char a)
{
	int b = 0;
	char c[6];//строка
	do {//цикл на ввод символа
		cout << "Введите символ:" << endl;
		cin >> a;
		if ((isalpha(a) == 0)) //Проверка на ввод символа а не строки;
			cout << "Ошибка.Введен не символ" << endl;
	} while (isalpha(a) == 0);

	cout << "Введите строку из 6 символов :" << endl;
	for (int i = 0; i < 6; i++) // цикл на ввод строки
	{
		do {

			cin >> c[i];
			if (isalpha(c[i]) == 0) //проверка строки;
			{
				cout << "Ошибка. Введите символ:" << endl;
			}

		} while (isalpha(c[i]) == 0);
	}

	for (int i = 0; i < strlen(c) - 1; i++)
	{
		if (c[i] == a)  //сравнение строки с символом
			b = i;
	}
	if (b > 0)  //удовлетворяет требованию
		cout << "Символ занимает" << " " << b + 1 << " " << "место в строке";
	else
		cout << "Символов нет";

}
void func()
{
	int a[3][3];
	for (int i = 0; i < 3; i++) // циклы ввода массива по i и j
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Ввидете элементы a для матрицы:";
			cin >> a[i][j];
			cout << endl;
		}
	} // расчет определителя матрицы
	int b = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1] - a[0]
		[2] * a[1][1] * a[2][0] - a[0][0] * a[1][2] * a[2][1] - a[0][1] * a[1][0] * a[2][2];
	cout << "Определитель = " << b << endl; // вывод определителя матрицы
}


int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Задание 1" << endl;
	mas(); // вызов функции
	cout << endl;
	cout << "Задание 2" << endl;
	char a = '1';
	simvol(a); // вызов функции
	cout << endl;
	cout << "Задание 3" << endl;
	func(); // вызов функции
	cout << endl;
	system("pause");
	return 0;
}
