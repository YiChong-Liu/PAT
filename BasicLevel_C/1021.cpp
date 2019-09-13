/*author:moonlake23
question1021:个位数统计*/

#include<stdio.h>
#include<string.h>
typedef struct {
	char key;
	int cases;
}Answer;
int main() {
	char num[1001];
	gets_s(num);
	int length = strlen(num);
	Answer obj[11];

	for (int i = 48; i <= 58; i++) {
		obj[i - 48].key = i;
		obj[i - 48].cases = 0;
	}

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < 11; j++) {
			if (obj[j].key == num[i])obj[j].cases++;
		}
	}

	for (int i = 0; i < 11; i++)
		if (obj[i].cases != 0) {
			printf("%c:%d\n", obj[i].key, obj[i].cases);
		}

	return 0;
}