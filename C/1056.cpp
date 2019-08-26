/*author:moonlake23
question1056:组合数的和*/

#include<stdio.h>
int main() {
	int capacity, num1[11],num2[11];
	scanf("%d",&capacity);
	for (int i = 0; i < capacity; i++) {
		scanf("%d", &num1[i]);
		num2[i] = num1[i];
	}

	int all = 0;//总和
	for(int i=0;i<capacity;i++)
		for (int j = 0; j < capacity; j++) {
			if (num1[i] == num2[j])continue;
			else {
				int sum = num1[i] * 10 + num2[j];
				all += sum;
			}
		}
	printf("%d\n", all);
	return 0;
}



