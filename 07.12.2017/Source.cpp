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
	cout << "������� ����� ������� �� 1 �� 6 : ";
	cin >> nz;
	switch (nz)
	{

	case 1:

	{
		system("cls");
		cout << "1 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " ������������ ������ ��� �����. ����������, ����� �� ��� �����, " << endl;
		cout << " � ���� ���, ������� �� �� ����� � ������� �����������. " << endl;
		cout << "------------------------------------------------------------------" << endl;
		int a, b;
		cout << "������� ����� a = ";
		cin >> a;
		cout << "������� ����� b = ";
		cin >> b;
		if (a == b)
			cout << "����� a � b �����! " << endl;
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
		cout << "2 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " ������������ � ���������� ������ 5 ������ �������� " << endl;
		cout << " ����������, ������� �� ������� � ��������. ������� �������� " << endl;
		cout << " ������, ���� ��� ������� ���� 4 ����� � ���� " << endl;
		cout << "------------------------------------------------------------------" << endl;
		int a, b, c, d, e;
		double sr;
		cout << "������� ������ a = ";
		cin >> a;
		cout << "������� ������ b = ";
		cin >> b;
		cout << "������� ������ c = ";
		cin >> c;
		cout << "������ ������� d = ";
		cin >> d;
		cout << "������� ������ e = ";
		cin >> e;
		sr = (a + b + c + d + e) / 5.0;
		cout << "������� ����: " << sr << endl;
		switch (int(sr))
		{
		case 1:
		{
			cout << "������� �� ������� � �������� " << endl;
			break;
		}
		case 2:
		{
			cout << "������� �� ������� � �������� " << endl;
			break;
		}
		case 3:
		{
			cout << "������� �� ������� � �������� " << endl;
			break;
		}
		case 4:
		{
			cout << "������� ������� � �������� " << endl;
			break;
		}
		case 5:
		{
			cout << "������� ������� � �������� " << endl;
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
		cout << "3 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " �������� ���������-�����������. ������������ ������ ��� ����� " << endl;
		cout << " � �������� �������������� ��������. ������� �� ����� ��������� " << endl;
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
		cout << "������� ����� a = ";
		cin >> a;
		cout << "������� ����� b = ";
		cin >> b;
	st:
		system("cls");
		cout << "������� 1 ��� �� ������� ����� " << endl;
		cout << "������� 2 ��� �� ������ ����� " << endl;
		cout << "������� 3 ��� �� �������� ����� " << endl;
		cout << "������� 4 ��� �� ������ ����� " << endl;
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
			cout << " ������� ������� �������� " << endl;
			cout << " ��������� ���� " << endl;
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
			cout << " ������� ������� �������� " << endl;
			cout << " ��������� ���� " << endl;
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
		cout << "4 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " �������� ���������, ������� �� ������ ������������ ������ ���� " << endl;
		cout << " ����������� ����������. ������������ ����� ������� ���� " << endl;
		cout << " ������ � ���� ���� " << endl;
		cout << "------------------------------------------------------------------" << endl;
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hCon, FOREGROUND_RED | BACKGROUND_BLUE);
		setlocale(LC_ALL, "RUSSIAN");
		char text, fon;
		cout << "0 = ������\t8 = �����\n";
		cout << "1 = �����\t9 = ������ - �����\n";
		cout << "2 = �������\tA = ������ - �������\n";
		cout << "3 = �������\tB = ������ - �������\n";
		cout << "4 = �������\tC = ������ - �������\n";
		cout << "5 = �������\tD = ������ - �������\n";
		cout << "6 = ������\tE = ������ - ������\n";
		cout << "7 = �����\tF = ���� - �����\n\n";
		cout << "������� ���� ����: ";
		cin >> fon;
		cout << "������� ���� ������: ";
		cin >> text;
		switch (fon = text) {
		case true: {cout << "���������� �������� �����."; }
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
				case true: {cout << "���������� �������� �����."; }
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
		cout << "5 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " �������� ���������, ������� �� ������ ������������ �������� " << endl;
		cout << " ��������� �� ����� � ������� �� ������� �� ������� ������������ " << endl;
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
		cout << "������� ����� : ";
		cin >> a;
	rest:
		system("cls");
		cout << "� ����� ������� �������� �� 0 �� 7 ? ";
		cin >> c;

		switch (c)
		{
		case nulevaya:
			d = pow(a, 0);
			cout << a << " � ������� ������� = " << d << endl;
			break;
		case pervaya:
			d = pow(a, 1);
			cout << a << " � ������� ������� = " << d << endl;
			break;
		case vtoraya:
			d = pow(a, 2);
			cout << a << " � ������ ������� = " << d << endl;
			break;
		case tretiya:
			d = pow(a, 3);
			cout << a << " � ������ ������� = " << d << endl;
			break;
		case chetvertaya:
			d = pow(a, 4);
			cout << a << " � ��������� ������� = " << d << endl;
			break;
		case pyatata:
			d = pow(a, 5);
			cout << a << " � ����� ������� = " << d << endl;
			break;
		case shestaya:
			d = pow(a, 6);
			cout << a << " � ������ ������� = " << d << endl;
			break;
		case sedimaya:
			d = pow(a, 7);
			cout << a << " � ������� ������� = " << d << endl;
			break;
		default:
			cout << "����� ������� ���, ���������� ��� ���!" << endl;
			system("pause");
			goto rest;
			break;

		}
	}

	case 6:

	{
		system("cls");
		cout << "6 �������" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << " � ��� ��� �� ��������� ������������ ��������� ��� ���������� " << endl;
		cout << " �����, ��������� �� ������ ��������, � ������� ��� �� " << endl;
		cout << " �������� ���������. �������� ����������, ��� ���������� " << endl;
		cout << " ����� � ������ ���������� ������, � ������ ���������� ����� " << endl;
		cout << " ���������� ���, ����� � ������ ��������� ���� ������� " << endl;
		cout << " ����������. ��������� �� ����������� ����� � ���� ���������� " << endl;
		cout << " ����������, ����� ���������� ���������� ���������� ��������� " << endl;
		cout << " ��� ���� ���������� (���� ��� ������ ��������) " << endl;
		cout << "------------------------------------------------------------------" << endl;

		int a, b, c, d, x;
		cout << "������� ����� a = ";
		cin >> a;
		cout << "������� ����� b = ";
		cin >> b;
		cout << "������� ����� c = ";
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
			cout << "��������� ���������� " << x << endl;
		}
		else
			cout << "���������� �� �������� ! ";

		system("pause");
		goto start;
		break;
	}

	default:
		system("cls");
		cout << "      !!! ���������� ������� �� ���������� !!! " << endl;
		cout << " *** ������� ENTER ��� �� ��������� � ������ ������� *** " << endl;
		system("pause");
		goto start;
		break;
	}
}




















