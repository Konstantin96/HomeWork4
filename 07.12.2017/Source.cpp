#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Введите номер задания от 1 до 6 : ";
	cin >> nz;
	switch (nz)
	{

	case 1:

	{
		system("cls");
		cout << "1 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Пользователь вводит два числа. Определить, равны ли эти числа, " << endl;
		cout << " и если нет, вывести их на экран в порядке возрастания. " << endl;
		cout << "------------------------------------------------------------------" << endl;
		int a, b;
		cout << "Введите число a = ";
		cin >> a;
		cout << "Введите число b = ";
		cin >> b;
		if (a == b)
			cout << "Числа a и b равны! " << endl;
		if (a < b)
		{
			cout << a << " ";
			if (b < a)
				cout << b << " ";
			else
				cout << " " << b;
		}

		else
		{
			if (b < a)
				cout << b << " " << a;
			else
				cout << a << " " << b;
		}

		system("pause");
		goto start;
		break;
	}

	case 2:

	{
		system("cls");
		cout << "2 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Пользователь с клавиатуры вводит 5 оценок студента " << endl;
		cout << " Определить, допущен ли студент к экзамену. Студент получает " << endl;
		cout << " допуск, если его средний балл 4 балла и выше " << endl;
		cout << "------------------------------------------------------------------" << endl;
		int a, b, c, d, e;
		double sr;
		cout << "Введите оценку a = ";
		cin >> a;
		cout << "Введите оценку b = ";
		cin >> b;
		cout << "Введите оценку c = ";
		cin >> c;
		cout << "Введит оценкуе d = ";
		cin >> d;
		cout << "Введите оценку e = ";
		cin >> e;
		sr = (a + b + c + d + e) / 5.0;
		cout << "Средний балл: " << sr << endl;
		switch (int(sr))
		{
		case 1:
		{
			cout << "Студент не допушен к экзамену " << endl;
			break;
		}
		case 2:
		{
			cout << "Студент не допушен к экзамену " << endl;
			break;
		}
		case 3:
		{
			cout << "Студент не допушен к экзамену " << endl;
			break;
		}
		case 4:
		{
			cout << "Студент допушен к экзамену " << endl;
			break;
		}
		case 5:
		{
			cout << "Студент допушен к экзамену " << endl;
			break;
		}

		}

		system("pause");
		goto start;
		break;
	}

	case 3:

	{
		system("cls");
		cout << "3 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Написать программу-калькулятор. Пользователь вводит два числа " << endl;
		cout << " и выбирает арифметическое действие. Вывести на экран результат " << endl;
		cout << "------------------------------------------------------------------" << endl;
		enum arif
		{
			slozhenie = 1,
			vichitanie,
			umnozhenie,
			delenie
		};
		enum arif qwe;
		int a, b, c;
		cout << "Введите число a = ";
		cin >> a;
		cout << "Введите число b = ";
		cin >> b;
	st:
		system("cls");
		cout << "Введите 1 что бы сложить числа " << endl;
		cout << "Введите 2 что бы отнять числа " << endl;
		cout << "Введите 3 что бы умножить числа " << endl;
		cout << "Введите 4 что бы делить числа " << endl;
		cin >> c;

		switch (c)
		{
		case slozhenie:
			int sl;
			sl = a + b;
			cout << a << " + " << b << " = " << sl << endl;
			break;
		case vichitanie:
			int vic;
			vic = a - b;
			cout << a << " - " << b << " = " << vic << endl;
			break;
		case umnozhenie:
			int umn;
			umn = a*b;
			cout << a << " * " << b << " = " << umn << endl;
			break;
		case delenie:
			int del;
			del = a / b;
			cout << a << " / " << b << " = " << del << endl;
			break;
		default:
			cout << " Неверно введено значение " << endl;
			cout << " Повторите ввод " << endl;
			system("pause");
			goto st;
			break;
		}

		/*switch (c)
		{
		case 1:
			int sl;
			sl = a + b;
			cout << a << " + " << b << " = " << sl << endl;
			break;
		case 2:
			int vic;
			vic = a - b;
			cout << a << " - " << b << " = " << vic << endl;
			break;
		case 3:
			int umn;
			umn = a*b;
			cout << a << " * " << b << " = " << umn << endl;
			break;
		case 4:
			int del;
			del = a / b;
			cout << a << " / " << b << " = " << del << endl;
			break;
		default:
			cout << " Неверно введено значение " << endl;
			cout << " Повторите ввод " << endl;
			system("pause");
			goto st;
			break;
		}*/

		system("pause");
		goto start;
		break;
	}

	case 4:

	{
		system("cls");
		cout << "4 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Написать программу, которая по выбору пользователя меняет цвет " << endl;
		cout << " консольного приложения. Пользователь может выбрать цвет " << endl;
		cout << " шрифта и цвет фона " << endl;
		cout << "------------------------------------------------------------------" << endl;
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hCon, FOREGROUND_RED | BACKGROUND_BLUE);
		setlocale(LC_ALL, "RUSSIAN");
		char text, fon;
		cout << "0 = Черный\t8 = Серый\n";
		cout << "1 = Синий\t9 = Светло - синий\n";
		cout << "2 = Зеленый\tA = Светло - зеленый\n";
		cout << "3 = Голубой\tB = Светло - голубой\n";
		cout << "4 = Красный\tC = Светло - красный\n";
		cout << "5 = Лиловый\tD = Светло - лиловый\n";
		cout << "6 = Желтый\tE = Светло - желтый\n";
		cout << "7 = Белый\tF = Ярко - белый\n\n";
		cout << "Введите цвет фона: ";
		cin >> fon;
		cout << "Введите цвет текста: ";
		cin >> text;
		switch (fon = text) {
		case true: {cout << "Невозможно поменять цвета."; }
		case false: {
			switch (fon) {
			case '0': {
				switch (text) {
				case '1': {system("color 01"); break; }
				case '2': {system("color 02"); break; }
				case '3': {system("color 03"); break; }
				case '4': {system("color 04"); break; }
				case '5': {system("color 05"); break; }
				case '6': {system("color 06"); break; }
				case '7': {system("color 07"); break; }
				case '8': {system("color 08"); break; }
				case '9': {system("color 09"); break; }
				case 'a': {}
				case 'A': {system("color 0A"); break; }
				case 'b': {}
				case 'B': {system("color 0B"); break; }
				case 'c': {}
				case 'C': {system("color 0C"); break; }
				case 'd': {}
				case 'D': {system("color 0D"); break; }
				case 'e': {}
				case 'E': {system("color 0E"); break; }
				case 'f': {}
				case 'F': {system("color 0F"); break; }
				}break;
				switch (fon = text) {
				case true: {cout << "Невозможно поменять цвета."; }
				case false: {
					switch (fon) {
					case '1': {
						switch (text) {
						case '1': {system("color 12"); break; }
						}break;
					}
					}break;
				}
				}break;

			}
			}

			cin.get(); cin.get();
		}
		}
		system("pause");
		goto start;
		break;
	}


	case 5:

	{
		system("cls");
		cout << "5 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " Написать программу, которая по выбору пользователя возводит " << endl;
		cout << " введенное им число в степень от нулевой до седьмой включительно " << endl;
		cout << "------------------------------------------------------------------" << endl;
		int a, c;
		double d;
		enum step
		{
			nulevaya,
			pervaya,
			vtoraya,
			tretiya,
			chetvertaya,
			pyatata,
			shestaya,
			sedimaya
		};
		enum step ce;
		cout << "Введите число : ";
		cin >> a;
	rest:
		system("cls");
		cout << "В какую степень возвезти от 0 до 7 ? ";
		cin >> c;

		switch (c)
		{
		case nulevaya:
			d = pow(a, 0);
			cout << a << " в нулевой степени = " << d << endl;
			break;
		case pervaya:
			d = pow(a, 1);
			cout << a << " в перврой степени = " << d << endl;
			break;
		case vtoraya:
			d = pow(a, 2);
			cout << a << " в второй степени = " << d << endl;
			break;
		case tretiya:
			d = pow(a, 3);
			cout << a << " в третей степени = " << d << endl;
			break;
		case chetvertaya:
			d = pow(a, 4);
			cout << a << " в четвертой степени = " << d << endl;
			break;
		case pyatata:
			d = pow(a, 5);
			cout << a << " в пятой степени = " << d << endl;
			break;
		case shestaya:
			d = pow(a, 6);
			cout << a << " в шестой степени = " << d << endl;
			break;
		case sedimaya:
			d = pow(a, 7);
			cout << a << " в седьмой степени = " << d << endl;
			break;
		default:
			cout << "Такой степени нет, попробуйте еще раз!" << endl;
			system("pause");
			goto rest;
			break;

		}
	}

	case 6:

	{
		system("cls");
		cout << "6 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " В час пик на остановку одновременно подъехали три маршрутных " << endl;
		cout << " такси, следующие по одному маршруту, в которые тут же " << endl;
		cout << " набились пассажиры. Водители обнаружили, что количество " << endl;
		cout << " людей в разных маршрутках разное, и решили пересадить часть " << endl;
		cout << " пассажиров так, чтобы в каждой маршрутке было поровну " << endl;
		cout << " пассажиров. Требуется по количествам людей в трех маршрутках " << endl;
		cout << " определить, какое наименьшее количество пассажиров придаться " << endl;
		cout << " при этом пересадить (если это вообще возможно) " << endl;
		cout << "------------------------------------------------------------------" << endl;

		int a, b, c, d, x;
		cout << "Введите число a = ";
		cin >> a;
		cout << "Введите число b = ";
		cin >> b;
		cout << "Введите число c = ";
		cin >> c;
		if ((a + b + c) * 3 > 0)
		{
			d = (a + b + c) / 3;
			if ((a - d) > (b - d))
			{
				x = a - d;
			}
			else
			{
				x = b - d;
			}
			if ((c - d) > x)
				x = c - d;
			cout << "Прийдется пересадить " << x << endl;
		}
		else
			cout << "Пересадить не возможно ! ";

		system("pause");
		goto start;
		break;
	}

	default:
		system("cls");
		cout << "      !!! Введенного задания не существует !!! " << endl;
		cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
		system("pause");
		goto start;
		break;
	}
}




















