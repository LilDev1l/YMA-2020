#include <iostream>
#include <Windows.h>
#pragma warning(disable: 4996)


extern "C"
{
	int lenght_str(char* str)
	{
		return strlen(str);
	}

	int write_int(int p)
	{
		std::cout << p << std::endl;
		return 0;
	}

	int write_str(char* str)
	{
		setlocale(LC_ALL, "rus");
		std::cout << str << std::endl;
		return 0;
	}
}