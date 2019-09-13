/*author:moonlake23
question1007:素数对猜想*/

#include<stdio.h>
int IsPrimenum(int num) {
	int flag = 1;
	if (num == 0 || num == 1)return 1;
	for (int i = 2; i*i <= num; i++) {
		if (num%i == 0)flag = 0;
	}
	return flag;
}

int main() {
	int max,mark = 0;
	scanf("%d", &max);
	for (int i = 2; i <= max-2; i++) {
		if (IsPrimenum(i) == 1 && IsPrimenum(i + 2) == 1) {
			mark++;
		}
	}
	printf("%d\n", mark);
	return 0;
}