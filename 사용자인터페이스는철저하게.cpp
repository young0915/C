#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0; 
	
	while (1)
	{
		printf("Current count is %d. Continue? (y/n)\n", count);

		int c = getchar();
		
		if (c == 'n')
			break;
		else if (c == 'y')
		{
			count++;
		}
		else
		{
			printf("Please input y or n \n");
		}


		while (getchar() != '\n')
			continue;
		// 앞글자가 'n'이 존재한다면 break됨.
	


		
	}
	return 0;
}

/*
사용자 인터페이스는 친절하게


우리가 만든 프로그램을 사용자가 사용할 수 있도록 연결해주는 부분 즉, 사용자 프로그램사이에
인터페이스가 존재한다.




*/