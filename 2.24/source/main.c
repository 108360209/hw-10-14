#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("輸入一個數\n");
	scanf_s("%d", &a);

	if (a % 2 ==0)
	{
		printf("%d 是偶數", a);
	}
	else {
		printf("%d 是奇數", a);
	}

	system("pause");
	return 0;

}