#include "String.h"

String* arr_maker(String Strings[], int& size);

int String::count_str = 0;

int main()
{
	setlocale(LC_ALL, "rus");

	int user_choice, size = 0;
	char string[CLASSICSIZE];

	String* Strings = nullptr;

	enum menu { EXIT, PRINT, ADD, COUNT};

	do
	{
		system("cls");
		cout << "1.������� ��� ������\n2.������ ������\n3.���������� �����\n0.�����\n";
		cin >> user_choice;

		switch (user_choice)
		{
		case PRINT:
			system("cls");

			if (!size)
			{
				cout << "������ ����� ����\n";
				system("pause");
				break;
			}

			for (int i = 0; i < size; i++)
			{
				Strings[i].print();
			}

			system("pause");
			break;
		case ADD:
			system("cls");

			Strings = arr_maker(Strings, size);

			cout << "������� ������: ";
			cin.ignore();
			gets_s(string);

			Strings[size - 1].set_str(string);
			break;
		case COUNT:
			system("cls");

			printf("����� ����� - %d\n", String::counter());
			system("pause");
			break;
		case EXIT:
			break;
		}
	} while (user_choice != 0);

	return 0;
}