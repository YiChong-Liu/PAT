/*author:moonlake23
question1031:查验身份证*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	char num[101][20];
	char num2[101][20];
	int	weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char code[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int i, j, m, k = 0;
	for (i = 0; i<n; i++)
		scanf("%s", num[i]);
	for (i = 0; i<n; i++)
	{
		int sum = 0;
		for (j = 0; j<17; j++)
		{
			if (num[i][j]>'9' || num[i][j]<'0')
				sum += 10;
			sum += ((num[i][j] - '0')*weight[j]);
		}
		if (code[sum % 11] != num[i][17])
		{
			strcpy(num2[k++], num[i]);
		}
	}
	if (k == 0)
		printf("All passed\n");
	else
	{
		for (i = 0; i<k; i++)
		{
			printf("%s", num2[i]);
			printf("\n");
		}
	}
	return 0;
}




