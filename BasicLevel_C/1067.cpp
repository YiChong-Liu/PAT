/*author:moonlake23
question1067:试密码*/

#include<stdio.h>
#include<string.h>
int main() {
	char password[21];
	int times, mark = 0;//times:容错次数 mark:输入次数
	scanf("%s %d", password, &times);
	getchar();
	char input[42];
	int judge[42] = { 0 };//判断输出情况
	char wronginput[42][10];//存储错误密码
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 20; i++)
			wronginput[i][j] = '#';
	}
	while (gets_s(input)) {
		if (input[0] == '#')break;
		if (strcmp(password, input) == 0) {
			judge[mark++] = 1;
		}
		else {
			judge[mark] = 0;
			for (int i = 0; i < strlen(input); i++) {
				wronginput[i][mark] = input[i];
			}
			mark++;
		}
	}

	int wrongtimes = 0;
	for (int j = 0; j < mark; j++) {
		if (judge[j] == 0) {
			wrongtimes++;
			printf("Wrong password: ");
			for (int i = 0; wronginput[i][j]!='#'; i++) {
				if (wronginput[i+1][j] == '#')printf("%c\n", wronginput[i][j]);
				else
					printf("%c", wronginput[i][j]);
			}
			if (wrongtimes >= times)break;
		}
		else {
			printf("Welcome in\n");
			break;
		}
	}


	if (wrongtimes >= times)printf("Account locked\n");
	return 0;
}

