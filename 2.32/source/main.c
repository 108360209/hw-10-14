#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c;
	printf("請輸入你的身高(CM)\n");
	scanf_s("%f", &a);
	printf("請輸入你的體重(KG)\n");
	scanf_s("%f", &b);
	a = a / 100;
	c = b / (a * a);
	printf("您的BMI為%.2f\n", c);
	if (c < 18.5)
	{
		printf("過瘦\n");
	}
	if ( c < 24.9)
	{
		printf("正常\n");
	}
	if ( c < 29.9)
	{
		printf("過胖\n");
	}
	else
	{
		printf("超胖\n");
	}

	system("pause");
	return 0;

}