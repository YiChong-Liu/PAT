#include<stdio.h>
int main() {
	int num, a, b, c;
	int i;
	scanf("%d", &num);
	a = num %10;//��λ
	b = (num % 100 - a) / 10;//ʮλ
	c = num / 100;//��λ
	for (i = 1; i <=c; i++)
		printf("B");
	for (i = 1; i <= b; i++)
		printf("S");
	for (i = 1; i <=a; i++)
		printf("%d",i);
	printf("\n");
	return 0;

}