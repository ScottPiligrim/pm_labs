#include <iostream>

int main()
{
	std::cout << "Size of Int : " << sizeof(int) << " bytes " << 8 * sizeof(int) << " bits" << std::endl;
	std::cout << "Minimum and Maximum value of Int : " << INT_MIN << " " << INT_MAX << std::endl;
	std::cout << "Minimum and Maximum value of Unsigned Int : 0 4294967295" << std::endl;

	std::cout << "Size of Char : " << sizeof(char) << " bytes " << 8 * sizeof(char) << " bits" << std::endl;
	std::cout << "Minimum and Maximum value of Char : " << CHAR_MIN << " " << CHAR_MAX << std::endl;
	std::cout << "Minimum and Maximum value of Unsigned Char : 0 255" << std::endl;
	
	std::cout << "Size of Short : " << sizeof(short) << " bytes " << 8 * sizeof(short) << " bits" << std::endl;
	std::cout << "Minimum and Maximum value of Short : -32768 32767" << std::endl;
	std::cout << "Minimum and Maximum value of Unsigned Short : 0 65536" << std::endl;

	std::cout << "Size of Long : 4 bytes 32 bits" << std::endl;
	std::cout << "Minimum and Maximum value of Long : -2147483648 2147483647" << std::endl;
	std::cout << "Minimum and Maximum value of Unsigned Long : 0 4294967295" << std::endl;

	std::cout << "Size of Float : " << sizeof(float) << " bytes " << 8 * sizeof(float) << " bits" << std::endl;
	std::cout << "Minimum and Maximum value of Float : 3.4*10^-38 3.4*10^38" << std::endl;

	std::cout << "Size of Bool : " << sizeof(bool) << " bytes " << 8 * sizeof(bool) << " bits" << std::endl;
	std::cout << "Minimum and Maximum value of Bool : true/false" << std::endl;

	std::cout << "Size of Double : " << sizeof(double) << " bytes " << 8 * sizeof(double) << " bits" << std::endl;
	std::cout << "Minimum and Maximum value of Double : 1.7*10^-308 1.7*10^308" << std::endl;

	int a = 2;
	int b = 10;
	int c = a+b;
	std::cout << c <<std::endl;

	char d = 33;
	char e = 65;
	char f = d + e;
	std::cout << f << std::endl;

	bool g = true;
	std::cout << g << std::endl;

	short i = 17;
	std::cout << i << std::endl;

	long k = 12345678912;
	std::cout << k << std::endl;

	float p = 1.12345;
	std::cout << p << std::endl;

	double o = 1.123456;
	std::cout <<  o << std::endl;

	return 0;
}