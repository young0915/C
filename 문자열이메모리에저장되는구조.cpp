#include <stdio.h> 

int main()
{
	// ���ڿ��� �޸𸮿� ����Ǵ� ����.
	int a = 1;
	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	// �����ϴ� �ּ� ���.
	printf("%i %i %i \n", int_arr[0], int_arr[1], int_arr[9]);


	//printf("%i \n", int_arr[10000]);		// ������ �Ѿ �߻��ϴ� ����

		char c = 'a';
	char str1[10] = "Hello"; // null character -> �ִ� 9���� ���� �����ϴ�.
	char str2[10] = { 'H', 'i' };

	printf("%c \n", c);
	printf("%s \n", str1);
	printf("%s \n", str2);

	printf("%hhi %hhi %hhi %hhi %hhi\n",
		str2[0], str2[1], str2[2], str2[3], str2[4]); 
	// str[2], str[3], str[4] -> ���ο��� 0�� ������ ������ ���� ���� ���� ���������ٴ� �ǹ�. �ǹ̰� ����.


	//char str3[10] = "Hello, World";// array sze is not enough. -> �̸� ������ ����� ������ ������ �߻��Ѵ�. 12�� ó��.
	char str3[20] = "Hello , \0 World"; // '\0(null character printf)'�� �־��� ������ null character printf�� �����ϰ� �ȴ�. 
	printf("%s\n", str3);



}