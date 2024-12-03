#pragma once
#include <iostream>
#define CLASSICSIZE 200

using namespace std;

class String
{
private:
	static int count_str;
	int size;
	char* str;
public:
	//������������
	String() : String(nullptr, 80) {}
	String(int size_p) : String(nullptr, size_p) {}
	String(char* str_p, int size_p);
	String(const String& string);
	String(String&& string);//����������� �����������
	//������������
	void set_str(const char* str_p);
	void set_size(int size_p);
	//���������
	const char* get_str() const{ return str; }
	int get_size() const{ return size; }
	
	void print() const { puts(str); } //����� ������
	//����������� ������� ��� �������� ��������
	static int counter() { return count_str; }
	
	~String();//����������
};