#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e,f;
	printf("一整天的總里程數\n");
	printf("汽油一公升多少\n");
	printf("平均一公升可以走幾公里\n");
	printf("一天的停車費多少元\n");
	printf("一天的通行費多少元\n");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	f=(a / c)* b + d + e;
	printf("一天開車上班的花費為%d", f);
	system("pause");
	return 0;

}