#include <iostream>
#include <Windows.h>
#include<string>

int main(int args, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string s;
	std::cout << "���� ���: ";
	std::getline(std::cin, s);
	std::cout << "������������, " << s;
}