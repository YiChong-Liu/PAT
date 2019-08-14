#include<stdio.h>
int program(int num)
{
	int all = 0;
	if (num == 1)return 0;
	else
	{
		while (num != 1)
		{
			if (num % 2 == 0) {
				num = num / 2;
				all++;
			}
			else {
				num = (3 * num + 1) / 2;
				all++;
			}
		}
		return all;
	}
}
int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", program(num));
	return 0;
}