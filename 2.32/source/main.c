#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c;
	printf("�п�J�A������(CM)\n");
	scanf_s("%f", &a);
	printf("�п�J�A���魫(KG)\n");
	scanf_s("%f", &b);
	a = a / 100;
	c = b / (a * a);
	printf("�z��BMI��%.2f\n", c);
	if (c < 18.5)
	{
		printf("�L�G\n");
	}
	if ( c < 24.9)
	{
		printf("���`\n");
	}
	if ( c < 29.9)
	{
		printf("�L�D\n");
	}
	else
	{
		printf("�W�D\n");
	}

	system("pause");
	return 0;

}