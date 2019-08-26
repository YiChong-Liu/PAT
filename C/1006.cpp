/*author:moonlake23
question1006: 换个格式输出整数*
#include<stdio.h>
int main() {
	int num, a, b, c;
	int i;
	scanf("%d", &num);
	a = num %10;//个位
	b = (num % 100 - a) / 10;//十位
	c = num / 100;//百位
	for (i = 1; i <=c; i++)
		printf("B");
	for (i = 1; i <= b; i++)
		printf("S");
	for (i = 1; i <=a; i++)
		printf("%d",i);
	printf("\n");
	return 0;

}