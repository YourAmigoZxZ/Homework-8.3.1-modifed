#include "String.h"

String* arr_maker(String Strings[], int& size)//������� ��� ����������� ����� ������ � ������ �����
{
	system("cls");

	String* new_Strings = new String[++size];

	for (int i{ 0 }; i < size - 1; i++)
	{
		new_Strings[i].set_str(Strings[i].get_str());
	}
	delete[] Strings;

	return new_Strings;
}

