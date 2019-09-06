/*author:moonlake23
question1086:就不告诉你*/

#include<stdio.h>
#include<math.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int result = a*b, sum = 0;
	int num[101], mark = 0;
	while (result) {
		num[mark++] = result % 10;
		result /= 10;
	}

	for (int i = 0; i < mark; i++) {
		sum += num[i] * pow(10, mark - i - 1);
	}
	printf("%d\n", sum);
	return 0;
}