#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;
	
	//while ((c = getchar()) != EOF) //End Of File�� -1 ���� ������ �ִ�.
	//	putchar(c);
	// getchar�� ���� ���� -1�̾���ϴµ� �ƽ�Ű�ڵ忡�� ������ ������ ^z�� �Է��ϸ� 
	// ���α׷��� ����ȴ�.

	while (1)
	{
		c = getchar();					
		printf("%d\n", c);
		if (c == EOF)
			break;
	}

	return 0;
}


/*
������ ��
 getchar�̶� ǥ�� �Է¿��� ���� �ϳ��� �Է¹��� �� ����� ��ȯ�ϴ� �Լ��̴�.

 stream�̶� �������� ������ �̿��ؼ� ���α׷����� �귯�����°��� �ǹ��Ѵ�.
 ��, �������� �Է°� ����� ���α׷����� �帧�� ���ϴ� ��
*/