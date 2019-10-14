#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("块计\n");
	scanf_s("%d", &a);

	if (a % 2 ==0)
	{
		printf("%d 琌案计", a);
	}
	else {
		printf("%d 琌计", a);
	}

	system("pause");
	return 0;

}