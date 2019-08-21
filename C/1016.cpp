/*author:moonlake23
question 1016:²¿·ÖA+B*/

#include<stdio.h>
#include<string.h>
#include<math.h>


int mainprogram(char num1[101], char identifier1) {
	int n1 = 0, sum1 = 0;
	for (int i = 0; i < strlen(num1); i++) {
		if (num1[i] == identifier1) {
			n1++;
		}
	}
	for (int i = n1 - 1; i >= 0; i--) {
		sum1 += (int)(identifier1 - 48)*pow(10, i);
	}
	return sum1;
}

int main() {
	char num1[101], num2[101];
	char identifier1, identifier2;
	scanf("%s", num1);
	getchar();
	scanf("%c", &identifier1);
	scanf("%s", num2);
	getchar();
	scanf("%c", &identifier2);
	printf("%d\n", mainprogram(num1, identifier1) + mainprogram(num2, identifier2));
	return 0;
}