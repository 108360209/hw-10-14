#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("��J�@�Ӽ�\n");
	scanf_s("%d", &a);

	if (a % 2 ==0)
	{
		printf("%d �O����", a);
	}
	else {
		printf("%d �O�_��", a);
	}

	system("pause");
	return 0;

}