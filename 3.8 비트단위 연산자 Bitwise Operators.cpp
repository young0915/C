#include <iostream>
#include <bitset>

// 3.8 비트단위 연산자 Bitwise Operators



int main()
{
	using namespace std;

	/*
	// << left shift
	// >> 
	// ~, &, |, ^
	*/

	// << left shift
	unsigned int a = 3;
	cout << std::bitset<4>(a) << endl;	// 0011


	unsigned int b = a << 2;
	cout << std::bitset<4>(b) << "  " << b <<endl;	// 1100  12


	unsigned int c = 3;
	cout << std::bitset<8>(c) << endl;	// 0011


	cout << std::bitset<8>(c<<1) << "  " << (c << 1) << endl;			// 00000110  6
	cout << std::bitset<8>(c << 2) << "  " << (c << 2) << endl;			// 00001100  12
	cout << std::bitset<8>(c << 3) << "  " << (c << 3) << endl;			// 00011000  24
	cout << std::bitset<8>(c << 4) << "  " << (c << 4) <<  endl;		// 00110000  48


	// >> right shift
	unsigned int d = 1024;

	cout << std::bitset<16>(d) << endl;	// 0000010000000000

	cout << std::bitset<16>(d >> 1) << "  " << (d >> 1) << endl;			// 0000001000000000  512
	cout << std::bitset<16>(d >> 2) << "  " << (d >> 2) << endl;			// 0000000100000000  256
	cout << std::bitset<16>(d >> 3) << "  " << (d >> 3) << endl;			// 0000000010000000  128
	cout << std::bitset<16>(d >> 4) << "  " << (d >> 4) << endl;			// 0000000001000000  64


	// not
	// !a logical not
	// bitwise not은 ~a 입니다.
	unsigned int e = 1024;

	cout << std::bitset<16>(e) << endl;	// 0000010000000000

	cout << std::bitset<16>(~e) << "  " << (~e) << endl;			// 1111101111111111  4294966271
	

	// AND OR XOR
	// 이진수 표현은 앞에 0b를 붙입니다.

	unsigned int f = 0b1100;
	unsigned int g = 0b0110;

	cout << f << " " << g << endl;	// 12 6

	// bitwise AND
	cout << std::bitset<4>(f & g) << endl;	// 0100
	// bitwise OR
	cout << std::bitset<4>(f | g) << endl;	// 1110
	// bitwise XOR
	cout << std::bitset<4>(f^g) << endl;	// 1010


	// Quiz 
	// 0110 >> 2 -> decimal e답 :  0001 -> 1
	// 5 | 2  답 0111
	// 5 & 2  답 0000 
	// 5 ^ 2  답 0111 

	

	return 0;
}