/*author:moonlake23
question1093:字符串A+B*/

/*一种骚到不行的解法
O(∩_∩)O哈哈~*/

#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[127] = { 0 };
	char b;
	for (int i = 0; i < 2; i++) {
		while ((b = getchar()) != '\n') {
			if (a[b] == 0) {
				printf("%c", b);
				a[b] = 1;
			}
		}
	}
}