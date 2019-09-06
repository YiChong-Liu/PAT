/*author:moonlake23
question1013:数素数*/

#include<stdio.h>
#include<math.h>

int IsPrimenum(int num) {
	int flag = 1;
	if (num == 0 || num == 1)return 0;
	else {
		for (int i = 2; i*i<=num; i++) {
			if (num%i == 0)flag = 0;
		}
		return flag;
	}
}

int main() {
	int start, end;
	scanf("%d %d", &start, &end);
	int sum = 0;
	int num[10001], mark = 0;
	for (int i = 1;; i++) {
		if (IsPrimenum(i) == 1) {
			sum++;
			if (sum >= start&&sum <= end)
				num[mark++] = i;
		}
		if (sum > end)break;
	}
	for (int i = 0; i < mark; i++) {
		if ((i + 1) % 10 == 0 && i != mark - 1)printf("%d\n", num[i]);
		else if (i == mark - 1)printf("%d", num[i]);
		else
			printf("%d ", num[i]);
	}
	return 0;
}