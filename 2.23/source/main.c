#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[3] = { 0 };
	int min,max;
	
	printf("please enter three number\n");
	scanf_s("%d%d%d", &a[0], &a[1], &a[2]);
	min = a[0];
	max = a[0];
	for (int i = 0; i <= 2; i++)
	{
		if (min > a[i])
			min = a[i];
		if (max <a[i])
			max = a[i];
	}
	printf("程单%d\n", max);
	printf("程单%d\n", min);

	system("pause");
	return 0;

}