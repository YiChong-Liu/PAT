/*author:moonlake23
question1043:输出PATest*/

#include<stdio.h>
#include<string.h>

int main() {
	char ch[10001];
	char pat[6] = { 'P','A','T','e','s','t' };
	gets_s(ch);
	int length = strlen(ch), mark = length;

	//去掉不相关字符
	for (int i = 0; i < length; i++) {
		if (ch[i] != 'P'&&ch[i] != 'A'&&ch[i] != 'T'&&ch[i] != 'e'&&ch[i] != 's'&&ch[i] != 't')mark--;
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < length; j++) {
			if (pat[i] == ch[j]) 
			{
				printf("%c", pat[i]);
				ch[j] = 'r';
				mark--;
				break;
			}
		}
		//继续循环，一直打印
		if (i == 5 && mark > 0)i = -1;
	}
	printf("\n");
}


