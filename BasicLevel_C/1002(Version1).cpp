/*author:moonlake23
question1002:写出这个数*/

/*最开始思路太复杂，且有
一点点小错误，供参考*/
#include<stdio.h>
#include<string.h>
#include<math.h>

void calculate(int num);
int reverse(int num);

int main() {
	char num[101];
	int all = 0;//all为个位数字之和
	gets_s(num);
	if (num[0] == '0'&&strlen(num)==1) {
		printf("ling\n");
	}//注意为0的特殊情况

	else {
		for (int i = 0; i < strlen(num); i++) {
			int result = (int)num[i] - 48;
			all += result;
		}
		all = reverse(all);//将all翻转，再从个位开始打印
		while (all != 0) {
			int end = all % 10;
			all = (all - end) / 10;
			if (all != 0) {
				calculate(end);
				printf(" ");
			}
			else {
				calculate(end);
			}
		}
		printf("\n");
	}
	return 0;
}

int reverse(int num) {
	int num2 = 0, a[10], length = 0;
	while (num != 0) {
		a[length] = num % 10;
		length++;
		num = (num - a[length - 1]) / 10;
	}
	for (int i = 0; i < length; i++) {
		num2 = num2 + a[i] * pow(10, length - i - 1);
	}
	return num2;
}

void calculate(int num) {
	if (num == 0)printf("ling");
	else if (num == 1)printf("yi");
	else if (num == 2)printf("er");
	else if (num == 3)printf("san");
	else if (num == 4)printf("si");
	else if (num == 5)printf("wu");
	else if (num == 6)printf("liu");
	else if (num == 7)printf("qi");
	else if (num == 8)printf("ba");
	else if (num == 9)printf("jiu");
}




