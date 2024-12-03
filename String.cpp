#include "String.h"

String::String(char* str_p, int size_p) : str{ new char[size] }, size{ size_p }
{
	if (str_p)
	{
		strcpy_s(str, strlen(str_p) + 1, str_p);
	}

	count_str++;
}

String::String(const String& string) : size{ string.size }, str { new char[size] }
{
	strcpy_s(str, size, string.str);
}

String::String(String&& string) : str{ string.str }, size{ string.size }
{
	{
		string.str = nullptr;
		string.size = 0;
	}
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

void String::set_size(int size_p)
{
	size = size_p;

	delete[] str;
	str = new char[size] { '\0' };
}

String::~String()
{
	delete[] str;
	count_str--;
}
