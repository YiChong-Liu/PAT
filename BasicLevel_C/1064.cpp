/*author:moonlake23
question1064:朋友数*/

#include<stdio.h>
#include<string.h>
int main()
{
	int cases;
	int number[37] = { 0 }, number2[37];
	scanf("%d", &cases);
	int sum, num;

	while (cases--){
		sum = 0;
		scanf("%d", &num);
		while (num){
			sum += num % 10;
			num /= 10;
		}
		number[sum]++;
	}

	int mark = 0;
	for (int i = 0; i<37; i++)
	{
		if (number[i]>0)
		{
			number2[mark++] = i;
		}
	}

	printf("%d\n", mark);
	for (int i = 0; i < mark; i++) {
		if (i == mark - 1)printf("%d\n", number2[i]);
		else
			printf("%d ", number2[i]);
	}
	return 0;
}


