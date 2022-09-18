#include <iostream>
#include <bitset>

// 3.9 비트 플래그, 비트 마스크 사용법 Bit flags, Bit masks


int main()
{
	using namespace std;

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;	// 00000001
	cout << bitset<8>(opt1) << endl;	// 00000010
	cout << bitset<8>(opt2) << endl;	// 00000100
	cout << bitset<8>(opt3) << endl;	// 00001000


	 unsigned char items_flag = 0;


	 cout <<" No item0 obtained " << bitset<8>(items_flag) << endl;	// 	No item  00000000

	 // item0 on
	 items_flag |= opt0;

	 cout << " No item3 obtained " << bitset<8>(items_flag) << endl;	//	No item  00000001
	
	 // item3 on
	 items_flag |= opt3;
	 cout << " No item3 obtained " << bitset<8>(items_flag) << endl;	// No item  00001001

	 // item3 lost
	 items_flag &= ~opt3;
	 cout << " No3 item lost " << bitset<8>(items_flag) << endl;	//	No item  00000001

	 // has item1 ? 
	 if (items_flag & opt1)
	 {
		 cout << "Not has item1" << endl;
	 }

	 // has item0 ? 
	 if (items_flag & opt0)
	 {
		 cout << "has item0" << endl;
	 }

	 // obtain item 2, 3
	 items_flag |= (opt2 | opt3);		
	 cout  << bitset<8>(opt2 | opt3) << endl;			// 00001100	
	 cout << " item0 obtained " << bitset<8>(items_flag) << endl;	//  item0 obtained 00001101


	 if ((items_flag & opt2) && !(items_flag & opt1))
	 {
		 items_flag ^= opt2;
		 items_flag ^= opt1;
	 }

	 cout << bitset<8>(items_flag) << endl;			// 00001011	


	 const unsigned int red_mask = 0xFF0000;
	 const unsigned int green_mask = 0x00FF00;
	 const unsigned int blue_mask = 0x0000FF;

	 cout << bitset<32>(red_mask) << endl;			// 00000000111111110000000000000000	
	 cout << bitset<32>(green_mask) << endl;			// 00000000000000001111111100000000	
	 cout << bitset<32>(blue_mask) << endl;			// 00000000000000000000000011111111

	 unsigned int pixel_color = 0xDAA520;

	 cout << bitset<32>(pixel_color) << endl;		// 00000000110110101010010100100000

	unsigned char green = (pixel_color & green_mask) >>8;
	unsigned char blue = pixel_color & green_mask;


	cout << "green  " << bitset<8>(green) <<int(green) << endl;		// green  10100101165
	cout <<"blue  " << bitset<8>(blue) << int(green) << endl;		// blue  00000000165


	return 0;
}