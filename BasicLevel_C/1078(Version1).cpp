/*author:moonlake23
question1078:字符串压缩与解压*/

/*版本1:部分正确
以正常思路解题，但发现一个问题:
当重复字符数量达到两位数以上时,
需要在字符串数组中开辟两个
及以上的空间来存放数字，而这里
只满足一位数 ε=(´ο｀*)))*/

/*需要改进方法*/

#include<stdio.h>
#include<string.h>

void Compress(char str[1001]) {
	char newstr[1001];
	int len = strlen(str);
	int pos = 0;//newstr下标
	for (int i = 0; i < len; i++) {
		int mark = 0;//记录重复数

		for (int j = i + 1;; j++) {
			if (str[j] == str[i])mark++;
			else break;
		}

		if (mark > 0) {
			mark++;//把本身位置算上
			char ch1 = str[i];
			newstr[pos] = mark + 48;
			newstr[pos + 1] = ch1;
			i = i + mark-1;
			pos = pos + 2;
		}else
			newstr[pos++] = str[i];
	}

	//完成压缩
	for (int i = 0; i < pos; i++)
		printf("%c", newstr[i]);
	printf("\n");
}

void Depack(char str[1001]) {
	char newstr[1001];
	int len = strlen(str);
	int pos = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] >= '2'&&str[i] <= '9') 
		{
			for (int j = 1; j < (str[i] - 48); j++) {
				newstr[pos++] = str[i + 1];
			}
		}
		else
			newstr[pos++] = str[i];
	}
	//完成解压
	for (int i = 0; i < pos; i++)
		printf("%c", newstr[i]);
	printf("\n");
}

int main() {
	char ch;
	scanf("%c", &ch);
	getchar();
	char str[1001];
	gets_s(str);

	if (ch == 'C')Compress(str);
	else
		Depack(str);

	return 0;
}