#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//printf("I Iove apple. \n");

	char str[100];
	scanf("%s", str);
	printf("I Iove %s \n", str);

	//C:\����\����\source\repos\Project8\Debug>Project2.exe
	// ���� cmd���� �Է��� �� > Banana
    // cmd ��°� I Iove Banana


	//printf("Programming. \n");


	return 0;
}

/*

����� �����������ϴ� ���̴�.

Cmd(��� ���α׷�)�� Ű��

cd C:\Users\����� �̸�\Project8\Debug �� �Է��ϸ� 
�ش��ϴ� ������ �̵��ȴ�.

1. DIR�� �Է��ϸ�)
   ���� �����ִ� ������Ʈ�� ���ϵ��� �ִٴ� ���� Ȯ�� �� �� �ְ�

2. ���ϸ� �Է��ϸ� )
    ex Project2.exe ���α׷����� ����� ���� ��µǰ� 

3. output.txt�� �Է��ϸ�)
    ���� ������ \Project8\Debug>explorer �Է��ؼ� output.txt�� ����� 
	Ȯ���� �� �ִ�.


����>Project2.exe< ddd.txt
I Iove KIWI(Ű���� ddd���Ͽ� �Է��� ��)�� ��µȴ�.


4. >>�� ����Ѵٸ�)
   ex Project2.exe>>output.txt

I Iove apple.
I Iove Banana
�� ��µȴ�.

5. copy �� ����ϰ� 

copy Project2.exe test.exe
        1�� ������ ����Ǿ����ϴ�.

		>test.exe |Project2.exe�� �Է��Ѵٸ�
		I Iove Programming.�� ������� ��µȴ�.

test.exe�� Project2.exe �������� �귯�� ����� ��µǾ���.

�����Ͱ� ��Ʈ���� �귯����.
�����Ͱ� ���Ϸ� ����� �� �ִ�.

*/