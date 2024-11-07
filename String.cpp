#include "String.h"

String :: String(char* str_p, int size_p) : str{ new char[size] }, size{ size_p }
{
	if (str_p)
	{
		strcpy_s(str, strlen(str_p) + 1, str_p);
	}

	count_str++;
}

void String::set_str(const char* str_p)
{
	if (str)
	{
		delete[] str;
	}

	size = strlen(str_p) + 1;
	str = new char[size];

	strcpy_s(str, size, str_p);
}
